#include "scom.h"
#include <QMutex>
#include <qDebug>
#include <QString>


scom::scom()
{
    //open();   // need to explicitely call open() for init communication
}

void scom::open(bool ct){

    ct_loc = ct;

    unsigned char    wr_cmd;  /**< @brief write command */
    unsigned char    rd_cmd;  /**< @brief read command */
    unsigned char    bitini;  /**< @brief initial states of all bits */
    unsigned char    mem[1024];    /**< @brief memory region for write and read */
    int debugDevs = 0;
    DWORD bw;
    FT_STATUS ftStatus;
    FT_DEVICE_LIST_INFO_NODE *devInfo;
    FT_Open(0, &fc);

    DWORD numDevs;

    // create the device information list

        ftStatus = FT_CreateDeviceInfoList(&numDevs);

        spiNotOK = 1;
        if (numDevs > 0) {
             // allocate storage for list based on numDevs
             devInfo =
            (FT_DEVICE_LIST_INFO_NODE*)malloc(sizeof(FT_DEVICE_LIST_INFO_NODE)*numDevs);
             // get the device information list
             ftStatus = FT_GetDeviceInfoList(devInfo,&numDevs);
             if (ftStatus == FT_OK)
             {
                 for (unsigned int i = 0; i < numDevs; i++)
                 {
                     if (debugDevs)
                     {
                                qDebug()   << "Dev" << i << ":"
                                << " Flags=" << devInfo[i].Flags
                                << " Type=" << devInfo[i].Type
                                << " ID=" << devInfo[i].ID
                                << " LocId=" << devInfo[i].LocId
                                << " Serial number=" << devInfo[i].SerialNumber
                                << " Description=" << devInfo[i].Description
                                << " ftHandle=" << devInfo[i].ftHandle;
                     }
                     spiNotOK = 0;  // if this loop is entered FTDI comm has been established
                }
             }
        }

        // make switch here for I2C / SPI
    if( ct_loc )        // ct = 1 --> SPI communication
    {

        FT_SetBitMode(fc, 0x00, 0x02);

        unsigned int div = 0x05DB;		// 1 MHz SPI clock
        mem[0] = TCK_DIVISOR;
        mem[1] = (div >> 0) & 0xFF;
        mem[2] = (div >> 8) & 0xFF;
        FT_Write(fc, mem, 3, &bw );
        wr_cmd = MPSSE_DO_WRITE | MPSSE_WRITE_NEG;
        rd_cmd = MPSSE_DO_READ; //  | MPSSE_READ_NEG;
        bitini = BIT_P_CS;

        wr_cmd &= ~MPSSE_LSB;
        rd_cmd &= ~MPSSE_LSB;

        mem[0] = SET_BITS_LOW;
        mem[1] = bitini;
        mem[2] = BIT_DIR;
        FT_Write(fc, mem, 3, &bw );
    }
    else            // ct = 0 --> I2C communication
    {
        initI2C(fc);
    }


}

scom::~scom(){
    closeSPI();
}

void scom::write(int StartReg, int writes, unsigned char * write){
// check for SPI or I2C first:
    if( ct_loc )   //debug mode legacy SPI code
    {
        if (busyWriting)
            return;

        if (spiNotOK){
            open(ct_loc);
            return;
        }
        busyWriting = 1;
        int i = 0;
        unsigned char wr_cmd = 0;
        unsigned char bitini;
        wr_cmd = MPSSE_DO_WRITE | MPSSE_WRITE_NEG;
        wr_cmd &= ~MPSSE_LSB;
        bitini = BIT_P_CS;
        mem[i++] = SET_BITS_LOW;
        mem[i++] = (0x0F & (bitini ^ BIT_P_CS));
        mem[i++] = BIT_DIR;
        mem[i++] = wr_cmd;
        mem[i++] = writes-1+2; //add length of opcode and startreg
        mem[i++] = 0;
        //opcode
        if (writes == 1)
            mem[i++] = 0x02;
        else
            mem[i++] = 0x02 + ((writes-1)<<5);

        mem[i++] = StartReg;
        int j;
        for (j=0;j<writes;j++)
        {
            mem[j+i] = write[j];
            qDebug() << "Wrote:" <<  QString::number(write[j],2) << " to reg:" << StartReg+j;
        }

        i = i+j;

        mem[i++] = SET_BITS_LOW;
        mem[i++] = bitini;
        mem[i++] = BIT_DIR;
        DWORD bw;

        spiNotOK = FT_Write(fc, mem, i, &bw );
        busyWriting = 0;
    }
    else    //I2C write code
    {
        // Do data write part: stolen from Jacobsen J scom.c
        int nw = (int)writes;

        unsigned char i2c_address = 0x20;               // default I2C dev address
        int b,i2c_read = 0;

        // start write sequence
        I2CStart();

        b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_address<<1) ) );
        b = SendByteAndCheckACK(fc,(unsigned char) StartReg);
        b = SendByteAndCheckACK(fc,(unsigned char)write[0]);
        qDebug() << "Wrote:" <<  QString::number(write[0],2) << " to reg:" << StartReg;


        //  loop for multi-byte write -> not yet implemented
        for (int i = 0 ; i<nw-1;i++)
        {
            b = SendByteAndCheckACK(fc,(unsigned char)write[i+1]);
        }

        I2CStop();
    }
}

void scom::read(int address, int reads, unsigned char * buf){
// check for SPI or I2C first:
    if( ct_loc )   //debug mode legacy SPI code
    {
        if (spiNotOK){
            open(ct_loc);
            return;
        }

        if (busyWriting){
            qDebug() << "Read stopped";
            return;
        }
        int i = 0;
        DWORD bw;
        DWORD br;
        unsigned char mem[1024];
        unsigned char wr_cmd;
        unsigned char rd_cmd;
        unsigned char bitini;
        rd_cmd = MPSSE_DO_READ;
        wr_cmd = MPSSE_DO_WRITE | MPSSE_WRITE_NEG;
        wr_cmd &= ~MPSSE_LSB;
        rd_cmd &= ~MPSSE_LSB;
        bitini = BIT_P_CS;

        mem[i++] = SET_BITS_LOW;
        mem[i++] = (0x0F & (bitini ^ BIT_P_CS));
        mem[i++] = BIT_DIR;
        mem[i++] = wr_cmd;
        mem[i++] = 1; //add length of opcode and startreg
        mem[i++] = 0;

        // READ
        mem[i++] = 0x01 + ((reads-1)<<5);
        mem[i++] = address;

        mem[i++] = rd_cmd;
        mem[i++] = reads-1;
        mem[i++] = 0;

        FT_Write(fc,mem,i,&bw);
        FT_Read(fc,buf,reads,&br);

        i=0;

        mem[i++] = SET_BITS_LOW;
        mem[i++] = bitini;
        mem[i++] = BIT_DIR;

        spiNotOK = FT_Write(fc, mem, i, &bw);
    }
    else    //I2C read code
    {
        unsigned char i2c_address = 0x20;               // default I2C dev address
        unsigned char b;

        I2CStart();
        SendByteAndCheckACK(fc,(unsigned char) ((i2c_address<<1) ) );
        SendByteAndCheckACK(fc,(unsigned char)address);

        I2CStart();  // repeated start
        SendByteAndCheckACK(fc,(unsigned char) ((i2c_address<<1) + 1) );
        b = ReadnByteAndSendNAK(fc,reads);

        for (int i=0 ; i<reads ; i++)
        {
             buf[i] = r_mem[i];
        }

        I2CStop();
        r_mem[0] = 255;      
    }
}

void scom::closeSPI(){
    FT_Close(fc);
}

// start implementing Jacobsen scom.c functions for I2C

void scom::I2CStart(void) {

    int i;
    for(i = 0; i < 4; i++) {
      mem[dw++] = 0x80;
      mem[dw++] = 0x03;
      mem[dw++] = 0x13;
    }
    for(i = 0; i < 4; i++) {
      mem[dw++] = 0x80;
      mem[dw++] = 0x01;
      mem[dw++] = 0x13;
    }
    mem[dw++] = 0x80;
    mem[dw++] = 0x00;
    mem[dw++] = 0x13;

    //FT_Write(fc, mem, dw, &dwSent); dw=0; 	     // Send off the commands and clear pointer

}


/*
 | HighSpeedSetI2CStop:
 | Generate stop condition for I2C bus.
 | Set SDA low, SCL high.
 | Set SDA high (while SCL remains high)
 | Release both pins by setting them to input mode so they are in tristate (high impidance)
 */

void scom::I2CStop(void)
{
    int i;
    for(i=0; i<4; i++) {
      mem[dw++] = 0x80;
      mem[dw++] = 0x01;
      mem[dw++] = 0x13;
    }
    for(i=0; i<4; i++) {
      mem[dw++] = 0x80;
      mem[dw++] = 0x03;
      mem[dw++] = 0x13;
    }
    //Tristate the SCL, SDA pins
      mem[dw++] = 0x80;
      mem[dw++] = 0x00;
      mem[dw++] = 0x10;
}

int scom::initI2C(FT_HANDLE fc_p)
{
      fc = fc_p;

      unsigned int dwClockDivisor = 0x001D;//0x001D;//0x0095;

      int i;
      int bCommandEchoed;

      // Init mpsse
      //FT_SetBitMode(fc, 0x0, 0x00);
      FT_SetBitMode(fc, 0x0, 0x02);

      // Syncronize check
      mem[dw++] = 0xAA;  	// Add BAD command 0xxAA
      FT_Write(fc, mem, dw, &dwSent);
      dw = 0;
      do {
              //FT_SetTimeouts(fc,100,0);
        FT_Read(fc, r_mem, 2, &dwRead);
        if(dwRead < 0)
        {
          break;
        }
        if(++i > 5)	/* up to 5 times read */
          break;
      } while (dwRead == 0);

      for (i = 0; i < dwRead; i++)
      {
        if ((r_mem[i] == 0xFA) && (r_mem[i+1] == 0xAA))
        {
           bCommandEchoed = 1; break;
        }
      }
      if (bCommandEchoed == 0) { return 1; } // Error

      // Setup sys and clock divider see "AN_108_Command_Processor_for_MPSSE_and_MCU_Host_Bus_Emulation_Modes" pg. 23 onwards for opcode
      //mem[dw++] = 0x8A;//0x8B;//0x8A;  // try to enable divide by 5 for FT2232D compaibility
      //mem[dw++] = 0x97;//0x97;  // turn off adaptive clocking
      //mem[dw++] = 0x8D;//0x8C;  // disable 3-phase data shift = default
      FT_Write(fc, mem, dw, &dwSent); dw=0; 	     // Send off the commands and clear pointer
      mem[dw++] = 0x80;
      mem[dw++] = 0x03;
      mem[dw++] = 0x13;

      mem[dw++] = 0x86;//0x3B;//0x86;   // Command to set clock divisor
      mem[dw++] = dwClockDivisor & 0xFF;  //Set 0xValueL of clock divisor
      mem[dw++] = (dwClockDivisor >> 8) & 0xFF;
      FT_Write(fc, mem, dw, &dwSent); dw = 0; //Sleep(100);

      mem[dw++] = 0x85;   // Turn off loop back
      FT_Write(fc, mem, dw, &dwSent); dw = 0; //Sleep(100);
      return 0;
}


int scom::SendByteAndCheckACK(FT_HANDLE fc_p, unsigned char DataSend) {

    fc = fc_p;

    int ftStatus = 0;
    int r;
    mem[dw++] = MSB_FALLING_EDGE_CLOCK_BYTE_OUT;
    mem[dw++] = 0x00;
    mem[dw++] = 0x00;  //Data length of 0x0000 means 1 byte data to clock out
    mem[dw++] = DataSend;

    mem[dw++] = 0x80;

    mem[dw++] = 0x00;
    mem[dw++] = 0x11;
    mem[dw++] = MSB_RISING_EDGE_CLOCK_BIT_IN;
    mem[dw++] = 0x00;
    mem[dw++] = 0x87;
    FT_Write(fc, mem, dw, &dwSent); dw = 0; //Sleep(100);
//-----------------
    FT_SetTimeouts(fc,100,0);

    FT_Read(fc, r_mem, 1, &dwRead);
    if(dwRead == 0) {
      spiNotOK=true; // FTDI not connected GERASIMCHUK
      return 0; /* Error reading bit, should not happened if we are connected to FTDI */
    }
    else if(!(r_mem[0] & 0x01)) {
      r = 1;
        // Check ACK bit 0 on data byte read out
    }
    else
      r = 0;
    if(debug) printf("Received: %d, %02X\n", dwRead, r_mem[0]);
    mem[dw++] = 0x80;
    mem[dw++] = 0x02;
    mem[dw++] = 0x13;
    return r;
}

unsigned char scom::ReadByteAndSendNAK(FT_HANDLE fc_p)
{
    unsigned char r_mem_loc[1024];
    fc = fc_p;
    dw = 0;    // Clear output buffer
    // Clock one byte of data in...
    mem[dw++] = 0x20; // Command: clock data byte in on clk rising edge
    mem[dw++] = 0x00; // Length
    mem[dw++] = 0x00; // Length 0x0000 means clock ONE byte in
    // Now clock out one bit (ACK/NAK). This bit has value '1' to send a NAK to the I2C Slave
    mem[dw++] = 0x13; // Command: clock data bits out on clk falling edge
    mem[dw++] = 0x00; // Length of 0x00 means clock out ONE bit
    mem[dw++] = 0xff; // Command will send bit 7 of this byte (= \u20181\u2019)
    // Put I2C line back to idle (during transfer) state... Clock line low, Data line high
    mem[dw++] = 0x80; // Command to set ADbus direction/ data
    mem[dw++] = 0xFE; // Set the value of the pins
    mem[dw++] = 0xFB; // Set pins o/p except bit 2 (data_in)
    // AD0 (SCL) is output driven low
    // AD1 (DATA OUT) is output high (open drain)
    // AD2 (DATA IN) is input (therefore the output value specified is ignored)
    // AD3 to AD7 are inputs driven high (not used in this application)
    // This command then tells the MPSSE to send any results gathered back immediately
    mem[dw++] = 0x87; // Send answer back immediate command
    // Send off the commands to the FT232H
    FT_Write(fc, mem, dw, &dwSent); dw = 0;

    // ===============================================================
    // Now wait for the byte which we read to come back to the host PC
    // ===============================================================
   Sleep(100);
   FT_Read(fc, r_mem, 1, &dwRead);
   //r_mem[0] = r_mem_loc[0];
   return r_mem[0];
}

unsigned char scom::ReadnByteAndSendNAK(FT_HANDLE fc_p,unsigned char n)
{
    fc = fc_p;
    //unsigned char r_mem[1024];

    dw = 0;    // Clear output buffer
    int i;
    for (i=0 ; i<n ; i++)
    {
      // Clock one byte of data in...
      mem[dw++] = 0x20; //0x20; // Command: clock data byte in on clk rising edge
      mem[dw++] = 0x00; // Length
      mem[dw++] = 0x00; // Length 0x0000 means clock ONE byte in

      mem[dw++] = 0x80; // Command to set ADbus direction/ data
      mem[dw++] = 0x00; // Set the value of the pins
      mem[dw++] = 0x13; // Set pins o/p except bit 2 (data_in)

      // Now clock out one bit (ACK/NAK). This bit has value '1' to send a NAK to the I2C Slave
      mem[dw++] = 0x13; // Command: clock data bits out on clk falling edge
      mem[dw++] = 0x00; // Length of 0x00 means clock out ONE bit
      mem[dw++] = (i+1==n)?0xff:0x00; // Nack only on last
      // Put I2C line back to idle (during transfer) state... Clock line low, Data line high
      mem[dw++] = 0x80; // Command to set ADbus direction/ data
      mem[dw++] = 0x02; // Set the value of the pins
      mem[dw++] = 0x11; // Set pins o/p except bit 2 (data_in)
    }

    // AD0 (SCL) is output driven low
    // AD1 (DATA OUT) is output high (open drain)
    // AD2 (DATA IN) is input (therefore the output value specified is ignored)
    // AD3 to AD7 are inputs driven high (not used in this application)
    // This command then tells the MPSSE to send any results gathered back immediately

    mem[dw++] = 0x87; // Send answer back immediate command
    // Send off the commands to the FT232H
    FT_Write(fc, mem, dw, &dwSent); dw = 0;

    // ===============================================================
    // Now wait for the byte which we read to come back to the host PC
    // ===============================================================
   Sleep(10);
   unsigned char t_mem[256];
   FT_Read(fc, r_mem, n, &dwRead);

   return r_mem[0];
}

/*
 | ReadByte:
 | Read I2C byte.
 | Note that read address must be sent beforehand
 */
unsigned char scom::ReadByte(FT_HANDLE fc_p)
{
    fc = fc_p;
    // Command to set directions of lower 8 pins and force value on bits set as output
    mem[dw++] = 0x80;
    // Set SCL low
    mem[dw++] = 0x00;
    // Set SK, GPIOL0 pins as output
    mem[dw++] = 0x11;
    // Command to clock data byte in on –ve Clock Edge MSB first
    mem[dw++] = MSB_FALLING_EDGE_CLOCK_BYTE_IN;
    mem[dw++] = 0x00;
    mem[dw++] = 0x00;

    // Data length of 0x0000 means 1 byte data to clock in
    // Command to scan in acknowledge bit , -ve clock Edge MSB first
    mem[dw++] = MSB_RISING_EDGE_CLOCK_BIT_IN;
    mem[dw++] = 0x00;  // Length of 0 means to scan in 1 bit
    mem[dw++] = 0x87; // Send answer back immediate command
    FT_Write(fc, mem, dw, &dwSent);  dw = 0;

    // Read two bytes from device receive buffer, first byte is data read, second byte is ACK bit
    FT_Read(fc, r_mem, 2, &dwRead);
    if(dwRead < 2) {
        printf("Error reading i2c\n");
        return 0xFF;
    }
    if(debug)
        printf("Data read: %02X\n", r_mem[0]);
    return r_mem[0];
}

unsigned char scom::fuse(unsigned char address, unsigned char *fb_data)
{  
   // Jørgen ground code:
   // scom w 36 0
   // scom w 35 address<<2
   // scom w 36 0x50
   // fusebank0(address) = scom r 106 
   // fusebank1(address) = scom r 107

   // QT implementation:
    unsigned char wbuf[8];
    unsigned char rbuf[8];
    wbuf[0] = 0x00;
    write(36,1,wbuf);
    wbuf[0] = address<<2;
    write(35,1,wbuf);
    wbuf[0] = 0x50;
    write(36,1,wbuf);
    read(106,1,rbuf);
    fb_data[0] = rbuf[0];
    read(107,1,rbuf);
    fb_data[1] = rbuf[0];
}
    
   

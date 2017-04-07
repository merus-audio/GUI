#ifndef SCOM_H
#define SCOM_H

#include <winsock2.h>
#include <windef.h>
#include <windows.h>
#include <stdio.h>
#include <QString>
#include "lib/ftd2xx.h"
#include <QMutex>


/* Shifting commands IN MPSSE Mode*/
#define MPSSE_WRITE_NEG 0x01   /* Write TDI/DO on negative TCK/SK edge*/
#define MPSSE_BITMODE   0x02   /* Write bits, not bytes */
#define MPSSE_READ_NEG  0x04   /* Sample TDO/DI on negative TCK/SK edge */
#define MPSSE_LSB       0x08   /* LSB first */
#define MPSSE_DO_WRITE  0x10   /* Write TDI/DO */
#define MPSSE_DO_READ   0x20   /* Read TDO/DI */
#define MPSSE_WRITE_TMS 0x40   /* Write TMS/CS */

/* FTDI MPSSE commands */
#define SET_BITS_LOW   0x80    /*BYTE DATA*/ /*BYTE Direction*/
#define SET_BITS_HIGH  0x82    /*BYTE DATA*/ /*BYTE Direction*/
#define GET_BITS_LOW   0x81
#define GET_BITS_HIGH  0x83
#define LOOPBACK_START 0x84
#define LOOPBACK_END   0x85
#define TCK_DIVISOR    0x86    /* Value Low */ /* Value HIGH */ /*rate is 12000000/((1+value)*2) */
#define DIV_VALUE(rate) (rate > 6000000)?0:((6000000/rate -1) > 0xffff)? 0xffff: (6000000/rate -1)

/* Commands in MPSSE and Host Emulation Mode */
#define SEND_IMMEDIATE 0x87
#define WAIT_ON_HIGH   0x88
#define WAIT_ON_LOW    0x89

/* Commands in Host Emulation Mode */
#define READ_SHORT     0x90    /* Address_Low */
#define READ_EXTENDED  0x91    /* Address High */ /* Address Low  */
#define WRITE_SHORT    0x92    /* Address_Low */
#define WRITE_EXTENDED 0x93    /* Address High */ /* Address Low  */

# define FTDISPI_ERROR_NONE 0
   /** @brief returned when a function is called with a non/bad init context */
# define FTDISPI_ERROR_CTX -1
   /** @brief returned when a command is imposible */
# define FTDISPI_ERROR_CMD -2
   /** @brief returned on allocation problems */
# define FTDISPI_ERROR_MEM -3
   /** @brief returned on libftdi error */
# define FTDISPI_ERROR_LIB -4
   /** @brief returned on clock error */
# define FTDISPI_ERROR_CLK -5
   /** @brief returned on timeout error */
# define FTDISPI_ERROR_TO  -6

# define CLOCK_MAX_SPEEDX5 30000000 /**< @brief Clock max speed in Hz for H class device */
# define CLOCK_MAX_SPEED    6000000 /**< @brief Clock max speed in Hz */
# define CLOCK_MIN_SPEED        100 /**< @brief Clock min speed in Hz */

# define FTDISPI_GPO0 0x10 /**< @brief General Purpose Output bits 0 (D4) */
# define FTDISPI_GPO1 0x20 /**< @brief General Purpose Output bits 1 (D5) */
# define FTDISPI_GPO2 0x40 /**< @brief General Purpose Output bits 2 (D6) */
# define FTDISPI_GPO3 0x80 /**< @brief General Purpose Output bits 3 (D7) */

#define BBMODE_NORMAL 1
#define BBMODE_SPI    2

/* Clock X5 Command for H class component */
#define TCK_X5 0x8a

#define BIT_P_CS 0x08
#define BIT_P_DI 0x04
#define BIT_P_DO 0x02
#define BIT_P_SK 0x01
#define BIT_P_G0 FTDISPI_GPO0
#define BIT_P_G1 FTDISPI_GPO1
#define BIT_P_G2 FTDISPI_GPO2
#define BIT_P_G3 FTDISPI_GPO3
#define BIT_P_GX (FTDISPI_GPO0|FTDISPI_GPO1|FTDISPI_GPO2|FTDISPI_GPO3)

#define BIT_DIR (BIT_P_SK|BIT_P_DO|BIT_P_CS|BIT_P_G0|BIT_P_G1|BIT_P_G2|BIT_P_G3)

#define SPI_MAX_MSG_SIZE (64*1024)
#define DEFAULT_MEM_SIZE ((SPI_MAX_MSG_SIZE) + 9)


#define RETRY_MAX       10
#define RETRY_TIME      1000

// added defines from Jacobsen I2C scom.c

#define MSB_FALLING_EDGE_CLOCK_BYTE_IN 0x24;
#define MSB_FALLING_EDGE_CLOCK_BYTE_OUT 0x11;
#define MSB_RISING_EDGE_CLOCK_BIT_IN 0x22;

class scom
{
public:
   void write(int StartReg, int writes, unsigned char *write);
   void read(int address, int reads, unsigned char *buf);

   void open(bool ct);
   int spiNotOK;
   bool ct_loc;
   scom();  //Constructor
   ~scom(); //Destructor

   // added I2C function from Jacobsen scom.c
   void I2CStart(void);
   void I2CStop(void);
   int initI2C(FT_HANDLE fc_p);
   int SendByteAndCheckACK(FT_HANDLE fc_p, unsigned char DataSend);
   unsigned char ReadByteAndSendNAK(FT_HANDLE fc_p);
   unsigned char ReadnByteAndSendNAK(FT_HANDLE fc_p,unsigned char n);
   unsigned char ReadByte(FT_HANDLE fc_p);

   unsigned char mem[1024];
   unsigned char r_mem[1024];
   int dw;
   DWORD dwSent;
   DWORD dwRead;
   int debug = 1;

   unsigned char fuse(unsigned char address, unsigned char *fb_data);
   QMutex read_axes_mutex;

private:
    void closeSPI();    
    FT_HANDLE fc;
    int busyWriting;
};

#endif // SCOM_H

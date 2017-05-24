
#include "devicecontrol.h"
#include "newwindow.h"
#include "registerbrowser.h"
#include "ui_devicecontrol.h"
#include <QProcess>
#include <QLabel>
#include <QString>
#include <QChar>
#include <QDesktopServices>
#include <QUrl>
#include <QProgressBar>
#include <QPixmap>
#include <QDesktopWidget>
#include <QScreen>
#include <QApplication>
#include <Windows.h>
#include <QLayout>
#include <regmap.h>
#include <fusemap.h>
#include <QKeyEvent>
#include <QGroupBox>
#include <QPalette>
#include <QSize>

#include "qwidjetpainter.h"
#include "ui_qwidjetpainter.h"
#include "qthread_readreg.h"

//+++++++++++++++++++++++++++++++++++++EVELOPEX: GERASIMCHUK+++++++++++++++++++++++++++++++++++++++++++++
#include "devicecontrol_tooltipe.h"
#include <QMessageBox>
#include <qscomthreadsave.h>
#include <about_window.h>
#include <merus_register_address_description.h>
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// QScomThreadSave - this class a use mutex for access FTDI functions
QScomThreadSave DevCom;
bool DAPopen;

QList<QString> program_dev_list={"MA12040P","MA12070P","MA120x0P"};


DeviceControl::DeviceControl(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeviceControl)
{
    //Setup window
    ui->setupUi(this);
    // Set window title and icon
    setWindowTitle("MA120xxx GUI");
    setWindowIcon(QIcon(":/IMG/meruslogo_32.png"));


    //------------------DevID and Devstatus string------------------
        ui->RadioButtonDeviceStatus->setEnabled(false);
        ui->RadioButtonDeviceStatus->setChecked(false);
    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // --------Set power mode grup button---------------------
    ui->radioButton_pmp1->setCheckable(true);
    button_power_mode = new QButtonGroup();
    button_power_mode->addButton(ui->radioButton_pmp1,0);
    button_power_mode->addButton(ui->radioButton_pmp2,1);
    button_power_mode->addButton(ui->radioButton_pmp3,2);
    button_power_mode->addButton(ui->radioButton_pmp4,3);
    button_power_mode->addButton(ui->radioButton_pmp5,4);
    connect(button_power_mode,SIGNAL(buttonClicked(int)),this,SLOT(button_power_mode_grup_slote(int )));

    /* ------------------------------------------------
     * Start connecting signals and slots
     * -----------------------------------------------*/
    connect(ui->pushButtonProgram,SIGNAL(clicked()),this,SLOT(do_pushButtonProgram_clicked()));

    connect(ui->pushButtonLoad,SIGNAL(clicked()),this,SLOT(do_pushButtonLoad_clicked()));
    connect(ui->pushButtonSave,SIGNAL(clicked()),this,SLOT(do_pushButtonSave_clicked()));
    connect(ui->pushButtonRec,SIGNAL(clicked()),this,SLOT(do_pushButtonRec_clicked()));

    connect(ui->actionAbout_2,SIGNAL(triggered()),this,SLOT(do_menuActionAbout_clicked()));
    connect(ui->actionClose,SIGNAL(triggered()),this,SLOT(close()));
    connect(ui->actionReconnect,SIGNAL(triggered()),this,SLOT(do_menuActionReconnect_clicked()));
    connect(ui->actionRegister_Browser,SIGNAL(triggered()),this,SLOT(do_menuActionRegBrow_clicked()));


    DAPopen = 0;
    newW = new newWindow(0);    // New window object
    regB = new RegisterBrowser;

    //add menu reaction
    connect(ui->actionDigital_Audio_Processor,SIGNAL(triggered()),this,SLOT(do_pushButton_DAP_clicked()));
    connect(ui->actionI2S_Setup_2,SIGNAL(triggered()),this->newW,SLOT(on_pushButtonI2SSetup_clicked()));



    // connection from register browser (actually from the custom wdiget - a bit dirty)
    connect(regB,SIGNAL(map_to_main(int,int,bool)),this,SLOT(writeBitregBrow(int,int,bool)));
    connect(regB,SIGNAL(regBrow_closed()),this,SLOT(regBrow_closed()));

    // connection to update DAP settings globally
    connect(this,SIGNAL(send_reg_bank_DAP(unsigned char*)),newW,SLOT(receive_reg_bank_DAP(unsigned char*)));

    // Connections for initialization of DAP window
    connect(this,SIGNAL(DAPclicked()),newW,SLOT(confirmDAP())); //emit DAPclicked triggers confirmDAP
    connect(newW,SIGNAL(DAPopened()),this,SLOT(getGUIvals())); // confirmDAP emits DAPopened, triggers getGUIvals
    // SIGNALS INSIDE getGUIvals. All transmits read buffers from device with info
    connect(this,SIGNAL(sendVol(unsigned char*)),newW,SLOT(InitVol(unsigned char*)));
    connect(this,SIGNAL(sendCHthr(unsigned char*)),newW,SLOT(InitCHthr(unsigned char*)));
    connect(this,SIGNAL(sendAtkDecState(unsigned char*)),newW,SLOT(InitAtkDecState(unsigned char*)));
    connect(this,SIGNAL(sendLimitMuteState(unsigned char*)),newW,SLOT(InitLimitMuteState(unsigned char*)));
    connect(this,SIGNAL(sendAudioProcEnableState(unsigned char*)),newW,SLOT(InitAudioProcEnableState(unsigned char*)));
    connect(this,SIGNAL(sendAudioProcState(unsigned char*)),newW,SLOT(UpdateAudioProcState(unsigned char*)));

    //Connections for operation of DAP window - Reacts whenever an action occurs
    connect(newW,SIGNAL(MasterVolChanged(unsigned char*)),this,SLOT(writeMasterVol(unsigned char*)));
    connect(newW,SIGNAL(CHvolsChanged(unsigned char*)),this,SLOT(writeCHvols(unsigned char*)));
    connect(newW,SIGNAL(CHthrsChanged(unsigned char*)),this,SLOT(writeCHthrs(unsigned char*)));
    connect(newW,SIGNAL(attackDecayByteNeeded(unsigned char*)),this,SLOT(getAttackDecayByte(unsigned char*)));
    connect(newW,SIGNAL(attackDecayByteReady(unsigned char*)),this,SLOT(writeAttackDecayByte(unsigned char*)));
    connect(newW,SIGNAL(muteLimitByteNeeded(unsigned char*)),this,SLOT(getMuteLimitByte(unsigned char*)));
    connect(newW,SIGNAL(muteLimitByteReady(unsigned char*)),this,SLOT(writeMuteLimitByte(unsigned char*)));
    connect(newW,SIGNAL(AudioProcByteNeeded(unsigned char*)),this,SLOT(getAudioProcByte(unsigned char*)));
    connect(newW,SIGNAL(AudioProcByteReady(unsigned char*)),this,SLOT(writeAudioProcByte(unsigned char*)));
    connect(newW,SIGNAL(AudioInModeExtByteNeeded(unsigned char*)),this,SLOT(getAudioInModeExtByte(unsigned char*)));
    connect(newW,SIGNAL(AudioInModeExtByteReady(unsigned char*)),this,SLOT(writeAudioInModeExtByte(unsigned char*)));
    connect(newW,SIGNAL(AudioInModeByteNeeded(unsigned char*)),this,SLOT(getAudioInModeByte(unsigned char*)));
    connect(newW,SIGNAL(AudioInModeByteReady(unsigned char*)),this,SLOT(writeAudioInModeByte(unsigned char*)));
    connect(newW,SIGNAL(I2SdataNeeded(unsigned char*)),this,SLOT(getI2Sdata(unsigned char*)));
    connect(newW,SIGNAL(writeI2Sdata2(unsigned char*,int)),this,SLOT(writeI2Sdata3(unsigned char*,int)));
    connect(newW,SIGNAL(windowClosed()), this, SLOT(windowIsClosed()));  
    /* ------------------------------------------------
     * End signals and slots
     * -----------------------------------------------*/

    /* ------------------------------------------------
     * Set inits
     * -----------------------------------------------*/
    ui->progressBar_ch0->setValue(0);
    ui->progressBar_ch1->setValue(0);
    ui->progressBar_ch0->setName("0");
    ui->progressBar_ch1->setName("1");

    // Open I2C port fore read device
    DevCom.open(0);
    device_init_state=true; // said that need update comtroll element status

    ui->actionSave_settings->setDisabled( true );
    ui->actionEVK_User_Manual->setDisabled( true );
    ui->actionHelp->setDisabled( true );
    ui->actionMA12070x_Datasheet->setDisabled( true );
    ui->actionAbout->setDisabled( true );
    ui->actionDevice_Info->setDisabled( true );


//+++++++++++DEVELOPEX: GERASIMCHUK++++++++++++++++++++++++++++++++++++++++++++
    // Set new scale threshold in pointer indicator acording maximum range of modulation index
    ui->progressBar_ch0->set_new_scale_threshold(0,255);
    ui->progressBar_ch1->set_new_scale_threshold(0,255);

    // Short mode register brouser window
    regModeBERR = new ModeRegisterBrouser_short;
    // Thread for read MERUS memory map
    thread_reg= new QThread_ReadReg;
    thread_reg->set_thread_state(THREAD_RUN);

    // "About" window
    About = new About_window(this);


    // "Debug monitor" cliked

    //Created key "TAB" press event ven opened DAP window
    UserTabEvent = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier,0);
    add_tooltype(this);
    add_tooltype(this->newW);
    add_tooltype(this->newW->DAsetup);

    // signal-slot for update error brouser window
    connect(thread_reg, &QThread_ReadReg::update_register_signal,regModeBERR, &ModeRegisterBrouser_short::update_register_indication_slot);
    // signal-slot for update register brouser window
    connect(thread_reg, &QThread_ReadReg::update_register_signal,this,        &DeviceControl::get_dev_status_pol);                // update configuration registers
    connect(this,&DeviceControl::send_reg_bank,regB,                          &RegisterBrowser::receive_reg_bank);
    connect(this,&DeviceControl::send_reg_bank,regB,                          &RegisterBrowser::update_register_indication_slot);

    connect(ui->actionError_Vector_Monitor,SIGNAL(triggered()),this,SLOT(do_menuActionError_Vector_Monitor_clicked()));
    connect(regModeBERR, &ModeRegisterBrouser_short::click_clear_button_signal,this, &DeviceControl::clear_acumulated_error_reg_slot);

}


//update device status
//if arg "devID" or arg "devStatus" not used - pass "0" symbol
void DeviceControl::setdev_status(QString devID, QString devStatus){
    if(devStatus!="0"){
       ProgStatus=devStatus;
       if(QString::compare(ProgStatus,DEV_CONNECT)==0){
         ui->RadioButtonDeviceStatus->setChecked(true);
       }
       else{
         ui->RadioButtonDeviceStatus->setChecked(false);
       }

    }
    if(devID!="0"){
        DevID=devID;
    }
    ui->RadioButtonDeviceStatus->setText(DevID+"  "+ProgStatus);
}

void DeviceControl::button_power_mode_grup_slote(int id_button){
    unsigned char wbuf[1];
    qDebug()<<("ID BUTTON"+id_button);
    qDebug()<<id_button;
    Reg_bank[29] = id_button;
    wbuf[0] = id_button;
    DevCom.write(29,1,wbuf);
}



DeviceControl::~DeviceControl()
{
    delete ui;
}


// Slots for SPI comm from DAP window
void DeviceControl::writeMasterVol(unsigned char * wbuf){DevCom.write(64,2,wbuf);unsigned char rbuf[8];DevCom.read(64,8,rbuf);Reg_bank[64]=rbuf[0];Reg_bank[65]=rbuf[2];}
void DeviceControl::writeCHvols(unsigned char * wbuf){
    DevCom.write(66,5,wbuf);
    unsigned char rbuf[8];
    DevCom.read(66,8,rbuf);
    Reg_bank[66]=rbuf[0];
    Reg_bank[67]=rbuf[1];
    Reg_bank[68]=rbuf[2];
    Reg_bank[69]=rbuf[3];
    Reg_bank[70]=rbuf[4];
}
void DeviceControl::writeCHthrs(unsigned char * wbuf){DevCom.write(71,5,wbuf);unsigned char rbuf[8];DevCom.read(71,8,rbuf);Reg_bank[71]=rbuf[0];Reg_bank[72]=rbuf[1];Reg_bank[73]=rbuf[2];Reg_bank[74]=rbuf[3];Reg_bank[75]=rbuf[4];}
void DeviceControl::getAttackDecayByte(unsigned char * rbuf){DevCom.read(53,1,rbuf);}
void DeviceControl::writeAttackDecayByte(unsigned char * wbuf){DevCom.write(53,1,wbuf);unsigned char rbuf[8];DevCom.read(53,8,rbuf);Reg_bank[53]=rbuf[0];}
void DeviceControl::getAudioProcByte(unsigned char * rbuf){DevCom.read(53,1,rbuf);}
void DeviceControl::writeAudioProcByte(unsigned char * wbuf){DevCom.write(53,1,wbuf);unsigned char rbuf[8];DevCom.read(53,8,rbuf);Reg_bank[53]=rbuf[0];}
void DeviceControl::getAudioInModeExtByte(unsigned char * rbuf){DevCom.read(39,1,rbuf);}
void DeviceControl::writeAudioInModeExtByte(unsigned char * wbuf){DevCom.write(39,1,wbuf);unsigned char rbuf[8];DevCom.read(39,8,rbuf);Reg_bank[39]=rbuf[0];}
void DeviceControl::getAudioInModeByte(unsigned char * rbuf){DevCom.read(37,1,rbuf);}
void DeviceControl::writeAudioInModeByte(unsigned char * wbuf){DevCom.write(37,1,wbuf);unsigned char rbuf[8];DevCom.read(37,8,rbuf);Reg_bank[37]=rbuf[0];}
void DeviceControl::getMuteLimitByte(unsigned char * rbuf){DevCom.read(54,1,rbuf);}
void DeviceControl::writeMuteLimitByte(unsigned char * wbuf){DevCom.write(54,1,wbuf);unsigned char rbuf[8];DevCom.read(54,8,rbuf);Reg_bank[54]=rbuf[0];}
void DeviceControl::getI2Sdata(unsigned char * rbuf){rbuf[0] = Reg_bank[53];rbuf[1] = Reg_bank[54];rbuf[2] = Reg_bank[55];rbuf[3] = Reg_bank[55];}
void DeviceControl::writeI2Sdata3(unsigned char* wbuf,int addr){DevCom.write(addr,1,wbuf);unsigned char rbuf[8];DevCom.read(addr,8,rbuf);Reg_bank[addr]=rbuf[0];}


void DeviceControl::writeBitregBrow(int bit, int addr, bool value)
{
    unsigned char wbuf[1];
    wbuf[0] = set_bit(addr,bit,value);
    DevCom.write(addr,1,wbuf);
}

// Utility function for correcting an 8 byte readout
// (First two byte readouts are duplicates)
void DeviceControl::correctBuf(unsigned char * rbuf){
       rbuf[0] = (char) rbuf[1];
       rbuf[1] = (char) rbuf[2];
       rbuf[2] = (char) rbuf[3];
       rbuf[3] = (char) rbuf[4];
       rbuf[4] = (char) rbuf[5];
       rbuf[5] = (char) rbuf[6];
       rbuf[6] = (char) rbuf[7];
}

// Get values for init of DAP window
void DeviceControl::getGUIvals(){

    unsigned char rbuf[8];
    rbuf[0] = Reg_bank[64];
    rbuf[1] = Reg_bank[65];
    rbuf[2] = Reg_bank[66];
    rbuf[3] = Reg_bank[67];
    rbuf[4] = Reg_bank[68];
    rbuf[5] = Reg_bank[69];
    rbuf[6] = Reg_bank[70];
    emit sendVol(rbuf);

    rbuf[0] = Reg_bank[71];
    rbuf[1] = Reg_bank[72];
    rbuf[2] = Reg_bank[73];
    rbuf[3] = Reg_bank[74];
    rbuf[4] = Reg_bank[75];
    rbuf[5] = Reg_bank[76];
    rbuf[6] = Reg_bank[78];
    emit sendCHthr(rbuf);

    rbuf[0] = Reg_bank[53];
    emit sendAtkDecState(rbuf);

    rbuf[0] = Reg_bank[37];
    rbuf[1] = Reg_bank[38];
    rbuf[2] = Reg_bank[39];
    rbuf[3] = Reg_bank[40];
    emit sendAudioInModeState(rbuf);

    rbuf[0] = Reg_bank[53];
    rbuf[1] = Reg_bank[54];
    rbuf[2] = Reg_bank[55];
    rbuf[3] = Reg_bank[56];
    emit sendAudioProcEnableState(rbuf);

    rbuf[0] = Reg_bank[54];
    emit sendLimitMuteState(rbuf);
}

// Slot connected to close signal from DAPwindow
void DeviceControl::windowIsClosed(){
    DAPopen = 0;
}


void DeviceControl::do_pushButton_DAP_clicked()
{
    newW->show();
    DAPopen = 1; //Boolean for telling if window is open or not
    emit DAPclicked();
    emit send_reg_bank_DAP(Reg_bank);


    // detect scaling properties
    QDesktopWidget widget;
    QRect mainScreenSize = widget.availableGeometry(widget.primaryScreen());

    const QRect screen = QApplication::desktop()->screenGeometry();
    newW->move( screen.center() - newW->rect().center() );


    //newW->setFixedSize(1000/winW_rat,700/winH_rat);

    //-----------------DEVELOPEX GERASIMCHUK-------------------
    //Created key "TAB" press event
    QCoreApplication::sendEvent(this->newW, UserTabEvent);
    this->newW->setFocusDefault();
    //---------------------------------------------------------

}


//Update state controll element and signature
void DeviceControl::set_GUI_idle( bool pol )
{
    // Close ALL brouser and configuration windows
    regModeBERR->close();
    regB->close();
    newW->close();
    newW->DAsetup->close();



    setdev_status("0",DEV_NOT_CONNECT);
    // set all controll elements in inectiv position
    ui->progressBar_ch0->setValue(0);
    ui->progressBar_ch1->setValue(0);

    ui->pushButtonProgram->setDisabled( true );
    ui->actionDigital_Audio_Processor->setDisabled(true);
    ui->actionI2S_Setup_2->setDisabled(true);
    ui->actionError_Vector_Monitor->setDisabled(true);
    ui->actionRegister_Browser->setDisabled(true);

    ui->pushButtonSoftClipping->setDisabled(true);
    // Enable reconnect button
    ui->pushButtonRec->setDisabled( false );
    // update device state signature
    if ( pol ) //"1"
    {
        //set device activity "ID: *no Dev comm*"
        setdev_status(ID_NO_DEV ,"0");
    }
    else    //"0"
    {
        //set device activity "ID: *no FTDI conn*"
        setdev_status(ID_NO_FTDI,"0");
    }
}

// init routine for device setup
void DeviceControl::ProgramDefaults()
{
    //Device setup not needed since rev6.1
}

void DeviceControl::do_pushButtonRec_clicked()
{
     //Reconnect
    DevCom.open(0);            // re-open SPI communication
    device_init_state=true;    // set flag for update control rlrmrnts and signature state
}


void DeviceControl::do_pushButtonProgram_clicked()
{
    QMessageBox msgBox;
    int i;
    msgBox.setWindowIcon(QIcon(":/IMG/transparent.png"));
    msgBox.setWindowTitle(" ");
    // program device

    unsigned char wbuf[1];

    for( i = 0; i < REGISTER_MAP_SIZE; i++ )
    {
        wbuf[0] = loaded_data[i];
        DevCom.write(i,1,wbuf);
    }

    read_all_dev_reg();

 //+++++++++++++++++++++++++++++++DEVELOPEX: GERASIMCHUK+++++++++++++++++++++
    for( i = 0; i <= 95; i++ )
    {
        if(loaded_data[i]!=Reg_bank[i]){
            msgBox.setText("Device program UNSUCCESSFUL!");
            msgBox.setIconPixmap(QPixmap(QString( QCoreApplication::applicationDirPath())+"/IMG/assets 2/MesageBox/x_sign.png"));
            msgBox.exec();
            return;
        }
    }
    msgBox.setText("Device program SUCCESSFUL!");
    msgBox.setIconPixmap(QPixmap(QString( QCoreApplication::applicationDirPath())+"/IMG/assets 2/MesageBox/check_sign.png"));
    msgBox.exec();
    getGUIvals();
    return;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
}

void DeviceControl::do_pushButtonLoad_clicked()
{
    // Load

    QByteArray data;

    unsigned char *temp;
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"));
    QFile file(fileName);


    file.open(QIODevice::ReadOnly);
    data = file.readAll();

    temp = (unsigned char*)(data.data());

    for( int i = 0; i < REGISTER_MAP_SIZE; i++ )
    {
        loaded_data[i] = temp[i];
    }

    file.close();

    ui->pushButtonProgram->setDisabled( false );
}

void DeviceControl::do_pushButtonSave_clicked()
{
    // Save

    QByteArray data;

    data = QByteArray((char*)Reg_bank, 128);

    QString fileName = QFileDialog::getSaveFileName(this,tr("Save File"));
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);
    file.write(data);
    file.close();
}

void DeviceControl::do_menuActionReconnect_clicked()
{
    //obsolete function
}

// routine to get init device status
void DeviceControl::get_dev_status_inc()
{

    unsigned char rbuf[4];                                                                  // declare read buffer for device communication
    int rbuf_int;

    // set initial values

    setdev_status("0",DEV_CONNECT);

    ui->pushButtonProgram->setDisabled( false );
    ui->actionDigital_Audio_Processor->setDisabled(false);
    ui->actionI2S_Setup_2->setDisabled(false);
    ui->actionError_Vector_Monitor->setDisabled(false);
    ui->actionRegister_Browser->setDisabled(false);

    ui->pushButtonSoftClipping->setDisabled(false);

    ui->pushButtonRec->setDisabled( true );

    ui->pushButtonProgram->setDisabled( true );

    // program default settings for the device
    // ProgramDefaults();                                                      // comment out for clean init

    // read all device registers
    read_all_dev_reg();

    // get and set device ID
    QString str_id = get_device_id();
    QString str = QString(DEV_ID);
    // if connected not "P" device
    if(program_dev_list.indexOf(str_id)<0)
    {
        // Disable configuration
        ui->actionDigital_Audio_Processor->setEnabled(false);
        ui->actionI2S_Setup_2->setEnabled(false);
    };
    str.append(str_id);
    // update device status
    setdev_status(str,"0");


    // get Soft-clipping state
    DevCom.read(REG_10,1,rbuf);
    rbuf_int = rbuf[0] & ENABLESOFTCLIPPING;
    // set Soft-clipping state indication
    if(rbuf_int==ENABLESOFTCLIPPING){
        ui->pushButtonSoftClipping->setText("ON");
    }
    else{
         ui->pushButtonSoftClipping->setText("OFF");
    }

    // get PM status and set in GUI
    DevCom.read(REG_96,1,rbuf);                                                   // rev5 read PM0 status
    rbuf_int = rbuf[0] & 0x03;                                                // cast to integer

    if( rbuf_int == 1 )
    {
        ui->frame_ch0_pm1->setEnabled(true);
        ui->frame_ch0_pm2->setEnabled(false);
        ui->frame_ch0_pm3->setEnabled(false);
    }
    if( rbuf_int == 2 )
    {
        ui->frame_ch0_pm1->setEnabled(false);
        ui->frame_ch0_pm2->setEnabled(true);
        ui->frame_ch0_pm3->setEnabled(false);
    }
    if( rbuf_int == 3 )
    {
        ui->frame_ch0_pm1->setEnabled(false);
        ui->frame_ch0_pm2->setEnabled(false);
        ui->frame_ch0_pm3->setEnabled(true);
    }

    DevCom.read(REG_100,1,rbuf);                                                            // rev5 read PM1 status
    rbuf_int = rbuf[0] & 0x03;                                                          // cast to integer

    if( rbuf_int == 1 )
    {
        ui->frame_ch1_pm1->setEnabled(true);
        ui->frame_ch1_pm2->setEnabled(false);
        ui->frame_ch1_pm3->setEnabled(false);
    }
    if( rbuf_int == 2 )
    {
        ui->frame_ch1_pm1->setEnabled(false);
        ui->frame_ch1_pm2->setEnabled(true);
        ui->frame_ch1_pm3->setEnabled(false);
    }
    if( rbuf_int == 3 )
    {
        ui->frame_ch1_pm1->setEnabled(false);
        ui->frame_ch1_pm2->setEnabled(false);
        ui->frame_ch1_pm3->setEnabled(true);
    }

        // get modulation index status and set in GUI
    double modind;
    DevCom.read(REG_98,1,rbuf);                                                             // rev5 read mod status ch0
    rbuf_int = rbuf[0] & 0xff;                                                          // cast to integer
    modind = rbuf_int;                                                                  // cast to double
    calc_modIndex_ch0(modind);                                                          // call progress bar post-processing

    DevCom.read(REG_102,1,rbuf);                                                            // rev5 read mod status ch0
    rbuf_int = rbuf[0] & 0xff;                                                          // cast to integer
    modind = rbuf_int;                                                                  // cast to double
    calc_modIndex_ch1(modind);                                                          // call progress bar post-processing

    // get PMP init settings
    rbuf_int = Reg_bank[29];

    if( rbuf_int == 0)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);
    }
    if( rbuf_int == 1)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);

    }
    if( rbuf_int == 2)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);

    }
    if( rbuf_int == 3)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);

    }
    if( rbuf_int == 4)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);

    }
}

// routine to pol device status
void DeviceControl::get_dev_status_pol(unsigned char *reg_map, int device_state)
{
    unsigned char rbuf[8];                                                                  // declare read buffer for device communication
    int rbuf_int;

    // get and update device status
    if(device_state==DEVICE_FTDI_ERROR){
        set_GUI_idle(0);
        device_init_state=true;
        return;
    }
    else if(device_state==DEVICE_ERROR){
        set_GUI_idle(1);
        device_init_state=true;
        return;
    }
    // update control elements and signature
    if(device_init_state){
        get_dev_status_inc();
        device_init_state=false;
    }

    // get PM status and set in GUI                                                   // rev5 read PM0 status
    //rbuf_int = rbuf[0] & 0x03;                                                          // cast to integer
    rbuf_int = reg_map[REG_96] & 0x03;

    if( rbuf_int == 1 )
    {
        ui->frame_ch0_pm1->setEnabled(true);
        ui->frame_ch0_pm2->setEnabled(false);
        ui->frame_ch0_pm3->setEnabled(false);
    }
    if( rbuf_int == 2 )
    {
        ui->frame_ch0_pm1->setEnabled(false);
        ui->frame_ch0_pm2->setEnabled(true);
        ui->frame_ch0_pm3->setEnabled(false);
    }
    if( rbuf_int == 3 )
    {
        ui->frame_ch0_pm1->setEnabled(false);
        ui->frame_ch0_pm2->setEnabled(false);
        ui->frame_ch0_pm3->setEnabled(true);
    }

    // get PM1 status
    //rbuf_int = rbuf[4] & 0x03;
    rbuf_int = reg_map[REG_100] & 0x03;

    if( rbuf_int == 1 )
    {
        ui->frame_ch1_pm1->setEnabled(true);
        ui->frame_ch1_pm2->setEnabled(false);
        ui->frame_ch1_pm3->setEnabled(false);
    }
    if( rbuf_int == 2 )
    {
        ui->frame_ch1_pm1->setEnabled(false);
        ui->frame_ch1_pm2->setEnabled(true);
        ui->frame_ch1_pm3->setEnabled(false);
    }
    if( rbuf_int == 3 )
    {
        ui->frame_ch1_pm1->setEnabled(false);
        ui->frame_ch1_pm2->setEnabled(false);
        ui->frame_ch1_pm3->setEnabled(true);
    }

    // get modulation index status and set in GUI
    double modind;                                                                      // read mod status ch0
   // rbuf_int = rbuf[2] & 0xff;                                                          // cast to integer
    rbuf_int = reg_map[REG_98] & 0xff;
    modind = rbuf_int;                                                                  // cast to double
    calc_modIndex_ch0(modind);                                                          // call progress bar post-processing

                                                                                        // read mod status ch1
    //rbuf_int = rbuf[6] & 0xff;                                                          // cast to integer
    rbuf_int = reg_map[REG_102] & 0xff;
    modind = rbuf_int;                                                                  // cast to double
    calc_modIndex_ch1(modind);

    // send complete updated register bank to update register browser
    emit send_reg_bank(reg_map);


    // update the complete DAP window
    if (DAPopen)
    {
       //Status for VolumeDSP
        emit sendAudioProcState(&reg_map[REG_126]);
    }

    // get PMP init settings
    //rbuf_int = Reg_bank[29];
    rbuf_int = reg_map[REG_29];

    if( rbuf_int == 0)
    {
       button_power_mode->button(rbuf_int)->setChecked(true);
    }
    if( rbuf_int == 1)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);
    }
    if( rbuf_int == 2)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);
    }
    if( rbuf_int == 3)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);
    }
    if( rbuf_int == 4)
    {
        button_power_mode->button(rbuf_int)->setChecked(true);
    }
}


void DeviceControl::calc_modIndex_ch0(double modi)
{
    double norm_modi = modi;
    double last_modi = ui->progressBar_ch0->getValue();

    if( norm_modi > last_modi )
    {
        ui->progressBar_ch0->setValue(norm_modi);

    }
    else
    {
        ui->progressBar_ch0->setValue(last_modi-3);
    }
}


void DeviceControl::calc_modIndex_ch1(double modi)
{
    double norm_modi = modi;
    double last_modi = ui->progressBar_ch1->getValue();

    if( norm_modi > last_modi )
    {
        ui->progressBar_ch1->setValue(norm_modi);
    }
    else
    {
        ui->progressBar_ch1->setValue(last_modi-3);
    }
}





void DeviceControl::do_menuActionAbout_clicked()
{
    if(About->isVisible()){return;}
    QPoint main_window_size;
    QSize  Main_window_size,About_size;
    QRect geo;

    main_window_size= this->mapToGlobal(QPoint(0,0));
    Main_window_size=this->size();
    About_size=About->size();


    geo.setRect(main_window_size.rx()+(Main_window_size.width()-About_size.width())/2,
                main_window_size.ry()+(Main_window_size.height()-About_size.height())/2,
                About_size.width(),
                About_size.height()
                );

    About->setGeometry(geo);


    About->show();
}


void DeviceControl::do_menuActionRegBrow_clicked()
{

    QDesktopWidget widget;
    QRect mainScreenSize = widget.availableGeometry(widget.primaryScreen());

    double winH = mainScreenSize.height();
    double winW = mainScreenSize.width();

    double winH_def = 1728*0.9;
    double winW_def = 3200*0.9;

    double winH_rat = ((winH_def/winH)-1)*0.6+1;
    double winW_rat = ((winW_def/winW)-1)*0.6+1;

    regB->show();
    regB->resize(1270/winW_rat,1060/winH_rat);

    const QRect screen = QApplication::desktop()->screenGeometry();
    regB->move( screen.center() - newW->rect().center() );

}

unsigned char* DeviceControl::reg_bank_map()
{
    return Reg_bank;
}

void DeviceControl::regBrow_closed()
{

}

void DeviceControl::read_all_dev_reg()
{
    // declare read buffer for device communication
    unsigned char rbuf[REGISTER_MAP_SIZE];
    DevCom.read(REG_0,REGISTER_MAP_SIZE,rbuf);

    // read all registers and place in global Reg_bank
    for( int i = 0; i <= 127; i++ )
    {                                                        
        Reg_bank[i] = rbuf[i];
    }   
}

int DeviceControl::get_fuse_bits()
{
    // add sequence to also read the fuse bank
    unsigned char fbuf[1];
    int fuse_bits;

    // get fuse bits for audio_in_mode @address 44 45 46
    DevCom.fuse(44,fbuf);
    fuse_bits = fbuf[0];

    // extract fuse bits for audio_in_mode
    fuse_bits = (fuse_bits>>4)&0x07;

    return fuse_bits;
}


QString DeviceControl::get_device_id()
{
    QString str_id = "xxx";
    // get and set device ID
    int dev_id = hw_version;
    int au_in_mode;

    // create switch case for device ID lookup
    switch(dev_id)
    {
    case 64:
    case 68:
    case 71:
        str_id = "MA12040";
        break ;
    case 65:
    case 69:
    case 72 :
        str_id = "MA12070";
        break ;
    case 80 :
        str_id = "MA120x0"; ;
        break ;
    }

    // determine P or non-P version
    au_in_mode = audio_in_mode_mon;

    if(au_in_mode == 4)
    {
        str_id.append("P");
    }
    else
    {
        str_id.append("");
    }

    return str_id;
}




void DeviceControl::do_menuActionError_Vector_Monitor_clicked()
{

    QDesktopWidget widget;
    QRect mainScreenSize = widget.availableGeometry(widget.primaryScreen());

    double winH = mainScreenSize.height();
    double winW = mainScreenSize.width();

    double winH_def = 1728*0.9;
    double winW_def = 3200*0.9;

    double winH_rat = ((winH_def/winH)-1)*0.6+1;
    double winW_rat = ((winW_def/winW)-1)*0.6+1;

    regModeBERR->show();
    //regModeBERR->resize(1270/winW_rat,1060/winH_rat);

    const QRect screen = QApplication::desktop()->screenGeometry();
    regModeBERR->move( screen.center() - newW->rect().center() );

}


//+++++++++++++++++++++DEVELOPEX: GERASIMCHUK+++++++++++++++++++++++++++++++++++++++++


// CloseEvent occurs when red X is pressed (Top right)
void DeviceControl::closeEvent(QCloseEvent *event)
{
    thread_reg->set_thread_state(THREAD_STOP);
    QMessageBox msgBox;
    //Stop MONITOR REGISTER THREAD
    if(!thread_reg->wait(2000)){ // if thread not finished
        msgBox.setText("Program cant close corect");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    };
    delete regB;
    delete regModeBERR;
    delete newW; // Deletes object to make sure no stuff is left floating
    //
    event->accept();
}

//-------Add tooltype for all widget inside THIS class acording with "tooltipe_string" QString array
void DeviceControl::add_tooltype(QWidget *wd){
    int array_size=sizeof(tooltipe_string)/sizeof(QString)/2;
    int counter;

    foreach (QWidget *widget, wd->findChildren<QWidget *>())
    {
        for(counter=0;counter<array_size;counter++){
            if(widget->objectName()==tooltipe_string[counter][0]){
                if(tooltipe_string[counter][1]=="NoN"){
                    continue;
                 } // if no tooltype
            widget->setToolTip(tooltipe_string[counter][1]);
            }
        }

    }
}


//-------Enable/Disable "Soft-clipping". Register #10, bit 7
void DeviceControl::on_pushButtonSoftClipping_clicked()
{
    unsigned char SoftClippingState;
    DevCom.read(REG_10,1,&SoftClippingState);
    if(ui->pushButtonSoftClipping->text()=="ON"){
        SoftClippingState&=DISABLESOFTCLIPPING;
        ui->pushButtonSoftClipping->setText("OFF");
    }
    else{
        SoftClippingState|=ENABLESOFTCLIPPING;
        ui->pushButtonSoftClipping->setText("ON");
    }
    DevCom.write(REG_10,1,&SoftClippingState);
}


//-------Transmit comand for clear acumulated error reg
void DeviceControl::clear_acumulated_error_reg_slot(){
    int num=1;
    unsigned char data_write=0x4, data_read=0xFB ;
    unsigned char red_reg;
    DevCom.read(REG_45,num,&red_reg);
    red_reg|=data_write;
    DevCom.write(REG_45,num,&red_reg);
    red_reg&=data_read;
    DevCom.write(REG_45,num,&red_reg);
}
// pushButtonLoad
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





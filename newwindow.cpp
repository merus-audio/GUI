/*
Source code for new window class
controls all functionality for DAP window

Author: Dennis True, for Merus audio
Date: December 2014
*/

#include "newwindow.h"
#include "ui_newwindow.h"
#include <QKeyEvent>
#include <QDebug>
#include <QDialog>
#include <math.h>
#include "dasetupdialog.h"
#include <QDesktopWidget>

newWindow::newWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::newWindow)
{
    ui->setupUi(this);
    // Set window title and icon
    setWindowTitle("MA120xxx GUI");
    setWindowIcon(QIcon(":/IMG/meruslogo_64.png"));


    // object for I2S setup window
    DAsetup = new DAsetupDialog;

    // Connections between DAPwindow and I2S setup window
    // Initializes values for I2S gui and facilitates communication to main window (Devicecontrol)
    connect(this, SIGNAL(I2SsetupButtonClicked()),DAsetup,SLOT(confirmDAsetupDialog()));
    connect(DAsetup, SIGNAL(DAsetupDialogOpened()),this,SLOT(initDAsetupDialog()));
    connect(this, SIGNAL(I2SdataReadReady(unsigned char*)),DAsetup,SLOT(initI2Svals(unsigned char*)));

    connect(DAsetup, SIGNAL(getI2Sdata(unsigned char*)),this,SLOT(getI2Sdata2(unsigned char*)));
    connect(DAsetup, SIGNAL(I2SdataReady(unsigned char*,int)),this,SLOT(writeI2Sdata(unsigned char*,int)));

    // Connection dial swith and radiobutton action
    connect(ui->quser_dial_swith_left,SIGNAL(mouse_clic(int)) ,this,SLOT(on_dial_Attack_switch(int)));
    connect(ui->quser_dial_swith_right,SIGNAL(mouse_clic(int)),this,SLOT(on_dial_Decay_switch(int)));


    //connect(ui->mrvol,SIGNAL(valueChanged(int)),this,SLOT(on_mrvol_sliderMoved(int value)));



    //+++++++++++DEVELOPEX: GERASIMCHUK++++++++++++++++++++++++++

    ui->verticalLayout_10->setAlignment(Qt::AlignVCenter);
    // -Add keyboard list switching
    User_switch_list.push_back(ui->ch0vol);
    User_switch_list.push_back(ui->ch1vol);
    User_switch_list.push_back(ui->ch2vol);
    User_switch_list.push_back(ui->ch3vol);
    User_switch_list.push_back(ui->mrvol);
    User_switch_list.push_back(ui->ch0thr);
    User_switch_list.push_back(ui->ch1thr);
    User_switch_list.push_back(ui->ch2thr);
    User_switch_list.push_back(ui->ch3thr);

    event1 = new QKeyEvent ( QEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier);
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    ui->quser_dial_swith_left->setSide(DIAL_LEFT);
    ui->quser_dial_swith_left->set_default_switch_position();
    ui->quser_dial_swith_left->set_position(1);

    ui->quser_dial_swith_right->setSide(DIAL_RIGHT);
    ui->quser_dial_swith_right->set_default_switch_position();
    ui->quser_dial_swith_right->set_position(1);
}


void newWindow::on_dial_Decay_switch(int new_pos){
    if(new_pos==0){
        ui->decSlow->setChecked(true);
    }
    else if(new_pos==1){
        ui->decNormal->setChecked(true);
    }
    else if(new_pos==2){
        ui->decFast->setChecked(true);
    }
    else{return;}
    ctrlAttackDecay();
}


void newWindow::on_dial_Attack_switch(int new_pos){
    if(new_pos==0){
        ui->atkSlow->setChecked(true);
    }
    else if(new_pos==1){
        ui->atkNormal->setChecked(true);
    }
    else if(new_pos==2){
        ui->atkFast->setChecked(true);
    }
    else{return;}
    ctrlAttackDecay();
}




newWindow::~newWindow()
{   // Destructor destroys I2S setup window
    delete DAsetup;
    delete ui;
}

// Slot that facilitates write communication to mainwindow SPI functionality
// Takes a char array and an address. Could be expanded to do multiple reads.
void newWindow::writeI2Sdata(unsigned char * wbuf, int addr){

    emit writeI2Sdata2(wbuf,addr);
}

// More or less the same
void newWindow::getI2Sdata2(unsigned char * rbuf){

    emit I2SdataNeeded(rbuf);
}

// Initialization of I2S setup dialog. Communication with mainwindow
void newWindow::initDAsetupDialog(){
    unsigned char rbuf[3];
    emit I2SdataNeeded(rbuf);

    emit I2SdataReadReady(rbuf);
}

//Slot triggered by closing window
void newWindow::closeEvent(QCloseEvent *event)
{
    // Tell mainwindow
    emit windowClosed();
    //Close I2S setup

    DAsetup->close();
    event->accept();
}

void newWindow::on_pushButtonI2SSetup_clicked()
{
    // Emit a signal to tell the init process to begin for I2s Setup
    emit I2SsetupButtonClicked();
    DAsetup->show();

    const QRect screen = QApplication::desktop()->screenGeometry();
    DAsetup->move( screen.center() - DAsetup->rect().center() );

}

/*
// Control digital audio enable
// Stupid method used for meddling with register values.
// Should be converted to a bitwise operation instead.
// Beside that, digmode can be made different than this.
// The register "audio_in_mode" is digital for the values 4 and 5.
// right now, value 4 is used for enabling
void newWindow::on_dig_audio_enable_clicked(bool checked)
{
    unsigned char rbuf[1];
    unsigned char wbuf[1];
    //First "audio_in_mode_ext" reg

    // Read into rbuf
    emit AudioInModeExtByteNeeded(rbuf);

    // Separate other bits
    int LowPart = rbuf[0] % 32; //Separate 5 LSBs
    int HighPart = rbuf[0]/ 64; // Separate 2 MSBs

    // Make new byte
    wbuf[0] = HighPart*64 + checked*32 + LowPart;

    // Write that byte
    emit AudioInModeExtByteReady(wbuf);

    // Second, audio_in_mode reg
    // Read byte
    emit AudioInModeByteNeeded(rbuf);

    LowPart = rbuf[0] % 32; //Separate 5 LSBs

    wbuf[0] =  4*checked*32 + LowPart; //Set to audio in mode 4

    // Write
    emit AudioInModeByteReady(wbuf);

}

// Control audio proc enable
// same procedure as before.
void newWindow::on_audio_proc_enable_clicked()
{
    unsigned char rbuf[1];
    unsigned char wbuf[1];
    int val;
    emit AudioProcByteNeeded(rbuf);
    int LowPart = rbuf[0] % 8; //Separate 3 LSBs
    int HighPart = rbuf[0]/ 16; // Separate 4 MSBs
    if (ui->audio_proc_enable->isChecked()) val = 1;
    else val = 0;

    wbuf[0] = HighPart*16 + val*8 + LowPart;

    emit AudioProcByteReady(wbuf);
}

*/

// Slot for confirming open dap
void newWindow::confirmDAP(){
    emit DAPopened();
}


// Volume handles init
//Triggered by outside signal
// Loads values into gui
void newWindow::InitVol(unsigned char * rbuf){

    double mr_vol_read = (rbuf[0] << 2) + (rbuf[1] & 0x03);
    QString mr_vol_db = QString::number(24-mr_vol_read/4,'f',2) + " dB";

    double ch0_vol_read = (rbuf[2] << 2) + (rbuf[6] & 0x03);
    QString ch0_vol_db = QString::number(24-ch0_vol_read/4,'f',2) + " dB";

    double ch1_vol_read = 4*(int)rbuf[1+2] + (int)rbuf[4+2]/4 % 4;
    QString ch1_vol_db = QString::number(24-ch1_vol_read/4,'f',2) + " dB";

    double ch2_vol_read = 4*(int)rbuf[2+2] + (int)rbuf[4+2]/16 % 4;
    QString ch2_vol_db = QString::number(24-ch2_vol_read/4,'f',2) + " dB";

    double ch3_vol_read = 4*(int)rbuf[3+2] + (int)rbuf[4+2]/64 % 4;
    QString ch3_vol_db = QString::number(24-ch3_vol_read/4,'f',2) + " dB";

    ui->mrvolLabel->setText(mr_vol_db);
    ui->mrvol->setSliderPosition(mr_vol_read);

    ui->ch0volLabel->setText(ch0_vol_db);
    ui->ch0vol->setSliderPosition(ch0_vol_read);

    ui->ch1volLabel->setText(ch1_vol_db);
    ui->ch1vol->setSliderPosition(ch1_vol_read);

    ui->ch2volLabel->setText(ch2_vol_db);
    ui->ch2vol->setSliderPosition(ch2_vol_read);

    ui->ch3volLabel->setText(ch3_vol_db);
    ui->ch3vol->setSliderPosition(ch3_vol_read);

    double valueQ;
    valueQ = (ui->ch0vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch0volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch1vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch1volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch2vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch2volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch3vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch3volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");


}

// Threshhold handles init
// Triggered by outside signal
// Loads values into gui
void newWindow::InitCHthr(unsigned char * rbuf){

    double ch0_thr_read = 4*(int)rbuf[0] + (int)rbuf[4] % 4;
    QString ch0_thr_db = QString::number(24-ch0_thr_read/4,'f',2) + " dB";
    double ch1_thr_read = 4*(int)rbuf[1] + (int)rbuf[4]/4 % 4;
    QString ch1_thr_db = QString::number(24-ch1_thr_read/4,'f',2) + " dB";
    double ch2_thr_read = 4*(int)rbuf[2] + (int)rbuf[4]/16 % 4;
    QString ch2_thr_db = QString::number(24-ch2_thr_read/4,'f',2) + " dB";
    double ch3_thr_read = 4*(int)rbuf[3] + (int)rbuf[4]/64 % 4;
    QString ch3_thr_db = QString::number(24-ch3_thr_read/4,'f',2) + " dB";

    ui->ch0thrLabel->setText(ch0_thr_db);
    ui->ch0thr->setSliderPosition(ch0_thr_read);
    ui->ch1thrLabel->setText(ch1_thr_db);
    ui->ch1thr->setSliderPosition(ch1_thr_read);
    ui->ch2thrLabel->setText(ch2_thr_db);
    ui->ch2thr->setSliderPosition(ch2_thr_read);
    ui->ch3thrLabel->setText(ch3_thr_db);
    ui->ch3thr->setSliderPosition(ch3_thr_read);
}

// Attack and decay handles init
//Triggered by outside signal
// Loads values into gui
void newWindow::InitAtkDecState(unsigned char * rbuf){
    if (((int)rbuf[0]/64) == 2)
    {
        ui->atkFast->setChecked(1);
        ui->quser_dial_swith_left->set_position(2);
    }

    else if (((int)rbuf[0]/64) == 1)
    {
        ui->atkNormal->setChecked(1);
        ui->quser_dial_swith_left->set_position(1);
    }
    else
    {
        ui->atkSlow->setChecked(1);
        ui->quser_dial_swith_left->set_position(0);
    }


    if (((int)rbuf[0]/16)%4 == 2){
        ui->decFast->setChecked(1);
        ui->quser_dial_swith_right->set_position(2);
    }
    else if (((int)rbuf[0]/16)%4 == 1)
    {
        ui->decNormal->setChecked(1);
        ui->quser_dial_swith_right->set_position(1);
    }
    else
    {
        ui->decSlow->setChecked(1);
        ui->quser_dial_swith_right->set_position(0);
    }
}


// Audio proc enable handles init
//Triggered by outside signal
// Loads values into gui
void newWindow::InitAudioProcEnableState(unsigned char * rbuf){
    if (rbuf[0]/8 % 2 == 1)
         ui->pushButton_Audio_Processor_enable->setChecked(true);
    else
        ui->pushButton_Audio_Processor_enable->setChecked(false);
}


//Limit and mute handles init
//Triggered by outside signal
// Loads values into gui
// Unblocks values afterwards
// Last stage in init procedure
void newWindow::InitLimitMuteState(unsigned char * rbuf){
    if (((int)rbuf[0]/64)%2 == 1)
        //ui->limitEnable->setChecked(1);
        ui->pushButton_Limiter->setChecked(true);
    else
        //ui->limitDisable->setChecked(1);
        ui->pushButton_Limiter->setChecked(false);


    if (((int)rbuf[0]/128) == 1)
       // ui->muteEnable->setChecked(1);
        ui->pushButton_Mute->setChecked(true);
    else
        //ui->muteDisable->setChecked(1);
        ui->pushButton_Mute->setChecked(false);

    ui->ch0vol->blockSignals(0);
    ui->ch1vol->blockSignals(0);
    ui->ch2vol->blockSignals(0);
    ui->ch3vol->blockSignals(0);
    ui->ch0thr->blockSignals(0);
    ui->ch1thr->blockSignals(0);
    ui->ch2thr->blockSignals(0);
    ui->ch3thr->blockSignals(0);
    ui->mrvol->blockSignals(0);
    ui->mrvol->blockSignals(0);
    ui->atkFast->blockSignals(0);
    ui->atkNormal->blockSignals(0);
    ui->atkSlow->blockSignals(0);
    ui->decFast->blockSignals(0);
    ui->decNormal->blockSignals(0);
    ui->decSlow->blockSignals(0);
   // ui->audio_proc_enable->blockSignals(0);
   // ui->dig_audio_enable->blockSignals(0);

}

// Triggered by signal in polling routine from main
void newWindow::UpdateAudioProcState(unsigned char * rbuf){

    //reg_bank_local = Reg_bank;
    //unsigned char rbuf = rbuf[0];
    unsigned char bit[8];
    // Check every bit
    // Clipping indication
    bit[0] = rbuf[0]       % 2;
    bit[1] =  (rbuf[0]/2)   % 2;
    bit[2] =  (rbuf[0]/4)   % 2;
    bit[3] =  (rbuf[0]/8)   % 2;

    // Limit active indication
    bit[4] =  (rbuf[0]/16)  % 2;
    bit[5] = (rbuf[0]/32)  % 2;
    bit[6] =  (rbuf[0]/64)  % 2;
    bit[7] =  (rbuf[0]/128) % 2;


    // Flash icons accordingly
    if(bit[0] == 0) ui->clippingCH0->setEnabled(false);
    else            ui->clippingCH0->setEnabled(true);
    if(bit[1] == 0) ui->clippingCH1->setEnabled(false);
    else            ui->clippingCH1->setEnabled(true);
    if(bit[2] == 0) ui->clippingCH2->setEnabled(false);
    else            ui->clippingCH2->setEnabled(true);
    if(bit[3] == 0) ui->clippingCH3->setEnabled(false);
    else            ui->clippingCH3->setEnabled(true);

    if(bit[4] == 0) ui->limiterActiveCH0->setEnabled(false);
    else            ui->limiterActiveCH0->setEnabled(true);
    if(bit[5] == 0) ui->limiterActiveCH1->setEnabled(false);
    else            ui->limiterActiveCH1->setEnabled(true);
    if(bit[6] == 0) ui->limiterActiveCH2->setEnabled(false);
    else            ui->limiterActiveCH2->setEnabled(true);
    if(bit[7] == 0) ui->limiterActiveCH3->setEnabled(false);
    else            ui->limiterActiveCH3->setEnabled(true);

  // update volumes

}

// Reaction for volume change
void newWindow::on_mrvol_sliderMoved(int value)
{
    unsigned char values[2];


    //MR vol MSBs
    values[0] = floor(value/4);
    //mR VOl lsb
    values[1] = value % 4;

    emit MasterVolChanged(values); // Trigger procedure for writing master vol

    // Control UI
    double valueQ = value;
    ui->mrvolLabel->setText(QString::number((24-valueQ/4),'f',2) + " dB");


    valueQ = (ui->ch0vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch0volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch1vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch1volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch2vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch2volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch3vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch3volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

}


// Reaction for Attack decay change
void newWindow::ctrlAttackDecay(){

    unsigned char rbuf[1];

    // Get attack decay byte
    emit attackDecayByteNeeded(rbuf);
    unsigned char wbuf[1];
    int DecVal;
    int AtkVal;
    int lpart = rbuf[0] % 16; // Separate 4 LSBs

    // What is value?
    // ----------------------Attac---------------------
    if (ui->atkFast->isChecked() == 1){
        AtkVal = 2;
        ui->quser_dial_swith_left->set_position(AtkVal);
    }
    if (ui->atkNormal->isChecked() == 1){
        AtkVal = 1;
        ui->quser_dial_swith_left->set_position(AtkVal);
    }
    if (ui->atkSlow->isChecked() == 1){
        AtkVal = 0;
        ui->quser_dial_swith_left->set_position(AtkVal);
    }

    //------------------Decay----------------------------
    if (ui->decFast->isChecked() == 1){
        DecVal = 2;
        ui->quser_dial_swith_right->set_position(DecVal);
    }
    if (ui->decNormal->isChecked() == 1){
        DecVal = 1;
        ui->quser_dial_swith_right->set_position(DecVal);
    }
    if (ui->decSlow->isChecked() == 1){
        DecVal = 0;
        ui->quser_dial_swith_right->set_position(DecVal);
    }

    // Compose byte
    wbuf[0] = AtkVal*64+DecVal*16+lpart;
    // Write byte
    emit attackDecayByteReady(wbuf);

}

// Same stuff, for mute and limit
void newWindow::ctrlMuteLimit(){

    unsigned char rbuf[1];
    emit muteLimitByteNeeded(rbuf);

    unsigned char wbuf[1];
    int MuteVal;
    int LimitVal;
    //SPI.read(53,1,rbuf);
    int lpart = rbuf[0] % 64; // Separate 6 LSBs


    if(ui->pushButton_Mute->isChecked()==1){ MuteVal = 1;}
    else{MuteVal = 0;}

    if(ui->pushButton_Limiter->isChecked()==1){ LimitVal = 1;}
    else{LimitVal = 0;}

    wbuf[0] = MuteVal*128+LimitVal*64+lpart;


    emit muteLimitByteReady(wbuf);

   // SPI.write(53,1,wbuf);

}


// Reaction for threshold change
void newWindow::updateCHthrs(){
    unsigned char values[5];

    // CH0:3_vol_MSBs
    values[0] = floor(ui->ch0thr->value()/4);
    values[1] = floor(ui->ch1thr->value()/4);
    values[2] = floor(ui->ch2thr->value()/4);
    values[3] = floor(ui->ch3thr->value()/4);

    //CH0:3 LSB val
    int ch0LSBs = ui->ch0thr->value() % 4;
    int ch1LSBs = ui->ch1thr->value() % 4;
    int ch2LSBs = ui->ch2thr->value() % 4;
    int ch3LSBs = ui->ch3thr->value() % 4;
    values[4] = (ch3LSBs*64 + ch2LSBs*16 + ch1LSBs*4 + ch0LSBs);

    //Write array
    emit CHthrsChanged(values);

    //Update labels
    double ch0thr = ui->ch0thr->value();
    double ch1thr = ui->ch1thr->value();
    double ch2thr = ui->ch2thr->value();
    double ch3thr = ui->ch3thr->value();
    ui->ch0thrLabel->setText(QString::number((24-ch0thr/4),'f',2) + " dB");
    ui->ch1thrLabel->setText(QString::number((24-ch1thr/4),'f',2) + " dB");
    ui->ch2thrLabel->setText(QString::number((24-ch2thr/4),'f',2) + " dB");
    ui->ch3thrLabel->setText(QString::number((24-ch3thr/4),'f',2) + " dB");


}

// Reaction for channel vol change
void newWindow::updateCHvols(){
    unsigned char values[5];
    double valueQ;
    // CH0:3_vol_MSBs
    values[0] = floor(ui->ch0vol->value()/4);
    values[1] = floor(ui->ch1vol->value()/4);
    values[2] = floor(ui->ch2vol->value()/4);
    values[3] = floor(ui->ch3vol->value()/4);

    //CH0:3 LSB val
    int ch0LSBs = ui->ch0vol->value() % 4;
    int ch1LSBs = ui->ch1vol->value() % 4;
    int ch2LSBs = ui->ch2vol->value() % 4;
    int ch3LSBs = ui->ch3vol->value() % 4;
    values[4] = (ch3LSBs*64 + ch2LSBs*16 + ch1LSBs*4 + ch0LSBs);

    //Write array
    emit CHvolsChanged(values);
    //SPI.write(66,5,values);
    //Update labels
    double ch0val = ui->ch0vol->value();
    double ch1val = ui->ch1vol->value();
    double ch2val = ui->ch2vol->value();
    double ch3val = ui->ch3vol->value();
    ui->ch0volLabel->setText(QString::number((24-ch0val/4),'f',2) + " dB");
    ui->ch1volLabel->setText(QString::number((24-ch1val/4),'f',2) + " dB");
    ui->ch2volLabel->setText(QString::number((24-ch2val/4),'f',2) + " dB");
    ui->ch3volLabel->setText(QString::number((24-ch3val/4),'f',2) + " dB");


    valueQ = (ui->ch0vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch0volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch1vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch1volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch2vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch2volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

    valueQ = (ui->ch3vol->value()+ui->mrvol->value());
    if (valueQ > 768) valueQ = 768;
    ui->ch3volTotLabel->setText(QString::number(48-valueQ/4,'f',2) + " dB");

}

void newWindow::receive_reg_bank_DAP(unsigned char *Reg_bank)
{
    reg_bank_local = Reg_bank;

    // do stuff with register bank at DAP start-up
    unsigned char vol_init[7];

    vol_init[0] = Reg_bank[64];
    vol_init[1] = Reg_bank[65];
    vol_init[2] = Reg_bank[66];
    vol_init[3] = Reg_bank[67];
    vol_init[4] = Reg_bank[68];
    vol_init[5] = Reg_bank[69];
    vol_init[6] = Reg_bank[70];

    InitVol(vol_init);

    //int reg_vol;
    //reg_vol = (Reg_bank[64] << 2) + (Reg_bank[65] & 0x03);
    //ui->mrvol->setValue(reg_vol);
}


// Call functions when handles are meddled with
void newWindow::on_ch0thr_valueChanged(){updateCHthrs();}
void newWindow::on_ch1thr_valueChanged(){updateCHthrs();}
void newWindow::on_ch2thr_valueChanged(){updateCHthrs();}
void newWindow::on_ch3thr_valueChanged(){updateCHthrs();}
void newWindow::on_ch3vol_valueChanged(){updateCHvols();}
void newWindow::on_ch2vol_valueChanged(){updateCHvols();}
void newWindow::on_ch1vol_valueChanged(){updateCHvols();}
void newWindow::on_ch0vol_valueChanged(){updateCHvols();}
void newWindow::on_atkNormal_clicked(){ctrlAttackDecay();}
void newWindow::on_atkSlow_clicked(){ctrlAttackDecay();}
void newWindow::on_atkFast_clicked(){ctrlAttackDecay();}
void newWindow::on_decFast_clicked(){ctrlAttackDecay();}
void newWindow::on_decNormal_clicked(){ctrlAttackDecay();}
void newWindow::on_decSlow_clicked(){ctrlAttackDecay();}




//+++++++++++DEVELOPEX: GERASIMCHUK++++++++++++++++++++++++++++++++

void newWindow::keyPressEvent(QKeyEvent *event)
{ static int scrol_pos=0;
    int index_pos=User_switch_list.indexOf(this->focusWidget());
    if(index_pos!=-1){
          scrol_pos = index_pos;
    }


    switch(event->key()){
    case Qt::Key_Q:
        User_switch_list[0]->setFocus();
        break;
    case Qt::Key_W:
        User_switch_list[1]->setFocus();
        break;
    case Qt::Key_E:
        User_switch_list[2]->setFocus();
        break;
    case Qt::Key_R:
        User_switch_list[3]->setFocus();
        break;
    case Qt::Key_T:
        User_switch_list[4]->setFocus();
        break;
    case Qt::Key_Y:
        User_switch_list[5]->setFocus();
        break;
    case Qt::Key_U:
        User_switch_list[6]->setFocus();
        break;
    case Qt::Key_I:
        User_switch_list[7]->setFocus();
        break;
    case Qt::Key_O:
        User_switch_list[8]->setFocus();
        break;
    case Qt::Key_Left:
        if(scrol_pos==0){scrol_pos=(User_switch_list.size()-1);} //if firest member in list, start from last
        else{scrol_pos--;}
        User_switch_list[scrol_pos]->setFocus();
        break;
    case Qt::Key_Right:
        if(scrol_pos==(User_switch_list.size()-1)){scrol_pos=0;} //if last member in list, start from fitrst
        else{scrol_pos++;}
        User_switch_list[scrol_pos]->setFocus();
        break;
    default: return QWidget::keyPressEvent(event);
    }
}

void newWindow::on_mrvol_valueChanged(int value)
{
    on_mrvol_sliderMoved(value);
}


void newWindow::setFocusDefault(){
    int haigh_display_small_size=ui->verticalFrame_state_Clipping_Ocured->size().height();
    float shadov_px=(DISPLEY_SMALL_SHADOW*haigh_display_small_size) /DISPLEY_SMALL_FULL;
    ui->verticalFrame_state_Clipping_Ocured->layout()->setContentsMargins(0,0,0,(int)shadov_px);
    ui->verticalFrame_State_Limitr_active->layout()->setContentsMargins(0,0,0,(int)shadov_px);

     User_switch_list[0]->setFocus();

}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void newWindow::on_pushButton_Mute_toggled(bool checked){
    ctrlMuteLimit();
}
void newWindow::on_pushButton_Limiter_toggled(bool checked){
    ctrlMuteLimit();
}

// Control digital audio enable
// Stupid method used for meddling with register values.
// Should be converted to a bitwise operation instead.
// Beside that, digmode can be made different than this.
// The register "audio_in_mode" is digital for the values 4 and 5.
// right now, value 4 is used for enabling
void newWindow::on_pushButton_Digital_Audio_enable_toggled(bool checked)
{
    unsigned char rbuf[1];
    unsigned char wbuf[1];
    //First "audio_in_mode_ext" reg

    // Read into rbuf
    emit AudioInModeExtByteNeeded(rbuf);

    // Separate other bits
    int LowPart = rbuf[0] % 32; //Separate 5 LSBs
    int HighPart = rbuf[0]/ 64; // Separate 2 MSBs

    // Make new byte
    wbuf[0] = HighPart*64 + checked*32 + LowPart;

    // Write that byte
    emit AudioInModeExtByteReady(wbuf);

    // Second, audio_in_mode reg
    // Read byte
    emit AudioInModeByteNeeded(rbuf);

    LowPart = rbuf[0] % 32; //Separate 5 LSBs

    wbuf[0] =  4*checked*32 + LowPart; //Set to audio in mode 4

    // Write
    emit AudioInModeByteReady(wbuf);
}


// Control audio proc enable
// same procedure as before.
void newWindow::on_pushButton_Audio_Processor_enable_toggled(bool checked)
{
    unsigned char rbuf[1];
    unsigned char wbuf[1];
    int val;
    emit AudioProcByteNeeded(rbuf);
    int LowPart = rbuf[0] % 8; //Separate 3 LSBs
    int HighPart = rbuf[0]/ 16; // Separate 4 MSBs
    if (ui->pushButton_Audio_Processor_enable->isChecked()) val = 1;
    else val = 0;

    wbuf[0] = HighPart*16 + val*8 + LowPart;

    emit AudioProcByteReady(wbuf);
}

/*
Source code for DAsetup class
controls all functionality for I2S window

Author: Dennis True, for Merus audio
Date: December 2014
*/

#include "dasetupdialog.h"
#include "ui_dasetupdialog.h"
#include <QKeyEvent>
DAsetupDialog::DAsetupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DAsetupDialog)
{
    ui->setupUi(this);
    // Set window title and icon
    setWindowTitle("MA120xxx GUI");
    setWindowIcon(QIcon(":/IMG/meruslogo_64.png"));


    // Remove help icon from popup
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);

    // Block signals to avoid signals triggering reads
    ui->I2Sradio->blockSignals(1);
    ui->wsPolFall->blockSignals(1);
    ui->wsPolRise->blockSignals(1);
    ui->LeftRadio->blockSignals(1);
    ui->right16radio->blockSignals(1);
    ui->right18radio->blockSignals(1);
    ui->right20radio->blockSignals(1);
    ui->right24radio->blockSignals(1);
    ui->sckpolFallingRadio->blockSignals(1);
    ui->sckpolRisingradio->blockSignals(1);
    ui->frame16->blockSignals(1);
    ui->frame24->blockSignals(1);
    ui->frame32->blockSignals(1);
    ui->LeftFirst->blockSignals(1);
    ui->RightFirst->blockSignals(1);
    ui->msbfirst->blockSignals(1);
    ui->lsbfirst->blockSignals(1);

}

// Triggered when window is closed
// Not used for anything right now
void DAsetupDialog::closeEvent(QCloseEvent *event)
{
    emit DAsetupDialogClosed();
    event->accept();
}

//Tell DAP window that this window is opened
void DAsetupDialog::confirmDAsetupDialog(){
    emit DAsetupDialogOpened();
}

// Initprocedure
// Uses a switch case for each setting
//SLOT: Uses a signal to trigger this method. Found in newwindow
void DAsetupDialog::initI2Svals(unsigned char *rbuf){
      //rbuf[1] = Register 53
        switch (rbuf[0] % 8) {
            case 0:
                ui->I2Sradio->setChecked(1);
                break;

            case 1:

                ui->LeftRadio->setChecked(1);
                break;

            case 4:
                ui->right16radio->setChecked(1);
                break;

            case 5:
                ui->right18radio->setChecked(1);
                break;

            case 6:
                ui->right20radio->setChecked(1);
                break;

            case 7:
                ui->right24radio->setChecked(1);
                break;

        default:
            break;
    }

        switch (rbuf[1] % 2) {
            case 0:
                ui->sckpolRisingradio->setChecked(1);
                break;

            case 1:
                ui->sckpolFallingRadio->setChecked(1);
                break;

        default:
            break;
    }

        switch (rbuf[1]/2 % 2) {
            case 0:
                ui->wsPolRise->setChecked(1);
                break;

            case 1:
                ui->wsPolFall->setChecked(1);
                break;

        default:
            break;
    }
        switch (rbuf[1]/4 % 2) {
        case 0:
            ui->msbfirst->setChecked(1);
            break;

        case 1:
            ui->lsbfirst->setChecked(1);
            break;

    default:
        break;
}
    switch (rbuf[1]/8 % 4) {
        case 0:
            ui->frame32->setChecked(1);
            break;

        case 1:
            ui->frame24->setChecked(1);
            break;

        case 2:
            ui->frame16->setChecked(1);
            break;
    default:
        break;
}
    switch (rbuf[1]/32 % 2) {
    case 0:
        ui->LeftFirst->setChecked(1);
        break;

    case 1:
        ui->RightFirst->setChecked(1);
        break;
        default:
    break;
}
    ui->I2Sradio->blockSignals(0);
    ui->wsPolFall->blockSignals(0);
    ui->wsPolRise->blockSignals(0);
    ui->LeftRadio->blockSignals(0);
    ui->right16radio->blockSignals(0);
    ui->right18radio->blockSignals(0);
    ui->right20radio->blockSignals(0);
    ui->right24radio->blockSignals(0);
    ui->sckpolFallingRadio->blockSignals(0);
    ui->sckpolRisingradio->blockSignals(0);
    ui->frame16->blockSignals(0);
    ui->frame24->blockSignals(0);
    ui->frame32->blockSignals(0);
    ui->LeftFirst->blockSignals(0);
    ui->RightFirst->blockSignals(0);
    ui->msbfirst->blockSignals(0);
    ui->lsbfirst->blockSignals(0);

}

// Boring destructor
DAsetupDialog::~DAsetupDialog()
{
    delete ui;
}

// Rest is just handling whenever something is changed
void DAsetupDialog::on_I2Sradio_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[0] / 8)*8 + 0;
    emit I2SdataReady(wbuf,53);
}

void DAsetupDialog::on_right18radio_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[0] / 8)*8 + 5;
    emit I2SdataReady(wbuf,53);
}

void DAsetupDialog::on_LeftRadio_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[0] / 8)*8 + 1;
    emit I2SdataReady(wbuf,53);
}

void DAsetupDialog::on_right20radio_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[0] / 8)*8 + 6;
    emit I2SdataReady(wbuf,53);
}

void DAsetupDialog::on_right16radio_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[0] / 8)*8 + 4;
    emit I2SdataReady(wbuf,53);
}

void DAsetupDialog::on_right24radio_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[0] / 8)*8 + 7;
    emit I2SdataReady(wbuf,53);

}

void DAsetupDialog::on_sckpolRisingradio_clicked()
{

    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[2] / 2)*2 + 0;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_sckpolFallingRadio_clicked()
{

    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    wbuf[0] = ((int)rbuf[2] / 2)*2 + 1;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_frame32_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 32)*32;
    int low = rbuf[2] % 8;
    wbuf[0] = high + 0*8 + low;
    emit I2SdataReady(wbuf,54);

}

void DAsetupDialog::on_frame24_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 32)*32;
    int low = rbuf[2] % 8;
    wbuf[0] = high + 1*8 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_frame16_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 32)*32;
    int low = rbuf[2] % 8;
    wbuf[0] = high + 2*8 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_wsPolRise_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 4)*4;
    int low = rbuf[2] % 2;
    wbuf[0] = high + 0*2 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_wsPolFall_clicked()
{ //high period first
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 4)*4;
    int low = rbuf[2] % 2;
    wbuf[0] = high + 1*2 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_LeftFirst_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 64)*64;
    int low = rbuf[2] % 32;
    wbuf[0] = high + 0*32 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_RightFirst_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 64)*64;
    int low = rbuf[2] % 32;
    wbuf[0] = high + 1* 32 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_msbfirst_clicked()
{
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 8)*8;
    int low = rbuf[2] % 4;
    wbuf[0] = high + 0*4 + low;
    emit I2SdataReady(wbuf,54);
}

void DAsetupDialog::on_lsbfirst_clicked()
{ //bit 2 in vec
    unsigned char rbuf[3];
    unsigned char wbuf[1];
    emit getI2Sdata(rbuf);
    int high = ((int)rbuf[2] / 8)*8;
    int low = rbuf[2] % 4;
    wbuf[0] = high + 1*4 + low;
    emit I2SdataReady(wbuf,54);
}

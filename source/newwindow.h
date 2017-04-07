#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QMainWindow>
#include "dasetupdialog.h"

#define DISPLEY_SMALL_SHADOW  20
#define DISPLEY_SMALL_FULL    180

namespace Ui {
class newWindow;
}

class newWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit newWindow(QMainWindow *parent = 0);
    ~newWindow();
    void closeEvent(QCloseEvent *event);

//+++++++++++++++++++++++++++++++++++++++++++++DEVELOPEX: GERASIMCHUK+++++++++++++++++++++++++++++++++++++++++
    void newWindow::keyPressEvent(QKeyEvent *event);

private:
   QVector<QWidget*> User_switch_list;

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

public slots:
    void confirmDAP();
    void initDAsetupDialog();
    void InitVol(unsigned char * rbuf);
    void InitCHthr(unsigned char * rbuf);
    void InitAtkDecState(unsigned char * rbuf);
    void InitLimitMuteState(unsigned char * rbuf);
    void UpdateAudioProcState(unsigned char * rbuf);
    void getI2Sdata2(unsigned char * rbuf);
    void InitAudioProcEnableState(unsigned char * rbuf);
    void writeI2Sdata(unsigned char * wbuf, int addr);
    void receive_reg_bank_DAP(unsigned char *Reg_bank);
    void on_pushButtonI2SSetup_clicked();

signals:
    void windowClosed();
    void DAPopened();
    void MasterVolChanged(unsigned char * wbuf);
    void CHvolsChanged(unsigned char * wbuf);
    void CHthrsChanged(unsigned char * wbuf);
    void attackDecayByteNeeded(unsigned char * rbuf);
    void attackDecayByteReady(unsigned char * wbuf);
    void muteLimitByteNeeded(unsigned char * rbuf);
    void muteLimitByteReady(unsigned char * wbuf);
    void AudioProcByteNeeded(unsigned char * rbuf);
    void AudioProcByteReady(unsigned char * wbuf);
    void AudioInModeExtByteNeeded(unsigned char * rbuf);
    void AudioInModeExtByteReady(unsigned char * wbuf);
    void AudioInModeByteNeeded(unsigned char * rbuf);
    void AudioInModeByteReady(unsigned char * wbuf);
    void I2SsetupButtonClicked();
    void I2SdataNeeded(unsigned char * rbuf);
    void I2SdataReadReady(unsigned char * rbuf);
    void writeI2Sdata2(unsigned char * wbuf, int addr);


private slots:
    //void on_mrvol_valueChanged(int value);
    void on_mrvol_sliderMoved(int value);
    void on_ch0thr_valueChanged();
    void on_ch1thr_valueChanged();
    void on_ch2thr_valueChanged();
    void on_ch3thr_valueChanged();
    void on_ch3vol_valueChanged();
    void on_ch2vol_valueChanged();
    void on_ch1vol_valueChanged();
    void on_ch0vol_valueChanged();
    void on_atkNormal_clicked();
    void on_atkSlow_clicked();
    void on_atkFast_clicked();
    void on_decFast_clicked();
    void on_decNormal_clicked();
    void on_decSlow_clicked();
    void updateCHthrs();
    void updateCHvols();
    void ctrlAttackDecay();
    void ctrlMuteLimit();


    //void on_dig_audio_enable_clicked(bool checked);

   // void on_audio_proc_enable_clicked();

    void on_mrvol_valueChanged(int value);

    void on_pushButton_Mute_toggled(bool checked);

    void on_pushButton_Limiter_toggled(bool checked);

    void on_pushButton_Digital_Audio_enable_toggled(bool checked);

    void on_pushButton_Audio_Processor_enable_toggled(bool checked);

    void on_dial_Attack_switch(int new_pos);
    void on_dial_Decay_switch(int new_pos);



private:


    Ui::newWindow *ui;

    unsigned char *reg_bank_local;

    QKeyEvent *event1;
 //+++++++++++DEVELOPEX: GERASIMCHUK++++++++++++++++++++++++++++++++++++++++++++
public:
    void setFocusDefault();
    DAsetupDialog *DAsetup;
 //

};

#endif

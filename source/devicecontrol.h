#ifndef DEVICECONTROL_H
#define DEVICECONTROL_H

#include <QMainWindow>
#include "newwindow.h"
#include "registerbrowser.h"
#include "moderegisterbrouser_short.h"
#include "qthread_readreg.h"
#include "scom.h"
#include <QDebug>
#include <math.h>
#include <QTimer>
#include "qsizepolicy.h"
#include <QLayout>
#include <QObject>
#include <QProgressBar>
#include <QSlider>
#include <QRadioButton>
#include <QLabel>
#include <QGroupBox>
#include <QEvent>
#include <QButtonGroup>
#include <QMessageBox>
#include <about_window.h>

//--------------------------DEVICE STATUS DEFINITION-----------------------------
#define  DEV_CONNECT      "- connected"
#define  DEV_NOT_CONNECT  "- not connected"
#define  ID_NO_DEV        "ID: *no Dev conn*"
#define  ID_NO_FTDI       "ID: *no FTDI conn*"
#define  DEV_ID           "ID: "




//Not much to say here. I think you understand the SIGNAL/SLOT principle Rien.

namespace Ui {
class DeviceControl;
}

class DeviceControl : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeviceControl(QWidget *parent = 0);
    ~DeviceControl();
    void closeEvent(QCloseEvent *event);
    unsigned char* reg_bank_map();
    QString get_device_id();

public slots:
        void windowIsClosed();
        void getGUIvals();
        void writeMasterVol(unsigned char * wbuf);
        void writeCHvols(unsigned char * wbuf);
        void writeCHthrs(unsigned char * wbuf);
        void getAttackDecayByte(unsigned char * rbuf);
        void writeAttackDecayByte(unsigned char * wbuf);
        void getMuteLimitByte(unsigned char * rbuf);
        void writeMuteLimitByte(unsigned char * wbuf);
        void getAudioProcByte(unsigned char * rbuf);
        void writeAudioProcByte(unsigned char * wbuf);
        void getAudioInModeExtByte(unsigned char * rbuf);
        void writeAudioInModeExtByte(unsigned char * wbuf);
        void getAudioInModeByte(unsigned char * rbuf);
        void writeAudioInModeByte(unsigned char * wbuf);
        void getI2Sdata(unsigned char * rbuf);
        void writeI2Sdata3(unsigned char * wbuf, int addr);
        void writeBitregBrow(int bit, int addr, bool value);
        void regBrow_closed();

private slots:
    void do_pushButtonProgram_clicked();

    void do_pushButtonLoad_clicked();

    void do_pushButtonSave_clicked();

    void do_pushButtonRec_clicked();

    void do_menuActionReconnect_clicked();

    void do_menuActionRegBrow_clicked();

    void do_menuActionAbout_clicked();

    void get_dev_status_inc();

    void get_dev_status_pol(unsigned char *reg_map, int device_state);

    void calc_modIndex_ch0(double modi);

    void calc_modIndex_ch1(double modi);

    void set_GUI_idle(bool pol);

    void read_all_dev_reg();

    void do_pushButton_DAP_clicked();

    void ProgramDefaults();

    int get_fuse_bits();



signals:
    void DAPclicked();
    void sendVol(unsigned char * buf);
    void sendCHthr(unsigned char * buf);
    void sendAtkDecState(unsigned char * buf);
    void sendLimitMuteState(unsigned char * buf);
    void sendAudioProcState(unsigned char * buf);
    void sendAudioInModeState(unsigned char * buf);
    void sendAudioProcEnableState(unsigned char * buf);
    void send_reg_bank(unsigned char *Reg_bank);
    void send_reg_bank_DAP(unsigned char *Reg_bank);
    void upd_reg_bank(unsigned char *Reg_bank);

private:
    Ui::DeviceControl *ui;
    newWindow *newW;
    RegisterBrowser *regB;
    ModeRegisterBrouser_short *regModeBERR;
    QThread_ReadReg *thread_reg;

    void correctBuf(unsigned char * rbuf);
    void openNewWindow();

    QProgressBar *progressBar_ch0;
    QProgressBar *progressBar_ch1;
    //QSlider *horizontalSlider_pmThres12;
    //QSlider *horizontalSlider_pmThres23;
    QPushButton *pushButton_DAP;

    QFrame *frame_ch0_pm1;
    QFrame *frame_ch0_pm2;
    QFrame *frame_ch0_pm3;
    QFrame *frame_ch1_pm1;
    QFrame *frame_ch1_pm2;
    QFrame *frame_ch1_pm3;

    QRadioButton *radioButton_pmp1;
    QRadioButton *radioButton_pmp2;
    QRadioButton *radioButton_pmp3;
    QRadioButton *radioButton_pmp4;
    QRadioButton *radioButton_pmp5;

    QLabel *labelDevID;
    QPushButton *pushButtonProgram;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonRec;
    QLabel *labelProgStatus;

    QFrame *frame_indUSB;
    QFrame *frame_indDev;
    QLabel *labelUSBStatus;
    QLabel *labelDevStatus;

    unsigned char reg_test[127];
    unsigned char loaded_data[128];

//+++++++++++DEVELOPEX: GERASIMCHUK++++++++++++++++++++++++++++++++++++++++++++
    QString DevID;
    // status device "- connected"c or "- not connected"
    QString ProgStatus;
    QKeyEvent *UserTabEvent;
    void add_tooltype(QWidget *wd);
    QButtonGroup *button_power_mode;
    About_window  *About;
    bool device_init_state; // indicate update signature: true - not update, false - update

private:
    void setdev_status(QString devID, QString devStatus);
private slots:
    void do_menuActionError_Vector_Monitor_clicked();
    void button_power_mode_grup_slote(int id_button);
    void clear_acumulated_error_reg_slot(void);
    void on_pushButtonSoftClipping_clicked();
};

#endif // DEVICECONTROL_H

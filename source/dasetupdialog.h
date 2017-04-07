#ifndef DASETUPDIALOG_H
#define DASETUPDIALOG_H

#include <QDialog>

namespace Ui {
class DAsetupDialog;
}

class DAsetupDialog : public QDialog
{
    Q_OBJECT

public slots:
    void confirmDAsetupDialog();
    void initI2Svals(unsigned char * rbuf);

signals:
    void DAsetupDialogClosed();
    void DAsetupDialogOpened();
    void getI2Sdata(unsigned char * rbuf);
    void I2SdataReady(unsigned char * rbuf, int addr);

public:
    explicit DAsetupDialog(QWidget *parent = 0);
    ~DAsetupDialog();


private slots:
    void on_I2Sradio_clicked();

    void on_right18radio_clicked();

    void on_LeftRadio_clicked();

    void on_right20radio_clicked();

    void on_right16radio_clicked();

    void on_right24radio_clicked();

    void on_sckpolRisingradio_clicked();

    void on_sckpolFallingRadio_clicked();

    void on_frame32_clicked();

    void on_frame24_clicked();

    void on_frame16_clicked();

    void on_wsPolRise_clicked();

    void on_wsPolFall_clicked();

    void on_LeftFirst_clicked();

    void on_RightFirst_clicked();

    void on_msbfirst_clicked();

    void on_lsbfirst_clicked();

private:
    Ui::DAsetupDialog *ui;
    void closeEvent(QCloseEvent *event);

};

#endif // DASETUPDIALOG_H

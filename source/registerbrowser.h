#ifndef REGISTERBROWSER_H
#define REGISTERBROWSER_H


#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QStandardItemModel>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <customwidget.h>

#include <QMap>
#include <register_conteiner.h>


namespace Ui {
class RegisterBrowser;
}

class RegisterBrowser : public QMainWindow
{
    Q_OBJECT

    QWidget *window;

public:
    explicit RegisterBrowser(QWidget *parent = 0);
    ~RegisterBrowser();
    void closeEvent(QCloseEvent *event);

private slots:

    QList<QString> csv_read_line(int line);
    int csv_scan_file();


public slots:
    void receive_reg_bank(unsigned char *Reg_bank);
    QList<QString> get_data_array(int line);
    void update_register_indication_slot(unsigned char *reg_map);

signals:
    void map_to_main(int k, int addr, bool value);
    void regBrow_closed();
    void regBrow_addr_name(QString addr_name);

private:
    Ui::RegisterBrowser *ui;

    QLabel* bit[8][500];
    //QCheckBox *bitcheckbox[8][500];

    QLabel *addnr[500];
    QLabel *namen[500];
    QLabel *nRW[500];
    QLabel *descrn[500];

    unsigned char *reg_bank_local;
    double naddress;

    RegBrowRow *reg[500];

    QStandardItemModel *model;
    QList<QStandardItem*> standardItemList;

    //Datan struct for show one grup bit (one value)
    QMap<int,QVector<Register_conteiner *>> my_one_reg_container;
};

#endif // REGISTERBROWSER_H

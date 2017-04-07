#ifndef MODEREGISTERBROUSER_SHORT_H
#define MODEREGISTERBROUSER_SHORT_H

#include <QMainWindow>
#include <register_conteiner_error_vector.h>
#include <register_conteiner_error_table.h>
#include <customwidget.h>
#include <QVector>
#include <QMap>
#include <QThread>
#include <QMutex>
#include "qthread_readreg.h"


namespace Ui {
class ModeRegisterBrouser_short;
}

class ModeRegisterBrouser_short : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModeRegisterBrouser_short(QWidget *parent = 0);
    ~ModeRegisterBrouser_short();
private:
    Ui::ModeRegisterBrouser_short *ui;
    //Data struct for show one grup bit (one value)
    QMap<int,Register_conteiner_error_vector *> my_one_reg_container;
    register_conteiner_error_table *my_reg_table;
// slot for update register
public slots:
    void update_register_indication_slot(unsigned char *reg_map, int device_state);
private slots:
    void on_pushButton_clear_error_clicked();
signals:
   void click_clear_button_signal();
};




#endif // MODEREGISTERBROUSER_SHORT_H

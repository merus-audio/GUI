#ifndef REGISTER_CONTEINER_H
#define REGISTER_CONTEINER_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QCheckBox>
#include <QMap>




namespace Ui {
class Register_conteiner;
}

class Register_conteiner : public QWidget
{
    Q_OBJECT

public:
    explicit  Register_conteiner(QString num_reg, QString description, QString *bit_state,QWidget *parent = 0);
    ~Register_conteiner();
    void set_interpretation(QString new_interpr);
    void set_reg_value(unsigned char reg_value);
private:
    Ui::Register_conteiner *ui;
    int bit_mask;
    QList<QLabel *> bit_lable;
    QList<QCheckBox *> bit_show;

public:
    QMap<int,QString> interpretation_list;


};

#endif // REGISTER_CONTEINER_H

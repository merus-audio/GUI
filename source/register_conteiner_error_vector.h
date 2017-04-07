#ifndef REGISTER_CONTEINER_ERROR_VECTOR_H
#define REGISTER_CONTEINER_ERROR_VECTOR_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QCheckBox>
#include <QMap>




namespace Ui {
class Register_conteiner_error_vector;
}


// THIS CLASS
class Register_conteiner_error_vector : public QWidget
{
    Q_OBJECT

public:
    explicit  Register_conteiner_error_vector(QString num_reg, QString description, QString Name,QWidget *parent = 0);
    ~Register_conteiner_error_vector();
    void set_interpretation(QString new_interpr);
    void set_reg_value(unsigned char reg_value);
    void add_bit_mask(QString *bit_state);
    void finish_create_new_item(void);
private:
    Ui::Register_conteiner_error_vector *ui;
    int bit_mask_reg;                       // Bit mask all available bit inside register
    QList<int> bit_mask_val;                // Bit mask all bit inside register
    QList<QCheckBox *> bit_show;            // List wit bit checBox pointer
    QList<QLabel *> bit_lable;              // List with bit lable pointer
public:
    QString Name;                           // Name register
    QString description;                    // Description
    QList<QString > bit_range;              // List of bit field range
    QList<int> temp_interpretation_val;     // Temp interpretation value
    QList<QMap<int,QString> *> interpretation_field;  // dictionary interpretation all bit fielld inside register
};






#endif // REGISTER_CONTEINER_ERROR_VECTOR_H

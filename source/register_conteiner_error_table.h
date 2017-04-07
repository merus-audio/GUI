#ifndef REGISTER_CONTEINER_ERROR_TABLE_H
#define REGISTER_CONTEINER_ERROR_TABLE_H

#include <QWidget>
#include "register_conteiner_error_vector.h"

namespace Ui {
class register_conteiner_error_table;
}

class register_conteiner_error_table : public QWidget
{
    Q_OBJECT

public:
    explicit register_conteiner_error_table(QWidget *parent = 0,Register_conteiner_error_vector *master_register_conteiner_error_vector=0);
    ~register_conteiner_error_table();
    void update_interpretation(void);

private:
    QList<QLabel*> lable_bit_range;
    QList<QLabel*> lable_interpretation;
    Ui::register_conteiner_error_table *ui;
    Register_conteiner_error_vector *master_register;
};

#endif // REGISTER_CONTEINER_ERROR_TABLE_H

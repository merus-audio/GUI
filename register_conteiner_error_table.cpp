#include "register_conteiner_error_table.h"
#include "register_conteiner_error_vector.h"
#include "ui_register_conteiner_error_table.h"


// Table error register
// Constructor "register_conteiner_error_table" class. Create fild table from input register
// input arg:
//          - parent                                 - parent widget
//          - master_register_conteiner_error_vector - register for crete field table
register_conteiner_error_table::register_conteiner_error_table(QWidget *parent,Register_conteiner_error_vector *master_register_conteiner_error_vector) :
    QWidget(parent),
    ui(new Ui::register_conteiner_error_table)
{
    ui->setupUi(this);
    int counter_bit_field=0;

    master_register=master_register_conteiner_error_vector;
    ui->labelRegName->setText(master_register->Name);
    for(counter_bit_field=0;counter_bit_field<master_register->bit_range.length();counter_bit_field++){
        lable_bit_range.push_back(new QLabel);
        lable_interpretation.push_back(new QLabel);
        lable_bit_range[lable_bit_range.length()-1]->setProperty("lable_register_brouser_label_head",true);

        lable_bit_range[lable_bit_range.length()-1]->setMinimumHeight(30);
        lable_bit_range[lable_bit_range.length()-1]->setMaximumHeight(30);
        lable_bit_range[lable_bit_range.length()-1]->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Fixed);

        lable_interpretation[lable_interpretation.length()-1]->setProperty("lable_error_reg_enabled",true);
        lable_interpretation[lable_interpretation.length()-1]->setProperty("lable_error_reg_disabled",true);
        lable_bit_range[lable_bit_range.length()-1]->setText(" BIT " + master_register->bit_range[counter_bit_field]);
        //lable_interpretation[lable_interpretation.length()-1]->setText( master_register->temp_interpretation[counter_bit_field]);
        ui->gridLayoutRegDescription->addWidget(lable_bit_range[lable_bit_range.length()-1],1+counter_bit_field,0);
        ui->gridLayoutRegDescription->addWidget(lable_interpretation[lable_interpretation.length()-1],1+counter_bit_field,1);
    }
}

register_conteiner_error_table::~register_conteiner_error_table()
{
    delete ui;
}

//----Update visualisation and interpretatiob registers content
void register_conteiner_error_table::update_interpretation(void){
    int counter_bit_field=0;
    QString interpretation_str;
    for(counter_bit_field=0;counter_bit_field<master_register->bit_range.length();counter_bit_field++){
        //fix is this "zero" interpretation
        interpretation_str=master_register->interpretation_field[counter_bit_field]->value(master_register->temp_interpretation_val[counter_bit_field]);
        lable_interpretation[counter_bit_field]->setText(interpretation_str);
        if(master_register->temp_interpretation_val[counter_bit_field] == 0){
            lable_interpretation[counter_bit_field]->setEnabled(false);
        }
        else{
            lable_interpretation[counter_bit_field]->setEnabled(true);
        }
    }
}

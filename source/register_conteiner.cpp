#include "register_conteiner.h"
#include "ui_register_conteiner.h"
#include <QList>
#include <QLabel>
#include <QString>


Register_conteiner::Register_conteiner(QString num_reg, QString description, QString *bit_state,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_conteiner)
{
    ui->setupUi(this);

    // Fill lable bit
   bit_lable.push_back(ui->labelBit0);
   bit_lable.push_back(ui->labelBit1);
   bit_lable.push_back(ui->labelBit2);
   bit_lable.push_back(ui->labelBit3);
   bit_lable.push_back(ui->labelBit4);
   bit_lable.push_back(ui->labelBit5);
   bit_lable.push_back(ui->labelBit6);
   bit_lable.push_back(ui->labelBit7);

   // Fill check bit
   bit_show.push_back(ui->checkBoxBit0);
   bit_show.push_back(ui->checkBoxBit1);
   bit_show.push_back(ui->checkBoxBit2);
   bit_show.push_back(ui->checkBoxBit3);
   bit_show.push_back(ui->checkBoxBit4);
   bit_show.push_back(ui->checkBoxBit5);
   bit_show.push_back(ui->checkBoxBit6);
   bit_show.push_back(ui->checkBoxBit7);

   // Set default lable text
   ui->labelRegNum->setText(num_reg);
   ui->labelDiscription->setText(description);
   ui->labelInterpritation->setText("NOT CONNECT");
   ui->labelValue->setText("0");

   //fill bit state lable and bit mask
   bit_mask=0;
   char one_shift=1;
   for(int counter=0;counter<8; counter++){
      bit_lable[counter]->setText(bit_state[7-counter]);
      if(bit_state[7-counter]=="0")
      {
         bit_mask|= one_shift;
      }
      one_shift<<=1;
   }

}


void Register_conteiner::set_interpretation(QString new_interpr){
    ui->labelInterpritation->setText(new_interpr);
}


void Register_conteiner::set_reg_value(unsigned char reg_value){
    unsigned char bit_shift=1;
    unsigned char bit_shift_interpritation=1;
    unsigned char interpritation_key=0;
    reg_value&=bit_mask;
    // ----------------CALC BIT POSITION-----------------
    for(int counter=0;counter<8;counter++,bit_shift<<=1){
        if(!(bit_shift & bit_mask)){continue;}
        if(bit_shift & reg_value)
        {
            bit_lable[counter]->setText("1");
            bit_show[counter]->setChecked(true);
            interpritation_key|=bit_shift_interpritation;
        }
        else{
            bit_lable[counter]->setText("0");
            bit_show[counter]->setChecked(false);
        }
        bit_shift_interpritation<<=1;
    }
    //set value indication
    ui->labelValue->setText(QString::number(interpritation_key, 16).toUpper());

    // set interpritation rezult
    if(!interpretation_list.contains(interpritation_key))
    {
        // if key not fine - set default interpritation
        ui->labelInterpritation->setText("/----------------/");
        return;
    }
    ui->labelInterpritation->setText(interpretation_list.value(interpritation_key));
}



Register_conteiner::~Register_conteiner()
{
    delete ui;
}



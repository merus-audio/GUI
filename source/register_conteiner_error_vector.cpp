#include "register_conteiner_error_vector.h"
#include "ui_register_conteiner_error_vector.h"
#include <QList>
#include <QLabel>
#include <QString>


Register_conteiner_error_vector::Register_conteiner_error_vector(QString num_reg, QString description,QString Name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register_conteiner_error_vector)
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

   //Set name and description property
   this->Name=Name;
   this->description=description;
   // Set default lable text
   ui->labelRegNum->setText(num_reg);
   ui->labelDiscription->setText(description);
   ui->labelInterpritation->setText(Name);
   ui->labelValue->setText("0");

}

// add new bit mask acording new value inside register
void Register_conteiner_error_vector::add_bit_mask(QString *bit_state){
    //fill bit state lable and bit mask
    int temp_bit_mask=0;
    char one_shift=1;
    int firest_bit_count=0;
    int last_bit_count=0;
    bool last_bit_found=true;
    for(int counter=0;counter<8; counter++){
      //bit_lable[counter]->setText(bit_state[7-counter]);
       if(bit_state[7-counter]=="0")
       {
          if(last_bit_found)
          {
              firest_bit_count=counter;
              last_bit_found=false;
          }
          temp_bit_mask|= one_shift;
          last_bit_count=counter;
       }
       one_shift<<=1;
    }
    // add mask bit field to bit field List
    bit_mask_val.push_back(temp_bit_mask);
    // Construct bit range string
    bit_range.push_back("ERROR"); // Default bit range string
    if(last_bit_found){return;} // if not finde bit field - return
    if(last_bit_count == firest_bit_count) // if size bite fiel = 1
    {
        bit_range[bit_range.length()-1]=QString::number(firest_bit_count);
    }
    else{
         bit_range[bit_range.length()-1]=(QString::number(last_bit_count))+"-"+(QString::number(firest_bit_count));
    }

}


// finish add new register string. Created register bit mask and add bit signature
void Register_conteiner_error_vector::finish_create_new_item(void){
    int couter;
    char one_shift=1;
    bit_mask_reg=0;
    for(couter=0;couter<bit_mask_val.length();couter++){
        bit_mask_reg|=bit_mask_val[couter];
    }
    for(couter=0;couter<8;couter++){
        if(one_shift & bit_mask_reg){
            bit_lable[couter]->setText("0");
        }
        else{
            bit_lable[couter]->setText("-");
        }
        one_shift<<=1;
    }
}


void Register_conteiner_error_vector::set_interpretation(QString new_interpr){
    ui->labelInterpritation->setText(new_interpr);
}

//update temporary state of error register state acirding "reg_value" data
void Register_conteiner_error_vector::set_reg_value(unsigned char reg_value){
    int reg_field_counter, counter;
    unsigned char bit_shift=1;
    unsigned char bit_shift_interpritation=1;
    unsigned char interpritation_key=0;
    reg_value&=bit_mask_reg;
    // ----------------GET REGISTER BIT STATE-------------------------
    for(counter=0;counter<8;counter++,bit_shift<<=1){
        if(!(bit_shift & bit_mask_reg)){continue;}
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
    ui->labelValue->setText("   0x"+QString::number(interpritation_key, 16).toUpper());

    // ----------------GET BIT STATE ALL BIT FIELD---------------------
    // Calc interpretation for every registers field
    for(reg_field_counter=0;reg_field_counter<bit_mask_val.length();reg_field_counter++)
    {
        bit_shift_interpritation=1;
        bit_shift=1;
        interpritation_key=0;
        for(counter=0;counter<8;counter++,bit_shift<<=1){
            if(!(bit_shift & bit_mask_val[reg_field_counter])){continue;}
            if(bit_shift & reg_value)
            {
                bit_lable[counter]->setText("1");
                bit_show[counter]->setChecked(true);
                bit_lable[counter]->setDisabled(false);
                interpritation_key|=bit_shift_interpritation;
            }
            else{
                bit_lable[counter]->setText("0");
                bit_lable[counter]->setDisabled(true);
                bit_show[counter]->setChecked(false);
            }
        bit_shift_interpritation<<=1;
        }

        temp_interpretation_val[reg_field_counter]=interpritation_key;
        //labelValue
        /*
        // finde interpretation string by reg_field_counter
        if(!interpretation_field[reg_field_counter]->contains(interpritation_key))
        {
            // if key not fine - set default interpritation
            temp_interpretation[reg_field_counter]="/----------------/";
            continue;
        }
         temp_interpretation[reg_field_counter]=interpretation_field[reg_field_counter]->value(interpritation_key);
*/
    }


}



Register_conteiner_error_vector::~Register_conteiner_error_vector()
{
    delete ui;
}



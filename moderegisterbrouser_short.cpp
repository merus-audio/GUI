#include "moderegisterbrouser_short.h"
#include "ui_moderegisterbrouser_short.h"
#include "merus_mode_reg_definition.h"
#include "qscomthreadsave.h"
#include "register_conteiner_error_vector.h"
#include "register_conteiner_error_table.h"
#include "error_reg_description.h"
//#include "qthread_readreg.h"


extern QVector< QVector<QString> >  mode_reg;


ModeRegisterBrouser_short::ModeRegisterBrouser_short(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModeRegisterBrouser_short)
{


    ui->setupUi(this);
    // Set name window
    setWindowTitle(NAME_ERROR_REG_BROWSER);
    // Set icon window
    setWindowIcon(QIcon(":/IMG/meruslogo_64.png"));

    QWidget *innerWidget = new QWidget(ui->centralwidget);
    QLayout *layout = new QVBoxLayout(innerWidget);

    setCentralWidget(ui->gridFrame);

    innerWidget->setLayout(layout);
    ui->scrollArea->setWidget(innerWidget);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    int field_interpretation_size=0;
    bool rez_str_to_num;
    int key_value, key_value_next;// = mode_reg[0][MODE_REG_POS_NUM].toInt(&rez_str_to_num,10);
    int key_interpretation=0;
// Parsing QList "mode_reg" with description state registers
    for(int k=0; k<mode_reg.size(); k++){
       //take kay - number register
        key_value_next = mode_reg[k][MODE_REG_POS_NUM].toInt(&rez_str_to_num,10);
       //Check is register(key) present in error_vector List
        if(error_vector.indexOf(key_value_next)<0)
        {
            continue;
        }
        // add new widdget string to the dictionary, if now add previously
        if(!my_one_reg_container.contains(key_value_next)){
            // finish created prev reg string
            if(my_one_reg_container.size()>0)
            {
                my_one_reg_container[key_value]->finish_create_new_item();
            }
            //add new widget
            my_one_reg_container[key_value_next]=(new Register_conteiner_error_vector(mode_reg[k][MODE_REG_POS_NUM], mode_reg[k][MODE_REG_POS_DESCRIPTION_REG],mode_reg[k][MODE_REG_POS_NAME_REG] ));
            // add new bit field inside same register
            layout->addWidget(my_one_reg_container[key_value_next]);

        }
        key_value=key_value_next;
        //add new interpretation Map inside register
        my_one_reg_container[key_value]->interpretation_field.push_back(new QMap<int,QString>);
        field_interpretation_size=my_one_reg_container[key_value]->interpretation_field.length()-1;
        //add new bit mask
        my_one_reg_container[key_value]->add_bit_mask(&mode_reg[k][MODE_REG_POS_BIT]);
        // Collect all field to temp register and it interpretation
        for(int m = MODE_REG_POS_INTERPRETATION; m < mode_reg[k].size() ;m++)
        {
            if(mode_reg[k][m]=="NoN"){break;} // if no interpretation
            key_interpretation=mode_reg[k][m].toInt(&rez_str_to_num,10); // Take string interpretation
            m++;
            //add new interpretation
            my_one_reg_container[key_value]->interpretation_field[field_interpretation_size]->insert(key_interpretation, mode_reg[k][m]);
        }
        // add new TEMP interpretation value
        my_one_reg_container[key_value_next]->temp_interpretation_val.push_back(my_one_reg_container[key_value]->interpretation_field[field_interpretation_size]->firstKey());
    }
    // finish created reg string
    if(my_one_reg_container.size()>0)
    {
        my_one_reg_container[key_value]->finish_create_new_item();
    }

    //Add error vector table
    my_reg_table = new register_conteiner_error_table(this,my_one_reg_container[ERROR_REG_TABLE]);
    layout->addWidget(my_reg_table);

    layout->setSizeConstraint(QLayout::SetFixedSize);

    QSize inner_size=innerWidget->size();
}





void ModeRegisterBrouser_short::update_register_indication_slot(unsigned char *reg_map, int device_state){
    int counter1;
    for(counter1=0;counter1<128;counter1++){
        //if register not present inside error register list - return
        if(!my_one_reg_container.contains(counter1)){continue;}
        //update error indication
        my_one_reg_container[counter1]->set_reg_value(reg_map[counter1]);
        my_reg_table->update_interpretation();
    }
}




ModeRegisterBrouser_short::~ModeRegisterBrouser_short()
{
    delete ui;
}

//------ transmit comand CLEAR ACCUMULATOR ERROR REGISTER
void ModeRegisterBrouser_short::on_pushButton_clear_error_clicked()
{
    emit  click_clear_button_signal();
}

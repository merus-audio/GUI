#include"registerbrowser.h"
#include"ui_registerbrowser.h"
#include<regbrowfilldata.h>
#include<QFrame>
#include<QPushButton>
#include<QLabel>
#include<QLine>
#include<QCheckbox>
#include<QObject>
#include<QWidget>
#include<QLayout>
#include<QSlider>
#include<QScrollArea>
#include<QScrollBar>
#include<QListWidgetItem>
#include<QListWidget>
#include<QSizeGrip>
#include<QCloseEvent>
#include<QMap>
#include<QCheckBox>
#include<QDesktopWidget>
#include<QApplication>
#include "merus_mode_reg_definition.h"
#include<devicecontrol.h>
#include<customwidget.h>
#include "registerbrowser.h"

#define HEIGHT_HEADER                  50
//  Address headr pos
#define X_ADDRESS_HEADER_POS           10
#define WIDTH_ADDRESS_HEADER_POS       80
//  Bit number headr pos
#define WIDTH_BIT_HEADER_POS           25
//  Bit Name headr pos
#define WIDTH_NAME_HEADER_POS          210
#define WIDTH_NAME_HEADER_SHIFT        70
//  Bit R/W headr pos
#define WIDTH_RW_HEADER_POS            95
//  Bit R/W headr pos
#define WIDTH_DESCRIPTION_HEADER_POS   160

extern QVector< QVector<QString> >  mode_reg;

RegisterBrowser::RegisterBrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterBrowser)
{
    ui->setupUi(this);
    // Set window title and icon
    setWindowTitle("MA120xxx GUI");
    setWindowIcon(QIcon(":/IMG/meruslogo_64.png"));

    // some scaling stuff
    QDesktopWidget widget;
    QRect mainScreenSize = widget.availableGeometry(widget.primaryScreen());

    //double winH = mainScreenSize.height();
    double winH = mainScreenSize.height();
    double winW = mainScreenSize.width();

    //double winH_def = 1728;
    double winH_def = 1728;
    double winW_def = 3200;

    //double winH_rat = ((winH_def/winH)-1)*1.2+1;
    double winH_rat = ((winH_def/winH)-1)*1.2+1;
    double winW_rat = ((winW_def/winW)-1)*1.0+1;

    double scl = 1.7;

    QWidget *innerWidget = new QWidget(ui->centralwidget);
    QLayout *layout = new QVBoxLayout(innerWidget);
    layout->setSpacing(0);

    innerWidget->setLayout(layout);

    ui->scrollArea->setWidget(innerWidget);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setContentsMargins(0,(60*scl)/winW_rat,0,0);
    innerWidget->setContentsMargins(0,(60*scl)/winW_rat,0,0);

    naddress = 216;                                                          //set number of address entries; 269 for full registers rev6,(216 - register configuration part GERASIMCHUK)
    naddress = 62;                                                           //set number of address entries; 44 for datasheet registers rev6

    setWindowTitle("Register Browser");

    // set top bar
    QFrame *topbar = new QFrame(innerWidget);
    topbar->setGeometry(10,10,4000,30);
    topbar->setStyleSheet("QFrame{ background: C:/Merus_Audio/device_GUI_register_monitor/IMG/assets 2/bg/line_bg.png;}"); // GERASIMCHUK

    // set labels in top bar
    QLabel *address = new QLabel("  Address",innerWidget);
    address->setGeometry(X_ADDRESS_HEADER_POS,5,WIDTH_ADDRESS_HEADER_POS,HEIGHT_HEADER);
    address->setProperty("lable_register_brouser_label_head",true);

    QLabel* bitnumber[8];
    QString bitstr = QString("   %1").arg(0);

    for( int i = 0; i < 8; i++ )                                                               // bits = lines - 1
    {
        bitnumber[i] = new QLabel(innerWidget);
        bitnumber[i]->setGeometry(address->geometry().x()+address->geometry().width()+(i*WIDTH_BIT_HEADER_POS),5,WIDTH_BIT_HEADER_POS,HEIGHT_HEADER);
        bitnumber[i]->setProperty("lable_register_brouser_label_head",true);
        bitstr = QString("   %1").arg(7-i);
        bitnumber[i]->setText(bitstr);
    }

    QLabel *name = new QLabel(" Name",innerWidget);
    name->setGeometry(bitnumber[7]->geometry().x()+WIDTH_BIT_HEADER_POS+WIDTH_NAME_HEADER_SHIFT,5,WIDTH_NAME_HEADER_POS,HEIGHT_HEADER);
    name->setProperty("lable_register_brouser_label_head",true);

    QLabel *RW = new QLabel(" R/W",innerWidget);
    RW->setGeometry(name->geometry().x()+WIDTH_NAME_HEADER_POS,5,WIDTH_RW_HEADER_POS,HEIGHT_HEADER);
    RW->setProperty("lable_register_brouser_label_head",true);

    QLabel *description = new QLabel(" Description",innerWidget);
    description->setGeometry(RW->geometry().x()+WIDTH_RW_HEADER_POS,5,WIDTH_DESCRIPTION_HEADER_POS,HEIGHT_HEADER);
    description->setProperty("lable_register_brouser_label_head",true);

    QList<QString> get_data = get_data_array(1);

    // -------  Add register configuration brouser list
    for( int i = 0; i < (naddress-1); i++)
    {
        //QList<QString> read_line = csv_read_line(i);
        QList<QString> get_data = get_data_array(i);
        reg[i] = new RegBrowRow;
        reg[i]->fill(get_data,0);
        layout->addWidget(reg[i]);
        connect(reg[i],SIGNAL(writeBit(int,int,bool)),this,SIGNAL(map_to_main(int,int,bool)));
    }


    // -------  Add register monitoring brouser list
    int counter_val=0;
    bool rez_str_to_num;
    int key_value = mode_reg[0][MODE_REG_POS_NUM].toInt(&rez_str_to_num,10);
    int key_interpretation=0;

    for(int k=0; k<mode_reg.size(); k++){
       //Add new widget inside group
        my_one_reg_container[key_value].push_back(new Register_conteiner(mode_reg[k][MODE_REG_POS_NUM], mode_reg[k][MODE_REG_POS_DESCRIPTION],&mode_reg[k][MODE_REG_POS_BIT] ));
        layout->addWidget(my_one_reg_container[key_value][counter_val]);
        // Fill interpretation list
        for(int m=MODE_REG_POS_INTERPRETATION; m < mode_reg[k].size() ;m++)
        {
            if(mode_reg[k][m]=="NoN"){break;} // if no interpretation
            key_interpretation=mode_reg[k][m].toInt(&rez_str_to_num,10);
            m++;
            my_one_reg_container[key_value][counter_val]->interpretation_list[key_interpretation]=mode_reg[k][m];
        }

        counter_val++;
        //add new GROUP_WIDGET
        if((k==0)||((k+1)>=mode_reg.size())){continue;}
        if(mode_reg[k][MODE_REG_POS_NUM]!= mode_reg[k+1][MODE_REG_POS_NUM])
        {
              counter_val=0;
              key_value = mode_reg[k+1][MODE_REG_POS_NUM].toInt(&rez_str_to_num,10);
        };
    }




}

void RegisterBrowser::receive_reg_bank(unsigned char *Reg_bank)
{
    reg_bank_local = Reg_bank;

    QString addr_q;
    QString reg_hexdec;
    int addr_int;
    unsigned char reg_temp;
    unsigned int reg_int;
    int bit_mask;
    int val_check;

    for( int i = 0; i < (naddress-1); i++)
    {
        //QList<QString> read_line = csv_read_line(i);
        addr_q = reg[i]->addnr->text();       // Take string address
        addr_int = addr_q.toInt();            // convert string address to Int
        bit_mask = reg[i]->bit_mask;          // Take bit bit mask for tem register
        reg_temp = reg_bank_local[addr_int];  // Take register value
        double calc_res;

        // write register value
        reg_int = static_cast<int>(reg_temp);  //
        reg_hexdec.setNum(reg_int,16);         // conver field value from DEC to HEX
        reg_hexdec.prepend("  0x");            //
        reg[i]->horlabel->setText(reg_hexdec); // Set lable string

        // set bit values
        for( int b = 0; b <= 7; b++ )
        {
            calc_res = bit_mask - pow(2,abs(b-7));
            if( calc_res >= 0 )
            {
                val_check = ((bit_mask & reg_temp) >> abs(b-7));
                if( val_check == 0 )
                {
                    reg[i]->bit[b]->setText(" 0");
                    reg[i]->bitcheckbox[b]->setEnabled( true );
                    reg[i]->bitcheckbox[b]->setChecked( false );
                }
                if( val_check == 1 )
                {
                    reg[i]->bit[b]->setText(" 1");
                    reg[i]->bitcheckbox[b]->setEnabled( true );
                    reg[i]->bitcheckbox[b]->setChecked( true );
                }
                bit_mask = calc_res;
            }
            else
            {
                reg[i]->bitcheckbox[b]->setEnabled( false );

            }
        }
    }
}


RegisterBrowser::~RegisterBrowser()
{
    delete ui;

}

//Slot triggered by closing window
void RegisterBrowser::closeEvent(QCloseEvent *event)
{
    // Tell mainwindow
    emit regBrow_closed();

    event->accept();
}


QList<QString> RegisterBrowser::get_data_array(int line)
{
    int k = line;
    QList<QString> data_fill;

    for(int i = 0; i <= 11; i++ )
    {
        data_fill.append("");
        data_fill[i].append(const_data[k][i]);
    }

    return data_fill;

}



// Update indication of read registers
// Input arguments:
//               - reg_map - array with all registers
void RegisterBrowser::update_register_indication_slot(unsigned char *reg_map){
    int counter1=0;
    int counter2=0;

    //update all mode register
    for(counter1=0;counter1<128;counter1++){
        //finde number register in list of mode register
        if(!my_one_reg_container.contains(counter1)){continue;}
        // update all registers fields
        for(counter2=0;counter2<my_one_reg_container.value(counter1).size();counter2++)
        {
            my_one_reg_container.value(counter1)[counter2]->set_reg_value(reg_map[counter1]);
        }
    }
}



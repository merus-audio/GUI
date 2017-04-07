#include <QtGui>
#include<QLayout>
#include<QHBoxLayout>
#include<QPushButton>
#include<QFrame>
#include<QLabel>
#include<QSlider>
#include<QCheckBox>
#include<registerbrowser.h>
#include<QCheckBox>
#include<QDesktopWidget>
#include<QApplication>


#include<customwidget.h>

RegBrowRow::RegBrowRow(QWidget *parent)
    : QWidget(parent)
{
    QString lable_stylesheet="QLabel { font: 'Calibri'; font-family: 'Calibri'; font-size: 10pt;}";
    QGridLayout *layout = new QGridLayout( this );
    layout->setContentsMargins(0,0,0,0);


    // some scaling stuff
    QDesktopWidget widget;
    QRect mainScreenSize = widget.availableGeometry(widget.primaryScreen());

    //double winH = mainScreenSize.height();
    double winW = mainScreenSize.width();

    //double winH_def = 1728;
    double winW_def = 3200;


    //double winH_rat = ((winH_def/winH)-1)*1.2+1;
    double winW_rat = ((winW_def/winW)-1)*1.0+1;

    double scl = 1.7;

    addnr = new QLabel(this);
    //addnr->setGeometry(10,55+(40),100,40);
    addnr->setStyleSheet(lable_stylesheet);
    addnr->setText("");
    addnr->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    addnr->setMaximumWidth((85*scl)/winW_rat);
    addnr->setMinimumWidth((85*scl)/winW_rat);
    layout->addWidget(addnr,1,0);
    addnr->setAlignment(Qt::AlignHCenter);

    for( int k = 0; k < 8; k++)
    {
        bitcheckbox[k] = new QCheckBox(this);
        bitcheckbox[k]->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
        signalMapper = new QSignalMapper(this);

        connect(bitcheckbox[k], SIGNAL(clicked()),signalMapper,SLOT(map()));
        signalMapper->setMapping(bitcheckbox[k],k);  // bitcheckbox[k] - senders's id, k - data send with this signal
        layout->addWidget(bitcheckbox[k],1,(1+k));

        connect(signalMapper,SIGNAL(mapped(int)),this,SIGNAL(clicked(int)));

        bit[k] = new QLabel(" 0",this);
        bit[k]->setProperty("lable_register_brouser_num_bit", true);
        layout->addWidget(bit[k],0,(1+k));
    }

    connect(this,SIGNAL(clicked(int)),this,SLOT(on_checkbox_clicked(int)));

    horlabel = new QLabel(this);
    horlabel->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    horlabel->setMaximumWidth((55*scl)/winW_rat);
    horlabel->setText("0x00");
    layout->addWidget(horlabel,1,9);


    namen = new QLabel(this);
    namen->setStyleSheet(lable_stylesheet);
    namen->setText("-0-");
    namen->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    namen->setMaximumWidth((205*scl)/winW_rat);
    namen->setMinimumWidth((205*scl)/winW_rat);
    layout->addWidget(namen,1,10);

    nRW = new QLabel(this);
    nRW->setStyleSheet(lable_stylesheet);
    nRW->setText("-0-");
    nRW->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    nRW->setMaximumWidth((85*scl)/winW_rat);
    nRW->setMinimumWidth((85*scl)/winW_rat);
    layout->addWidget(nRW,1,11);

    descrn = new QLabel(this);
    descrn->setStyleSheet(lable_stylesheet);
    descrn->setText(" Set PM mode to auto or manual");
    layout->addWidget(descrn,1,12);
}

void RegBrowRow::fill(QList<QString> str, unsigned char reg)
{
    QString temp = str[0];
    int value_check;
    int value_and;
    bit_mask = 0;
    //int size = temp.size();

    addnr->setText(temp);

    for( int i = 0; i <= 7; i++ )
    {
        temp = str[i+1];
        temp.prepend(" ");
        //bit[i]->setText(temp);

        if( (str[i+1] == "f") || (str[i+1] == "-") )
        {
            bit[i]->setText(temp);
            bitcheckbox[i]->setEnabled( false );
        }
        else
        {
            bit_mask = bit_mask + pow(2,abs(i-7)); // abs(i-7) becouse move from 7 bit to 0 bit
            value_and = (reg & (1 << abs(i-7)));
            value_check = value_and >> abs(i-7);
            if( value_check == 0 )
            {
                bit[i]->setText(" 0");
                bitcheckbox[i]->setEnabled( true );
                bitcheckbox[i]->setChecked( false );
            }

            if( value_check == 1 )
            {
                bit[i]->setText(" 1");
                bitcheckbox[i]->setEnabled( true );
                bitcheckbox[i]->setChecked( true );
            }
        }
    }

    namen->setText(str[9]);
    nRW->setText(str[10]);
    descrn->setText(str[11]);
}

void RegBrowRow::on_checkbox_clicked(int k)
{
    bool check = bitcheckbox[k]->isChecked();                                             // check for check or uncheck

    if( check == 1)
    {
        bit[k]->setText(" 1");                                                            // set according labelbox
    }
    else
    {
        bit[k]->setText(" 0");
    }

    // add functionality to to send scom command
    QString addr_str = addnr->text();
    int addr_int = addr_str.toInt();

    emit writeBit(abs(k-7),addr_int, check);
}





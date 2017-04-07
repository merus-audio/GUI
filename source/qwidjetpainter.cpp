#include "qwidjetpainter.h"
#include "ui_qwidjetpainter.h"
#include <QPainter>
#include <QImage>
#include <QRect>
#include <QRectF>
#include <QPointF>
#include <QDebug>
#include <QLabel>

QWidjetPainter::QWidjetPainter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QWidjetPainter)
{
    ui->setupUi(this);

    // set default name
    widget_name="0";
    //----MIN AND MAX POINTER POSITION DEFINITION---------
    max_point_engle=-140;
    min_point_engle=-220;
    max_point_position=100;
    min_point_position=0;
    k_pointer_position=(min_point_engle-max_point_engle)/(min_point_position-max_point_position);
    b_pointer_position=min_point_engle-min_point_position*k_pointer_position;
    ind_threshold=-164;
    //--------------------------------------------------------
    qreal df_1=0;
    qreal df_2=-2;
    qreal f_shadow1=-180;
    qreal f_shadow2=-240;

    k_shadow=(df_1-df_2)/(f_shadow1-f_shadow2);
    b_shadow=df_1-k_shadow*f_shadow1;
    //--------image_layer_3.load("C:/QT_WORKSPACE/QT_stylesheet/MERUS_srylesheet/Disign/layer_3.png");
    QImage image_layer_3;
    QSize img_size_shadow;
    image_layer_3.load(qApp->applicationDirPath() +  "/IMG/assets 2/VU/monitor_glass.png");
    img_size_shadow=image_layer_3.size();
    this->resize(image_layer_3.width(),image_layer_3.height());
}

QWidjetPainter::~QWidjetPainter()
{
    delete ui;
}

void QWidjetPainter::paintEvent(QPaintEvent *ev)
{
    //------Text area and text position paramiters-------------
    qreal text_area_X;
    qreal text_area_Y;
    qreal text_area_weight=50;
    qreal text_area_height=26;
    qreal text_area_radius=5;

    qreal text_X;
    qreal text_Y;
    //-------------------------------------------------

    QSize img_size_layer_1;
    QSize img_size_pointer;
    QSize img_size_shadow;
    // ----real indicator img--------------
    QImage image_layer_1;
    QImage image_layer_3;
    QImage image_pointer;
    QImage image_shadow;

    QPointF my_point(0,0);
    QColor area_color;

    //-------------------
    image_layer_1.load(qApp->applicationDirPath() +  "/IMG/assets 2/VU/monitor_bg.png");
    image_layer_3.load(qApp->applicationDirPath() +  "/IMG/assets 2/VU/monitor_glass.png");
    image_pointer.load(qApp->applicationDirPath() +  "/IMG/assets 2/VU/pointer.png");
    image_shadow.load(qApp->applicationDirPath() +   "/IMG/assets 2/VU/pointer_shadow.png");

    // Calc text area position paramiters
    img_size_layer_1=image_layer_1.size();
    text_area_X=img_size_layer_1.width()/2;
    text_area_Y=99;

    // Calc text level position paramiters
    text_X=text_area_X+text_area_radius;
    text_Y=text_area_Y+1;
    QRectF text_level_rect(text_X,text_Y,text_area_weight-2*text_area_radius,text_area_height-1);

    // Calc text name UP position paramiters
    text_X=text_area_X-text_area_weight;
    text_Y=text_area_Y+1;
    QRectF text_name_up(text_X,text_Y,text_area_weight,text_area_height-1);

    // Calc text name DOWN position paramiters
    text_X=text_area_X-text_area_weight;
    text_Y=text_area_Y+text_area_height;
    QRectF text_name_down(text_X,text_Y,text_area_weight*2,text_area_height-1);

    QPainter p(this);

    p.drawImage(my_point,image_layer_1 );
//--------add text indicator level----------------------------
    area_color=QColor(55,79,93);
    if(ind_threshold<pos)
    {
        area_color=Qt::red;
    }

    p.setBrush(area_color);
    p.setPen(area_color);
    p.drawRoundedRect(text_area_X,text_area_Y,text_area_weight,text_area_height,text_area_radius,text_area_radius);
    //--------Draw level text------------------
    p.setPen(Qt::white);
    QFont font("Segoe UI", 15, QFont::Bold);
    p.setFont(font);
    p.drawText(text_level_rect,Qt::AlignCenter|Qt::AlignBottom ,QString::number(this->getValue()));
    //--------Draw name up text------------------
    QColor font_pen(52,79,94);
    p.setPen(font_pen);
    p.setFont(font);
    p.drawText(text_name_up,Qt::AlignRight|Qt::AlignBottom ,"CH"+widget_name+": ");
    //--------Draw name down text------------------
    font.setBold(true);
    font.setPointSize(11);
    p.setFont(font);
    p.drawText(text_name_down,Qt::AlignHCenter|Qt::AlignBottom ,"MODULATION");

// ----add pointer----
    QPoint rotCenter(text_area_X,img_size_layer_1.height()-3);
    p.save();
    img_size_shadow=image_shadow.size();
    p.translate(rotCenter);
    p.rotate(df_shadow()+pos);
    p.drawImage(-img_size_shadow.width()/2-1,0,image_shadow);
    p.restore();

// ----add shadow pointer----
    p.save();
    img_size_pointer=image_pointer.size();
    p.translate(rotCenter);
    p.rotate(pos);
    p.drawImage(-img_size_pointer.width()/2-1,0,image_pointer);
    p.restore();

   // qDebug()<<pos;
//-----
    p.drawImage(my_point,image_layer_3 );
}

//Add new threshold of scale
void QWidjetPainter::set_new_scale_threshold(int new_min_pos, int new_max_pos){
    max_point_position=new_max_pos;
    min_point_position=new_min_pos;
    k_pointer_position=(min_point_engle-max_point_engle)/(min_point_position-max_point_position);
    b_pointer_position=min_point_engle-min_point_position*k_pointer_position;
}


qreal QWidjetPainter::df_shadow(void){
    return k_shadow*pos+b_shadow;
}

void QWidjetPainter::setValue(qreal new_pos){
    if((new_pos<min_point_position)||((new_pos>max_point_position))){return;}
    pos=new_pos*k_pointer_position+b_pointer_position;
    update();
}

qreal QWidjetPainter::getValue(void){
    return (pos-b_pointer_position)/k_pointer_position;
}


void QWidjetPainter::setName(QString new_name){
    this->widget_name=new_name;
};



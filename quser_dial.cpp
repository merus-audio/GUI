#include "quser_dial.h"
#include "ui_quser_dial.h"
#include <QPainter>
#include <QImage>
#include <QRect>
#include <QRectF>
#include <QPointF>
#include <QDebug>
#include <QLabel>
#include <QMouseEvent>

quser_dial::quser_dial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::quser_dial)
{
    ui->setupUi(this);
    // get image
    image_layer_1_left.load(qApp->applicationDirPath() +  "/IMG/assets 2/knob/marking_left.png");
    image_layer_1_right.load(qApp->applicationDirPath() +  "/IMG/assets 2/knob/marking_right.png");
    image_layer_2.load(qApp->applicationDirPath() +  "/IMG/assets 2/knob/knob_body.png");
    image_pointer.load(qApp->applicationDirPath() +  "/IMG/assets 2/knob/knob_pointer.png");
    // get size image
    img_size_layer_1_left=image_layer_1_left.size();
    img_size_layer_1_right=image_layer_1_right.size();
    img_size_layer_2=image_layer_2.size();
    img_size_pointer=image_pointer.size();
    this->setSide(DIAL_LEFT);
}

quser_dial::~quser_dial()
{
    delete ui;
}

// Set user switching position parameters:
// Zero angle - 270 degree typically. Positive direction - clockwise
// min_angle - firest engle point position
// max_angle - last engle point position
// num_position - total num position
void quser_dial::init_switch_position(int num_position, qreal min_angle, qreal max_angle){
    start_angle=min_angle;
    stop_angle=max_angle;
    max_num_position=num_position;
    d_angle=(stop_angle-start_angle)/(max_num_position-1);
}


// Set default position
void quser_dial::set_default_switch_position(void){
    max_num_position=DEFAULT_NUM_POS;
    if(this->user_side==USER_DIAL_SIDE::DIAL_RIGHT){
       start_angle=DEFAULT_START_ANGLE_RIGHT;
       stop_angle=DEFAULT_STOP_ANGLE_RIGHT;
    }
    else{
       start_angle=DEFAULT_START_ANGLE_LEFT;
       stop_angle=DEFAULT_STOP_ANGLE_LEFT;
    }
    d_angle=(stop_angle-start_angle)/(max_num_position-1);
}

// Set temporary position of pointer
bool quser_dial::set_position(int position){
    if(position>max_num_position){return false;}
    temp_pointer_pos=position;
    this->update();
    return true;
}

// return temporary pointer position
int quser_dial::get_pos_pointer(void){
    return (this->temp_pointer_pos);
}


// User set side of dial marker
// input arg:
//          - DIAL_RIGHT - right marker position
//          - DIAL_LEFT  - left marker position
void quser_dial::setSide(USER_DIAL_SIDE set_user_side)
{
   user_side=set_user_side;
   qreal X_layer_1, X_layer_2, X_pointer;
   qreal Y_layer_1, Y_layer_2, Y_pointer;
   if(this->user_side==USER_DIAL_SIDE::DIAL_RIGHT){
      // ---calc coordinats layer_1
      X_layer_1=img_size_layer_2.width()- img_size_layer_1_left.width()/2;;
      Y_layer_1=img_size_layer_2.height()/2 - this->img_size_layer_1_left.height()/2;
      // ---calc coordinats layer_2
      X_layer_2=0;
      Y_layer_2=0;
      // ---calc coordinats pointer
      X_pointer=0;
      Y_pointer=0;
      image_layer_1=image_layer_1_right;
   }
   else{
     // ---calc coordinats layer_1
      X_layer_1=0;
      Y_layer_1=img_size_layer_2.height()/2 - this->img_size_layer_1_left.height()/2;
      // ---calc coordinats layer_2
      X_layer_2=img_size_layer_1_left.width()/2;
      Y_layer_2=0;
      // ---calc coordinats pointer
      X_pointer=img_size_layer_1_left.width()/2;
      Y_pointer=0;
      image_layer_1=image_layer_1_left;
    }
    // ---calc coordinats layer_1
    Point_layer_1.setX(X_layer_1);
    Point_layer_1.setY(Y_layer_1);
    // ---calc coordinats layer_2
    Point_layer_2.setX(X_layer_2);
    Point_layer_2.setY(Y_layer_2);
    // ---calc coordinats pointer
    Point_pointer.setX(X_pointer);
    Point_pointer.setY(Y_pointer);
}




void quser_dial::paintEvent(QPaintEvent *ev)
{
    qreal X_rot_centr;
    qreal Y_rot_centr;
    QPointF my_point(0,0);

    QPainter p(this);

    p.drawImage(Point_layer_1,image_layer_1 );
    p.drawImage(Point_layer_2,image_layer_2 );


// ----add pointer----
    Y_rot_centr= img_size_layer_2.height()/2;
    if(this->user_side==DIAL_LEFT){
        X_rot_centr=img_size_layer_1_left.width()/2 + img_size_layer_2.width()/2;
    }
     else{
        X_rot_centr=img_size_layer_2.width()/2;
     }

    QPoint rotCenter(X_rot_centr,Y_rot_centr);
    p.save();
    p.translate(rotCenter);
    p.rotate(start_angle+d_angle*temp_pointer_pos);
    p.translate(-rotCenter);

    p.drawImage(Point_pointer,image_pointer);
    p.restore();
}

 void quser_dial::mousePressEvent( QMouseEvent *event ){
    int now_pos=get_pos_pointer();
    if (event->button() != Qt::LeftButton){return;}

    now_pos++;
    qDebug()<<"Position = "<<now_pos;
    if(now_pos>(max_num_position-1)){
      now_pos=0;
    }
    set_position(now_pos);
    emit mouse_clic(now_pos);
 }

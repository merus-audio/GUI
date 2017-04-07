#include "qslider_user.h"
#include <QtWidgets/qslider.h>
#include <QWidget>
#include <QKeyEvent>

QSlider_USER::QSlider_USER(QWidget *parent )
    :QSlider(parent)
{
     //my_focus_frame= new QFocusFrame(parent);
}

QSlider_USER::QSlider_USER(Qt::Orientation orientation, QWidget *parent)
    :QSlider(orientation, parent)
{}

void QSlider_USER::keyPressEvent(QKeyEvent *event){
    switch(event->key()){
    case Qt::Key_Up:
        this->setValue(this->value() -1);
        return;
    case Qt::Key_Down:
        this->setValue(this->value() +1);
        return;
    default: return QWidget::keyPressEvent(event);
    }
}

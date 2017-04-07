#include "qcheckbox_user.h"
#include <QtWidgets/qcheckbox.h>
#include <QWidget>
#include <QKeyEvent>


QCheckBox_User::QCheckBox_User(QWidget *parent )
    :QCheckBox(parent)
{
     //my_focus_frame= new QFocusFrame(parent);
}

QCheckBox_User::QCheckBox_User(const QString &text, QWidget *parent)
    :QCheckBox(text, parent)
{}

void QCheckBox_User::keyPressEvent(QKeyEvent *event){
    switch(event->key()){
    case Qt::Key_Up:
        //this->setValue(this->value() -1);
        return;
    case Qt::Key_Down:
        //this->setValue(this->value() +1);
        return;
    default: return QWidget::keyPressEvent(event);
    }
}


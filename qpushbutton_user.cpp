#include "qpushbutton_user.h"
#include <QtWidgets/qpushbutton.h>
#include <QWidget>
#include <QKeyEvent>

QPushBotton_User::QPushBotton_User(QWidget *parent )
    :QPushButton(parent)
{}

QPushBotton_User::QPushBotton_User(const QString &text, QWidget *parent)
    :QPushButton(text, parent)
{}


QPushBotton_User::QPushBotton_User(const QIcon& icon, const QString &text, QWidget *parent)
    :QPushButton(icon, text,parent)
{}



void QPushBotton_User::keyPressEvent(QKeyEvent *event){
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

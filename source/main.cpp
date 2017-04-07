#include "devicecontrol.h"
#include "newwindow.h"
#include <QApplication>
#include <QTimer>
#include <QDesktopWidget>
#include <QRect>
#include <QRect>
#include <QFile>
#include <QDebug>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //--------open style file
    QFile styleF;
    styleF.setFileName(QString( QCoreApplication::applicationDirPath())+"/IMG/style.css");
    styleF.open(QFile::ReadOnly | QIODevice::Text);
    QString qssStr = styleF.readAll();
    qApp->setStyleSheet(qssStr);
    //----------------------------------------------

    DeviceControl w;

    w.show();

    // make scaling static again
    double winH = 1160;//mainScreenSize.height();
    double winW = 1920;//mainScreenSize.width();

    double winH_def = 1728;
    double winW_def = 3200;

    double winH_rat = ((winH_def/winH)-1)*1.2+1;
    double winW_rat = ((winW_def/winW)-1)*1.0+1;

   // w.setFixedSize(990/winW_rat,690/winH_rat);

    double scl = 1.8;

    // use global scaling factor for all widgets based on screen resolution

    //foreach (QWidget *widget, QApplication::allWidgets())
    foreach (QWidget *widget, w.findChildren<QWidget *>())
    {
        QRect geo = widget->geometry();
        geo.setLeft((geo.left()*scl)/winW_rat);
        geo.setRight((geo.right()*scl)/winW_rat);
        geo.setBottom((geo.bottom()*scl)/winH_rat);
        geo.setTop((geo.top()*scl)/winH_rat);
        widget->setGeometry(geo);
    }

    const QRect screen = QApplication::desktop()->screenGeometry();
    w.move( screen.center() - w.rect().center() );

    return a.exec();
}



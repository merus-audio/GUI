/********************************************************************************
** Form generated from reading UI file 'devinf.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVINF_H
#define UI_DEVINF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DevInf
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DevInf)
    {
        if (DevInf->objectName().isEmpty())
            DevInf->setObjectName(QStringLiteral("DevInf"));
        DevInf->resize(800, 600);
        centralwidget = new QWidget(DevInf);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        DevInf->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DevInf);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        DevInf->setMenuBar(menubar);
        statusbar = new QStatusBar(DevInf);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DevInf->setStatusBar(statusbar);

        retranslateUi(DevInf);

        QMetaObject::connectSlotsByName(DevInf);
    } // setupUi

    void retranslateUi(QMainWindow *DevInf)
    {
        DevInf->setWindowTitle(QApplication::translate("DevInf", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class DevInf: public Ui_DevInf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVINF_H

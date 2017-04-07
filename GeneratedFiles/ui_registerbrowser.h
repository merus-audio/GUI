/********************************************************************************
** Form generated from reading UI file 'registerbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERBROWSER_H
#define UI_REGISTERBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterBrowser
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterBrowser)
    {
        if (RegisterBrowser->objectName().isEmpty())
            RegisterBrowser->setObjectName(QStringLiteral("RegisterBrowser"));
        RegisterBrowser->resize(1257, 1013);
        centralwidget = new QWidget(RegisterBrowser);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1237, 952));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        RegisterBrowser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegisterBrowser);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1257, 21));
        RegisterBrowser->setMenuBar(menubar);
        statusbar = new QStatusBar(RegisterBrowser);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RegisterBrowser->setStatusBar(statusbar);

        retranslateUi(RegisterBrowser);

        QMetaObject::connectSlotsByName(RegisterBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterBrowser)
    {
        RegisterBrowser->setWindowTitle(QApplication::translate("RegisterBrowser", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterBrowser: public Ui_RegisterBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERBROWSER_H

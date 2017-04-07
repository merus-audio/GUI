/********************************************************************************
** Form generated from reading UI file 'quser_dial.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUSER_DIAL_H
#define UI_QUSER_DIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quser_dial
{
public:

    void setupUi(QWidget *quser_dial)
    {
        if (quser_dial->objectName().isEmpty())
            quser_dial->setObjectName(QStringLiteral("quser_dial"));
        quser_dial->resize(183, 139);

        retranslateUi(quser_dial);

        QMetaObject::connectSlotsByName(quser_dial);
    } // setupUi

    void retranslateUi(QWidget *quser_dial)
    {
        quser_dial->setWindowTitle(QApplication::translate("quser_dial", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class quser_dial: public Ui_quser_dial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUSER_DIAL_H

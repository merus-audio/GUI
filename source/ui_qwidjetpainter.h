/********************************************************************************
** Form generated from reading UI file 'qwidjetpainter.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWIDJETPAINTER_H
#define UI_QWIDJETPAINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWidjetPainter
{
public:

    void setupUi(QWidget *QWidjetPainter)
    {
        if (QWidjetPainter->objectName().isEmpty())
            QWidjetPainter->setObjectName(QStringLiteral("QWidjetPainter"));
        QWidjetPainter->resize(104, 98);

        retranslateUi(QWidjetPainter);

        QMetaObject::connectSlotsByName(QWidjetPainter);
    } // setupUi

    void retranslateUi(QWidget *QWidjetPainter)
    {
        QWidjetPainter->setWindowTitle(QApplication::translate("QWidjetPainter", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWidjetPainter: public Ui_QWidjetPainter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWIDJETPAINTER_H

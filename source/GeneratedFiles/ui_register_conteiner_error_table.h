/********************************************************************************
** Form generated from reading UI file 'register_conteiner_error_table.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_CONTEINER_ERROR_TABLE_H
#define UI_REGISTER_CONTEINER_ERROR_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_conteiner_error_table
{
public:
    QGridLayout *gridLayoutRegDescription;
    QLabel *label_3;
    QLabel *labelRegName;
    QLabel *label_6;

    void setupUi(QWidget *register_conteiner_error_table)
    {
        if (register_conteiner_error_table->objectName().isEmpty())
            register_conteiner_error_table->setObjectName(QStringLiteral("register_conteiner_error_table"));
        register_conteiner_error_table->resize(937, 193);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(register_conteiner_error_table->sizePolicy().hasHeightForWidth());
        register_conteiner_error_table->setSizePolicy(sizePolicy);
        gridLayoutRegDescription = new QGridLayout(register_conteiner_error_table);
        gridLayoutRegDescription->setObjectName(QStringLiteral("gridLayoutRegDescription"));
        gridLayoutRegDescription->setSizeConstraint(QLayout::SetFixedSize);
        label_3 = new QLabel(register_conteiner_error_table);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayoutRegDescription->addWidget(label_3, 1, 0, 1, 1, Qt::AlignHCenter);

        labelRegName = new QLabel(register_conteiner_error_table);
        labelRegName->setObjectName(QStringLiteral("labelRegName"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelRegName->sizePolicy().hasHeightForWidth());
        labelRegName->setSizePolicy(sizePolicy1);
        labelRegName->setMinimumSize(QSize(0, 40));
        labelRegName->setMaximumSize(QSize(16777215, 40));

        gridLayoutRegDescription->addWidget(labelRegName, 0, 1, 1, 1);

        label_6 = new QLabel(register_conteiner_error_table);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayoutRegDescription->addWidget(label_6, 1, 1, 1, 1);

        gridLayoutRegDescription->setColumnStretch(0, 1);
        gridLayoutRegDescription->setColumnStretch(1, 5);

        retranslateUi(register_conteiner_error_table);

        QMetaObject::connectSlotsByName(register_conteiner_error_table);
    } // setupUi

    void retranslateUi(QWidget *register_conteiner_error_table)
    {
        register_conteiner_error_table->setWindowTitle(QApplication::translate("register_conteiner_error_table", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("register_conteiner_error_table", "TextLabel", Q_NULLPTR));
        labelRegName->setText(QApplication::translate("register_conteiner_error_table", "VALUE", Q_NULLPTR));
        label_6->setText(QApplication::translate("register_conteiner_error_table", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class register_conteiner_error_table: public Ui_register_conteiner_error_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_CONTEINER_ERROR_TABLE_H

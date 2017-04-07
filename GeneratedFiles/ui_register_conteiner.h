/********************************************************************************
** Form generated from reading UI file 'register_conteiner.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_CONTEINER_H
#define UI_REGISTER_CONTEINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register_conteiner
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxBit1;
    QCheckBox *checkBoxBit6;
    QCheckBox *checkBoxBit5;
    QCheckBox *checkBoxBit7;
    QLabel *labelInterpritation;
    QCheckBox *checkBoxBit0;
    QLabel *label_hex;
    QLabel *labelBit3;
    QLabel *labelBit7;
    QLabel *labelBit2;
    QLabel *labelBit0;
    QLabel *labelBit4;
    QLabel *labelBit6;
    QLabel *labelBit1;
    QLabel *labelDiscription;
    QLabel *labelValue;
    QLabel *labelBit5;
    QCheckBox *checkBoxBit2;
    QCheckBox *checkBoxBit4;
    QCheckBox *checkBoxBit3;
    QLabel *label;
    QLabel *labelRegNum;

    void setupUi(QWidget *Register_conteiner)
    {
        if (Register_conteiner->objectName().isEmpty())
            Register_conteiner->setObjectName(QStringLiteral("Register_conteiner"));
        Register_conteiner->resize(900, 40);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Register_conteiner->sizePolicy().hasHeightForWidth());
        Register_conteiner->setSizePolicy(sizePolicy);
        Register_conteiner->setMinimumSize(QSize(900, 40));
        Register_conteiner->setMaximumSize(QSize(2000, 40));
        Register_conteiner->setFocusPolicy(Qt::StrongFocus);
        gridLayoutWidget = new QWidget(Register_conteiner);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, -10, 1709, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxBit1 = new QCheckBox(gridLayoutWidget);
        checkBoxBit1->setObjectName(QStringLiteral("checkBoxBit1"));
        checkBoxBit1->setEnabled(false);
        checkBoxBit1->setMinimumSize(QSize(25, 0));
        checkBoxBit1->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(checkBoxBit1, 1, 7, 1, 1, Qt::AlignHCenter);

        checkBoxBit6 = new QCheckBox(gridLayoutWidget);
        checkBoxBit6->setObjectName(QStringLiteral("checkBoxBit6"));
        checkBoxBit6->setEnabled(false);
        checkBoxBit6->setMinimumSize(QSize(25, 0));
        checkBoxBit6->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(checkBoxBit6, 1, 2, 1, 1, Qt::AlignHCenter);

        checkBoxBit5 = new QCheckBox(gridLayoutWidget);
        checkBoxBit5->setObjectName(QStringLiteral("checkBoxBit5"));
        checkBoxBit5->setEnabled(false);
        checkBoxBit5->setMinimumSize(QSize(25, 0));
        checkBoxBit5->setMaximumSize(QSize(25, 16777215));
        checkBoxBit5->setIconSize(QSize(16, 16));

        gridLayout->addWidget(checkBoxBit5, 1, 3, 1, 1, Qt::AlignHCenter);

        checkBoxBit7 = new QCheckBox(gridLayoutWidget);
        checkBoxBit7->setObjectName(QStringLiteral("checkBoxBit7"));
        checkBoxBit7->setEnabled(false);
        checkBoxBit7->setMinimumSize(QSize(25, 0));
        checkBoxBit7->setMaximumSize(QSize(25, 16777215));
        checkBoxBit7->setChecked(false);

        gridLayout->addWidget(checkBoxBit7, 1, 1, 1, 1, Qt::AlignLeft);

        labelInterpritation = new QLabel(gridLayoutWidget);
        labelInterpritation->setObjectName(QStringLiteral("labelInterpritation"));
        labelInterpritation->setMinimumSize(QSize(210, 0));
        labelInterpritation->setMaximumSize(QSize(200, 20));

        gridLayout->addWidget(labelInterpritation, 1, 11, 1, 1);

        checkBoxBit0 = new QCheckBox(gridLayoutWidget);
        checkBoxBit0->setObjectName(QStringLiteral("checkBoxBit0"));
        checkBoxBit0->setEnabled(false);
        checkBoxBit0->setMinimumSize(QSize(25, 0));
        checkBoxBit0->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(checkBoxBit0, 1, 8, 1, 1, Qt::AlignHCenter);

        label_hex = new QLabel(gridLayoutWidget);
        label_hex->setObjectName(QStringLiteral("label_hex"));
        label_hex->setMinimumSize(QSize(20, 0));
        label_hex->setMaximumSize(QSize(20, 16777215));
        label_hex->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_hex, 1, 9, 1, 1);

        labelBit3 = new QLabel(gridLayoutWidget);
        labelBit3->setObjectName(QStringLiteral("labelBit3"));
        labelBit3->setMinimumSize(QSize(12, 15));
        labelBit3->setMaximumSize(QSize(12, 15));
        labelBit3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit3, 0, 5, 1, 1);

        labelBit7 = new QLabel(gridLayoutWidget);
        labelBit7->setObjectName(QStringLiteral("labelBit7"));
        labelBit7->setMinimumSize(QSize(12, 15));
        labelBit7->setMaximumSize(QSize(12, 15));
        labelBit7->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit7, 0, 1, 1, 1);

        labelBit2 = new QLabel(gridLayoutWidget);
        labelBit2->setObjectName(QStringLiteral("labelBit2"));
        labelBit2->setMinimumSize(QSize(12, 15));
        labelBit2->setMaximumSize(QSize(12, 15));
        labelBit2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit2, 0, 6, 1, 1);

        labelBit0 = new QLabel(gridLayoutWidget);
        labelBit0->setObjectName(QStringLiteral("labelBit0"));
        labelBit0->setMinimumSize(QSize(12, 15));
        labelBit0->setMaximumSize(QSize(12, 15));
        labelBit0->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit0, 0, 8, 1, 1, Qt::AlignBottom);

        labelBit4 = new QLabel(gridLayoutWidget);
        labelBit4->setObjectName(QStringLiteral("labelBit4"));
        labelBit4->setMinimumSize(QSize(12, 15));
        labelBit4->setMaximumSize(QSize(12, 15));
        labelBit4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit4, 0, 4, 1, 1);

        labelBit6 = new QLabel(gridLayoutWidget);
        labelBit6->setObjectName(QStringLiteral("labelBit6"));
        labelBit6->setMinimumSize(QSize(12, 15));
        labelBit6->setMaximumSize(QSize(12, 15));
        labelBit6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit6, 0, 2, 1, 1);

        labelBit1 = new QLabel(gridLayoutWidget);
        labelBit1->setObjectName(QStringLiteral("labelBit1"));
        labelBit1->setMinimumSize(QSize(12, 15));
        labelBit1->setMaximumSize(QSize(12, 15));
        labelBit1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit1, 0, 7, 1, 1);

        labelDiscription = new QLabel(gridLayoutWidget);
        labelDiscription->setObjectName(QStringLiteral("labelDiscription"));
        labelDiscription->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(labelDiscription, 1, 13, 1, 1);

        labelValue = new QLabel(gridLayoutWidget);
        labelValue->setObjectName(QStringLiteral("labelValue"));
        labelValue->setMinimumSize(QSize(50, 0));
        labelValue->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(labelValue, 1, 10, 1, 1);

        labelBit5 = new QLabel(gridLayoutWidget);
        labelBit5->setObjectName(QStringLiteral("labelBit5"));
        labelBit5->setMinimumSize(QSize(12, 15));
        labelBit5->setMaximumSize(QSize(12, 15));
        labelBit5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(labelBit5, 0, 3, 1, 1);

        checkBoxBit2 = new QCheckBox(gridLayoutWidget);
        checkBoxBit2->setObjectName(QStringLiteral("checkBoxBit2"));
        checkBoxBit2->setEnabled(false);
        checkBoxBit2->setMinimumSize(QSize(25, 0));
        checkBoxBit2->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(checkBoxBit2, 1, 6, 1, 1, Qt::AlignHCenter);

        checkBoxBit4 = new QCheckBox(gridLayoutWidget);
        checkBoxBit4->setObjectName(QStringLiteral("checkBoxBit4"));
        checkBoxBit4->setEnabled(false);
        checkBoxBit4->setMinimumSize(QSize(25, 0));
        checkBoxBit4->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(checkBoxBit4, 1, 4, 1, 1, Qt::AlignHCenter);

        checkBoxBit3 = new QCheckBox(gridLayoutWidget);
        checkBoxBit3->setObjectName(QStringLiteral("checkBoxBit3"));
        checkBoxBit3->setEnabled(false);
        checkBoxBit3->setMinimumSize(QSize(25, 0));
        checkBoxBit3->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(checkBoxBit3, 1, 5, 1, 1, Qt::AlignHCenter);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(95, 0));
        label->setMaximumSize(QSize(95, 16777215));

        gridLayout->addWidget(label, 1, 12, 1, 1);

        labelRegNum = new QLabel(gridLayoutWidget);
        labelRegNum->setObjectName(QStringLiteral("labelRegNum"));
        labelRegNum->setMinimumSize(QSize(90, 0));
        labelRegNum->setMaximumSize(QSize(90, 16777215));
        labelRegNum->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelRegNum, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 3);

        retranslateUi(Register_conteiner);

        QMetaObject::connectSlotsByName(Register_conteiner);
    } // setupUi

    void retranslateUi(QWidget *Register_conteiner)
    {
        Register_conteiner->setWindowTitle(QApplication::translate("Register_conteiner", "Form", Q_NULLPTR));
        checkBoxBit1->setText(QString());
        checkBoxBit1->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        checkBoxBit6->setText(QString());
        checkBoxBit6->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        checkBoxBit5->setText(QString());
        checkBoxBit5->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        checkBoxBit7->setText(QString());
        checkBoxBit7->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelInterpritation->setText(QApplication::translate("Register_conteiner", "TextLabel", Q_NULLPTR));
        labelInterpritation->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        checkBoxBit0->setText(QString());
        checkBoxBit0->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        label_hex->setText(QApplication::translate("Register_conteiner", "0x", Q_NULLPTR));
        label_hex->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit3->setText(QApplication::translate("Register_conteiner", "-", Q_NULLPTR));
        labelBit3->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit3->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelBit7->setText(QApplication::translate("Register_conteiner", "-", Q_NULLPTR));
        labelBit7->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit7->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelBit2->setText(QApplication::translate("Register_conteiner", "0", Q_NULLPTR));
        labelBit2->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit2->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelBit0->setText(QApplication::translate("Register_conteiner", "F", Q_NULLPTR));
        labelBit0->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit0->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelBit4->setText(QApplication::translate("Register_conteiner", "F", Q_NULLPTR));
        labelBit4->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit4->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelBit6->setText(QApplication::translate("Register_conteiner", "0", Q_NULLPTR));
        labelBit6->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit6->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelBit1->setText(QApplication::translate("Register_conteiner", "1", Q_NULLPTR));
        labelBit1->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit1->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        labelDiscription->setText(QApplication::translate("Register_conteiner", "TextLabel", Q_NULLPTR));
        labelDiscription->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelValue->setText(QApplication::translate("Register_conteiner", "TextLabel", Q_NULLPTR));
        labelValue->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit5->setText(QApplication::translate("Register_conteiner", "1", Q_NULLPTR));
        labelBit5->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        labelBit5->setProperty("lable_register_brouser_num_bit", QVariant(QApplication::translate("Register_conteiner", "true", Q_NULLPTR)));
        checkBoxBit2->setText(QString());
        checkBoxBit2->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        checkBoxBit4->setText(QString());
        checkBoxBit4->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        checkBoxBit3->setText(QString());
        checkBoxBit3->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
        label->setText(QApplication::translate("Register_conteiner", "In", Q_NULLPTR));
        labelRegNum->setText(QApplication::translate("Register_conteiner", "Num", Q_NULLPTR));
        labelRegNum->setProperty("lable_register_brouser", QVariant(QApplication::translate("Register_conteiner", "set", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class Register_conteiner: public Ui_Register_conteiner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_CONTEINER_H

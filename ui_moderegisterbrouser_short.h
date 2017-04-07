/********************************************************************************
** Form generated from reading UI file 'moderegisterbrouser_short.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEREGISTERBROUSER_SHORT_H
#define UI_MODEREGISTERBROUSER_SHORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeRegisterBrouser_short
{
public:
    QWidget *centralwidget;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QFrame *gridFrame_3;
    QGridLayout *gridLayout_3;
    QFrame *gridFrame_clear_error;
    QGridLayout *gridLayout_4;
    QLabel *label_reg_inf_bit_16;
    QLabel *label_reg_inf_bit_22;
    QLabel *label_reg_inf_bit_23;
    QLabel *label_reg_inf_bit_17;
    QLabel *label_reg_inf_bit_21;
    QLabel *label_reg_inf_bit_18;
    QLabel *label_reg_inf_bit_20;
    QLabel *label_reg_inf_bit_19;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_clear_error;
    QLabel *label_mode_reg_description_3;
    QLabel *label_mod_reg_address_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_mod_reg_interpretation_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents1;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ModeRegisterBrouser_short)
    {
        if (ModeRegisterBrouser_short->objectName().isEmpty())
            ModeRegisterBrouser_short->setObjectName(QStringLiteral("ModeRegisterBrouser_short"));
        ModeRegisterBrouser_short->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModeRegisterBrouser_short->sizePolicy().hasHeightForWidth());
        ModeRegisterBrouser_short->setSizePolicy(sizePolicy);
        ModeRegisterBrouser_short->setMinimumSize(QSize(800, 200));
        ModeRegisterBrouser_short->setMaximumSize(QSize(800, 480));
        centralwidget = new QWidget(ModeRegisterBrouser_short);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridFrame = new QFrame(centralwidget);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setGeometry(QRect(10, 10, 1000, 471));
        gridFrame->setMinimumSize(QSize(300, 0));
        gridFrame->setMaximumSize(QSize(2000, 16777215));
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 6, 1, 6);
        gridFrame_3 = new QFrame(gridFrame);
        gridFrame_3->setObjectName(QStringLiteral("gridFrame_3"));
        gridLayout_3 = new QGridLayout(gridFrame_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_3->setContentsMargins(7, 9, 1, 0);
        gridFrame_clear_error = new QFrame(gridFrame_3);
        gridFrame_clear_error->setObjectName(QStringLiteral("gridFrame_clear_error"));
        sizePolicy.setHeightForWidth(gridFrame_clear_error->sizePolicy().hasHeightForWidth());
        gridFrame_clear_error->setSizePolicy(sizePolicy);
        gridFrame_clear_error->setMinimumSize(QSize(270, 40));
        gridFrame_clear_error->setMaximumSize(QSize(270, 40));
        gridLayout_4 = new QGridLayout(gridFrame_clear_error);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 4, 0, 4);
        label_reg_inf_bit_16 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_16->setObjectName(QStringLiteral("label_reg_inf_bit_16"));
        label_reg_inf_bit_16->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_16->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_16, 0, 4, 1, 1);

        label_reg_inf_bit_22 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_22->setObjectName(QStringLiteral("label_reg_inf_bit_22"));
        label_reg_inf_bit_22->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_22->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_22, 0, 5, 1, 1);

        label_reg_inf_bit_23 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_23->setObjectName(QStringLiteral("label_reg_inf_bit_23"));
        label_reg_inf_bit_23->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_23->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_23, 0, 1, 1, 1);

        label_reg_inf_bit_17 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_17->setObjectName(QStringLiteral("label_reg_inf_bit_17"));
        label_reg_inf_bit_17->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_17->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_17, 0, 3, 1, 1);

        label_reg_inf_bit_21 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_21->setObjectName(QStringLiteral("label_reg_inf_bit_21"));
        label_reg_inf_bit_21->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_21->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_21, 0, 6, 1, 1);

        label_reg_inf_bit_18 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_18->setObjectName(QStringLiteral("label_reg_inf_bit_18"));
        label_reg_inf_bit_18->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_18->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_18, 0, 2, 1, 1);

        label_reg_inf_bit_20 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_20->setObjectName(QStringLiteral("label_reg_inf_bit_20"));
        label_reg_inf_bit_20->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_20->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_20, 0, 7, 1, 1);

        label_reg_inf_bit_19 = new QLabel(gridFrame_clear_error);
        label_reg_inf_bit_19->setObjectName(QStringLiteral("label_reg_inf_bit_19"));
        label_reg_inf_bit_19->setMaximumSize(QSize(20, 16777215));
        label_reg_inf_bit_19->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_reg_inf_bit_19, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, 15, -1);
        pushButton_clear_error = new QPushButton(gridFrame_clear_error);
        pushButton_clear_error->setObjectName(QStringLiteral("pushButton_clear_error"));
        pushButton_clear_error->setMinimumSize(QSize(80, 30));
        pushButton_clear_error->setMaximumSize(QSize(80, 30));

        horizontalLayout->addWidget(pushButton_clear_error);


        gridLayout_4->addLayout(horizontalLayout, 0, 8, 1, 1);


        gridLayout_3->addWidget(gridFrame_clear_error, 0, 1, 1, 1);

        label_mode_reg_description_3 = new QLabel(gridFrame_3);
        label_mode_reg_description_3->setObjectName(QStringLiteral("label_mode_reg_description_3"));
        sizePolicy.setHeightForWidth(label_mode_reg_description_3->sizePolicy().hasHeightForWidth());
        label_mode_reg_description_3->setSizePolicy(sizePolicy);
        label_mode_reg_description_3->setMinimumSize(QSize(100, 20));
        label_mode_reg_description_3->setMaximumSize(QSize(100, 20));

        gridLayout_3->addWidget(label_mode_reg_description_3, 0, 3, 1, 1);

        label_mod_reg_address_3 = new QLabel(gridFrame_3);
        label_mod_reg_address_3->setObjectName(QStringLiteral("label_mod_reg_address_3"));
        sizePolicy.setHeightForWidth(label_mod_reg_address_3->sizePolicy().hasHeightForWidth());
        label_mod_reg_address_3->setSizePolicy(sizePolicy);
        label_mod_reg_address_3->setMinimumSize(QSize(72, 20));
        label_mod_reg_address_3->setMaximumSize(QSize(72, 20));
        label_mod_reg_address_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_mod_reg_address_3, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, -1, -1);
        label_mod_reg_interpretation_3 = new QLabel(gridFrame_3);
        label_mod_reg_interpretation_3->setObjectName(QStringLiteral("label_mod_reg_interpretation_3"));
        sizePolicy.setHeightForWidth(label_mod_reg_interpretation_3->sizePolicy().hasHeightForWidth());
        label_mod_reg_interpretation_3->setSizePolicy(sizePolicy);
        label_mod_reg_interpretation_3->setMinimumSize(QSize(100, 20));
        label_mod_reg_interpretation_3->setMaximumSize(QSize(100, 20));
        label_mod_reg_interpretation_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_mod_reg_interpretation_3);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 2, 1, 1);

        gridLayout_3->setColumnMinimumWidth(0, 75);
        gridLayout_3->setColumnMinimumWidth(1, 230);
        gridLayout_3->setColumnMinimumWidth(2, 50);
        gridLayout_3->setColumnMinimumWidth(3, 300);

        gridLayout->addWidget(gridFrame_3, 0, 0, 1, 1);

        scrollArea = new QScrollArea(gridFrame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents1 = new QWidget();
        scrollAreaWidgetContents1->setObjectName(QStringLiteral("scrollAreaWidgetContents1"));
        scrollAreaWidgetContents1->setGeometry(QRect(0, 0, 979, 391));
        scrollArea->setWidget(scrollAreaWidgetContents1);
        gridFrame_clear_error->raise();

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        ModeRegisterBrouser_short->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModeRegisterBrouser_short);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ModeRegisterBrouser_short->setMenuBar(menubar);

        retranslateUi(ModeRegisterBrouser_short);

        QMetaObject::connectSlotsByName(ModeRegisterBrouser_short);
    } // setupUi

    void retranslateUi(QMainWindow *ModeRegisterBrouser_short)
    {
        ModeRegisterBrouser_short->setWindowTitle(QApplication::translate("ModeRegisterBrouser_short", "MainWindow", Q_NULLPTR));
        label_reg_inf_bit_16->setText(QApplication::translate("ModeRegisterBrouser_short", "3", Q_NULLPTR));
        label_reg_inf_bit_16->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_22->setText(QApplication::translate("ModeRegisterBrouser_short", "2", Q_NULLPTR));
        label_reg_inf_bit_22->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_23->setText(QApplication::translate("ModeRegisterBrouser_short", "6", Q_NULLPTR));
        label_reg_inf_bit_23->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_17->setText(QApplication::translate("ModeRegisterBrouser_short", "4", Q_NULLPTR));
        label_reg_inf_bit_17->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_21->setText(QApplication::translate("ModeRegisterBrouser_short", "1", Q_NULLPTR));
        label_reg_inf_bit_21->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_18->setText(QApplication::translate("ModeRegisterBrouser_short", "5", Q_NULLPTR));
        label_reg_inf_bit_18->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_20->setText(QApplication::translate("ModeRegisterBrouser_short", "0", Q_NULLPTR));
        label_reg_inf_bit_20->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_reg_inf_bit_19->setText(QApplication::translate("ModeRegisterBrouser_short", "7", Q_NULLPTR));
        label_reg_inf_bit_19->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        pushButton_clear_error->setText(QApplication::translate("ModeRegisterBrouser_short", "CLEAR ERR", Q_NULLPTR));
        pushButton_clear_error->setProperty("PushButtonSeparate_Enabled", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        pushButton_clear_error->setProperty("PushButtonSeparate_EnabledPressed", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        pushButton_clear_error->setProperty("PushButtonSeparate_EnabledPressedHover", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        pushButton_clear_error->setProperty("PushButtonSeparate_EnabledHover", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        pushButton_clear_error->setProperty("PushButtonSeparate_Disabled", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_mode_reg_description_3->setText(QApplication::translate("ModeRegisterBrouser_short", "DESCRIPTION", Q_NULLPTR));
        label_mode_reg_description_3->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_mod_reg_address_3->setText(QApplication::translate("ModeRegisterBrouser_short", "ADDRESS", Q_NULLPTR));
        label_mod_reg_address_3->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
        label_mod_reg_interpretation_3->setText(QApplication::translate("ModeRegisterBrouser_short", "NAME", Q_NULLPTR));
        label_mod_reg_interpretation_3->setProperty("lable_register_brouser_label_head", QVariant(QApplication::translate("ModeRegisterBrouser_short", "true", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class ModeRegisterBrouser_short: public Ui_ModeRegisterBrouser_short {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEREGISTERBROUSER_SHORT_H

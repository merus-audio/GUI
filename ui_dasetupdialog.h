/********************************************************************************
** Form generated from reading UI file 'dasetupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASETUPDIALOG_H
#define UI_DASETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DAsetupDialog
{
public:
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2_DA;
    QRadioButton *I2Sradio;
    QRadioButton *LeftRadio;
    QRadioButton *right16radio;
    QRadioButton *right18radio;
    QRadioButton *right20radio;
    QRadioButton *right24radio;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4_DA;
    QRadioButton *frame16;
    QRadioButton *frame24;
    QRadioButton *frame32;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3_DA;
    QRadioButton *sckpolRisingradio;
    QRadioButton *sckpolFallingRadio;
    QFrame *verticalFrame2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5_DA;
    QRadioButton *wsPolRise;
    QRadioButton *wsPolFall;
    QFrame *verticalFrame3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6_DA;
    QRadioButton *LeftFirst;
    QRadioButton *RightFirst;
    QFrame *verticalFrame_21;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7_DA;
    QRadioButton *msbfirst;
    QRadioButton *lsbfirst;

    void setupUi(QDialog *DAsetupDialog)
    {
        if (DAsetupDialog->objectName().isEmpty())
            DAsetupDialog->setObjectName(QStringLiteral("DAsetupDialog"));
        DAsetupDialog->resize(620, 420);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DAsetupDialog->sizePolicy().hasHeightForWidth());
        DAsetupDialog->setSizePolicy(sizePolicy);
        DAsetupDialog->setMinimumSize(QSize(620, 420));
        DAsetupDialog->setMaximumSize(QSize(620, 420));
        DAsetupDialog->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/mlogo3_resized_300x234.png"), QSize(), QIcon::Normal, QIcon::Off);
        DAsetupDialog->setWindowIcon(icon);
        verticalFrame = new QFrame(DAsetupDialog);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setGeometry(QRect(10, 10, 261, 201));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2_DA = new QLabel(verticalFrame);
        label_2_DA->setObjectName(QStringLiteral("label_2_DA"));
        label_2_DA->setMinimumSize(QSize(0, 20));
        label_2_DA->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_2_DA);

        I2Sradio = new QRadioButton(verticalFrame);
        I2Sradio->setObjectName(QStringLiteral("I2Sradio"));

        verticalLayout->addWidget(I2Sradio);

        LeftRadio = new QRadioButton(verticalFrame);
        LeftRadio->setObjectName(QStringLiteral("LeftRadio"));

        verticalLayout->addWidget(LeftRadio);

        right16radio = new QRadioButton(verticalFrame);
        right16radio->setObjectName(QStringLiteral("right16radio"));

        verticalLayout->addWidget(right16radio);

        right18radio = new QRadioButton(verticalFrame);
        right18radio->setObjectName(QStringLiteral("right18radio"));

        verticalLayout->addWidget(right18radio);

        right20radio = new QRadioButton(verticalFrame);
        right20radio->setObjectName(QStringLiteral("right20radio"));

        verticalLayout->addWidget(right20radio);

        right24radio = new QRadioButton(verticalFrame);
        right24radio->setObjectName(QStringLiteral("right24radio"));

        verticalLayout->addWidget(right24radio);

        verticalFrame_2 = new QFrame(DAsetupDialog);
        verticalFrame_2->setObjectName(QStringLiteral("verticalFrame_2"));
        verticalFrame_2->setGeometry(QRect(290, 10, 321, 121));
        verticalLayout_2 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4_DA = new QLabel(verticalFrame_2);
        label_4_DA->setObjectName(QStringLiteral("label_4_DA"));
        label_4_DA->setMinimumSize(QSize(0, 20));
        label_4_DA->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_4_DA);

        frame16 = new QRadioButton(verticalFrame_2);
        frame16->setObjectName(QStringLiteral("frame16"));

        verticalLayout_2->addWidget(frame16);

        frame24 = new QRadioButton(verticalFrame_2);
        frame24->setObjectName(QStringLiteral("frame24"));

        verticalLayout_2->addWidget(frame24);

        frame32 = new QRadioButton(verticalFrame_2);
        frame32->setObjectName(QStringLiteral("frame32"));

        verticalLayout_2->addWidget(frame32);

        verticalFrame1 = new QFrame(DAsetupDialog);
        verticalFrame1->setObjectName(QStringLiteral("verticalFrame1"));
        verticalFrame1->setGeometry(QRect(10, 230, 261, 81));
        verticalLayout_3 = new QVBoxLayout(verticalFrame1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3_DA = new QLabel(verticalFrame1);
        label_3_DA->setObjectName(QStringLiteral("label_3_DA"));
        label_3_DA->setMinimumSize(QSize(0, 20));
        label_3_DA->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(label_3_DA);

        sckpolRisingradio = new QRadioButton(verticalFrame1);
        sckpolRisingradio->setObjectName(QStringLiteral("sckpolRisingradio"));

        verticalLayout_3->addWidget(sckpolRisingradio);

        sckpolFallingRadio = new QRadioButton(verticalFrame1);
        sckpolFallingRadio->setObjectName(QStringLiteral("sckpolFallingRadio"));

        verticalLayout_3->addWidget(sckpolFallingRadio);

        verticalFrame2 = new QFrame(DAsetupDialog);
        verticalFrame2->setObjectName(QStringLiteral("verticalFrame2"));
        verticalFrame2->setGeometry(QRect(290, 230, 321, 80));
        verticalLayout_4 = new QVBoxLayout(verticalFrame2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5_DA = new QLabel(verticalFrame2);
        label_5_DA->setObjectName(QStringLiteral("label_5_DA"));
        label_5_DA->setMinimumSize(QSize(0, 20));
        label_5_DA->setMaximumSize(QSize(16777215, 20));

        verticalLayout_4->addWidget(label_5_DA);

        wsPolRise = new QRadioButton(verticalFrame2);
        wsPolRise->setObjectName(QStringLiteral("wsPolRise"));

        verticalLayout_4->addWidget(wsPolRise);

        wsPolFall = new QRadioButton(verticalFrame2);
        wsPolFall->setObjectName(QStringLiteral("wsPolFall"));

        verticalLayout_4->addWidget(wsPolFall);

        verticalFrame3 = new QFrame(DAsetupDialog);
        verticalFrame3->setObjectName(QStringLiteral("verticalFrame3"));
        verticalFrame3->setGeometry(QRect(10, 330, 261, 81));
        verticalLayout_5 = new QVBoxLayout(verticalFrame3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6_DA = new QLabel(verticalFrame3);
        label_6_DA->setObjectName(QStringLiteral("label_6_DA"));
        label_6_DA->setMinimumSize(QSize(0, 20));
        label_6_DA->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_6_DA);

        LeftFirst = new QRadioButton(verticalFrame3);
        LeftFirst->setObjectName(QStringLiteral("LeftFirst"));

        verticalLayout_5->addWidget(LeftFirst);

        RightFirst = new QRadioButton(verticalFrame3);
        RightFirst->setObjectName(QStringLiteral("RightFirst"));

        verticalLayout_5->addWidget(RightFirst);

        verticalFrame_21 = new QFrame(DAsetupDialog);
        verticalFrame_21->setObjectName(QStringLiteral("verticalFrame_21"));
        verticalFrame_21->setGeometry(QRect(290, 330, 321, 81));
        verticalLayout_6 = new QVBoxLayout(verticalFrame_21);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_7_DA = new QLabel(verticalFrame_21);
        label_7_DA->setObjectName(QStringLiteral("label_7_DA"));
        label_7_DA->setMinimumSize(QSize(0, 20));
        label_7_DA->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(label_7_DA);

        msbfirst = new QRadioButton(verticalFrame_21);
        msbfirst->setObjectName(QStringLiteral("msbfirst"));

        verticalLayout_6->addWidget(msbfirst);

        lsbfirst = new QRadioButton(verticalFrame_21);
        lsbfirst->setObjectName(QStringLiteral("lsbfirst"));

        verticalLayout_6->addWidget(lsbfirst);


        retranslateUi(DAsetupDialog);

        QMetaObject::connectSlotsByName(DAsetupDialog);
    } // setupUi

    void retranslateUi(QDialog *DAsetupDialog)
    {
        DAsetupDialog->setWindowTitle(QApplication::translate("DAsetupDialog", "I2S setup", Q_NULLPTR));
        DAsetupDialog->setProperty("window_background", QVariant(QApplication::translate("DAsetupDialog", "wind__background", Q_NULLPTR)));
        label_2_DA->setText(QApplication::translate("DAsetupDialog", "I2S FORMAT", Q_NULLPTR));
        label_2_DA->setProperty("lable_radio_butto_header", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        I2Sradio->setText(QApplication::translate("DAsetupDialog", "I2S", Q_NULLPTR));
        I2Sradio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        I2Sradio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        I2Sradio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        LeftRadio->setText(QApplication::translate("DAsetupDialog", "Left justified", Q_NULLPTR));
        LeftRadio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        LeftRadio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        LeftRadio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        right16radio->setText(QApplication::translate("DAsetupDialog", "Right Justified 16", Q_NULLPTR));
        right16radio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        right16radio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        right16radio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        right18radio->setText(QApplication::translate("DAsetupDialog", "Right justified 18", Q_NULLPTR));
        right18radio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        right18radio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        right18radio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        right20radio->setText(QApplication::translate("DAsetupDialog", "Right justified 20", Q_NULLPTR));
        right20radio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        right20radio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        right20radio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        right24radio->setText(QApplication::translate("DAsetupDialog", "Right justified 24", Q_NULLPTR));
        right24radio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        right24radio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        right24radio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        label_4_DA->setText(QApplication::translate("DAsetupDialog", "I2S FRAME SIZE", Q_NULLPTR));
        label_4_DA->setProperty("lable_radio_butto_header", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        frame16->setText(QApplication::translate("DAsetupDialog", "2 x 16 bit", Q_NULLPTR));
        frame16->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        frame16->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        frame16->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        frame24->setText(QApplication::translate("DAsetupDialog", "2 x 24 bit", Q_NULLPTR));
        frame24->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        frame24->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        frame24->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        frame32->setText(QApplication::translate("DAsetupDialog", "2 x 32 bit", Q_NULLPTR));
        frame32->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        frame32->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        frame32->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        label_3_DA->setText(QApplication::translate("DAsetupDialog", "I2S BIT CLOCK (SCK) POLARITY", Q_NULLPTR));
        label_3_DA->setProperty("lable_radio_butto_header", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        sckpolRisingradio->setText(QApplication::translate("DAsetupDialog", "Rising", Q_NULLPTR));
        sckpolRisingradio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        sckpolRisingradio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        sckpolRisingradio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        sckpolFallingRadio->setText(QApplication::translate("DAsetupDialog", "Falling", Q_NULLPTR));
        sckpolFallingRadio->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        sckpolFallingRadio->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        sckpolFallingRadio->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        label_5_DA->setText(QApplication::translate("DAsetupDialog", "I2S WORD SELECTED (WS) POLARITY", Q_NULLPTR));
        label_5_DA->setProperty("lable_radio_butto_header", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        wsPolRise->setText(QApplication::translate("DAsetupDialog", "Low period first", Q_NULLPTR));
        wsPolRise->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        wsPolRise->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        wsPolRise->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        wsPolFall->setText(QApplication::translate("DAsetupDialog", "High period first", Q_NULLPTR));
        wsPolFall->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        wsPolFall->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        wsPolFall->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        label_6_DA->setText(QApplication::translate("DAsetupDialog", "I2S LEF/RIGHT DATA ORDER", Q_NULLPTR));
        label_6_DA->setProperty("lable_radio_butto_header", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        LeftFirst->setText(QApplication::translate("DAsetupDialog", "Left first", Q_NULLPTR));
        LeftFirst->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        LeftFirst->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        LeftFirst->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        RightFirst->setText(QApplication::translate("DAsetupDialog", "Right First", Q_NULLPTR));
        RightFirst->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        RightFirst->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        RightFirst->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        label_7_DA->setText(QApplication::translate("DAsetupDialog", "I2S WORD BIT ORDER ", Q_NULLPTR));
        label_7_DA->setProperty("lable_radio_butto_header", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        msbfirst->setText(QApplication::translate("DAsetupDialog", "MSB first", Q_NULLPTR));
        msbfirst->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        msbfirst->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        msbfirst->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
        lsbfirst->setText(QApplication::translate("DAsetupDialog", "LSB first", Q_NULLPTR));
        lsbfirst->setProperty("simpl_radio_but", QVariant(QApplication::translate("DAsetupDialog", "set", Q_NULLPTR)));
        lsbfirst->setProperty("radio_but_I2S_unchecked", QVariant(QApplication::translate("DAsetupDialog", "unchecked", Q_NULLPTR)));
        lsbfirst->setProperty("radio_but_I2S_checked", QVariant(QApplication::translate("DAsetupDialog", "checked", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class DAsetupDialog: public Ui_DAsetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASETUPDIALOG_H

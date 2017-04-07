/********************************************************************************
** Form generated from reading UI file 'devicecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICECONTROL_H
#define UI_DEVICECONTROL_H

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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwidjetpainter.h"

QT_BEGIN_NAMESPACE

class Ui_DeviceControl
{
public:
    QAction *actionSave_settings;
    QAction *actionClose;
    QAction *actionMA12070x_Datasheet;
    QAction *actionEVK_User_Manual;
    QAction *actionReconnect;
    QAction *actionRegister_Browser;
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionDevice_Info;
    QAction *actionRegister_Monitor;
    QAction *actionDigital_Audio_Processor;
    QAction *actionI2S_Setup;
    QAction *actionI2S_Setup_2;
    QAction *actionError_Vector_Monitor;
    QAction *actionAbout_2;
    QAction *actionAbout_3;
    QWidget *centralWidget;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_2;
    QWidjetPainter *progressBar_ch0;
    QWidjetPainter *progressBar_ch1;
    QVBoxLayout *verticalLayout;
    QFrame *verticalFrame_PM_control;
    QVBoxLayout *verticalLayout_10;
    QLabel *label;
    QGridLayout *gridLayout_5;
    QLabel *frame_ch0_pm1;
    QLabel *frame_ch0_pm3;
    QLabel *frame_ch0_pm2;
    QLabel *frame_ch1_pm1;
    QLabel *frame_ch1_pm3;
    QLabel *label_PM_Ch1;
    QLabel *frame_ch1_pm2;
    QFrame *frame_7;
    QFrame *line_17;
    QFrame *line_16;
    QFrame *line_18;
    QFrame *line_19;
    QLabel *label__PM_Ch0;
    QFrame *line_20;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *radioButton_pmp1;
    QPushButton *radioButton_pmp2;
    QPushButton *radioButton_pmp3;
    QPushButton *radioButton_pmp4;
    QPushButton *radioButton_pmp5;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *verticalFrame_Program_Soft_Cliping;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButtonSoftClipping;
    QFrame *verticalFrame_Program_control;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButtonRec;
    QPushButton *pushButtonProgram;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonSave;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *RadioButtonDeviceStatus;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *ActionRegister;
    QMenu *menuI2S_Setup;
    QMenu *menuDigital_Audio_Processor;
    QMenu *menuHelp;

    void setupUi(QMainWindow *DeviceControl)
    {
        if (DeviceControl->objectName().isEmpty())
            DeviceControl->setObjectName(QStringLiteral("DeviceControl"));
        DeviceControl->resize(845, 495);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeviceControl->sizePolicy().hasHeightForWidth());
        DeviceControl->setSizePolicy(sizePolicy);
        DeviceControl->setMinimumSize(QSize(845, 495));
        DeviceControl->setMaximumSize(QSize(845, 495));
        QIcon icon;
        icon.addFile(QStringLiteral(":/mlogo3_resized_300x234.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeviceControl->setWindowIcon(icon);
        DeviceControl->setStyleSheet(QStringLiteral(""));
        DeviceControl->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        actionSave_settings = new QAction(DeviceControl);
        actionSave_settings->setObjectName(QStringLiteral("actionSave_settings"));
        actionClose = new QAction(DeviceControl);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(11);
        actionClose->setFont(font);
        actionMA12070x_Datasheet = new QAction(DeviceControl);
        actionMA12070x_Datasheet->setObjectName(QStringLiteral("actionMA12070x_Datasheet"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(12);
        actionMA12070x_Datasheet->setFont(font1);
        actionEVK_User_Manual = new QAction(DeviceControl);
        actionEVK_User_Manual->setObjectName(QStringLiteral("actionEVK_User_Manual"));
        actionEVK_User_Manual->setFont(font);
        actionReconnect = new QAction(DeviceControl);
        actionReconnect->setObjectName(QStringLiteral("actionReconnect"));
        actionRegister_Browser = new QAction(DeviceControl);
        actionRegister_Browser->setObjectName(QStringLiteral("actionRegister_Browser"));
        QFont font2;
        font2.setPointSize(12);
        actionRegister_Browser->setFont(font2);
        actionAbout = new QAction(DeviceControl);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QFont font3;
        font3.setPointSize(11);
        actionAbout->setFont(font3);
        actionHelp = new QAction(DeviceControl);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionHelp->setFont(font3);
        actionDevice_Info = new QAction(DeviceControl);
        actionDevice_Info->setObjectName(QStringLiteral("actionDevice_Info"));
        actionRegister_Monitor = new QAction(DeviceControl);
        actionRegister_Monitor->setObjectName(QStringLiteral("actionRegister_Monitor"));
        actionRegister_Monitor->setFont(font);
        actionDigital_Audio_Processor = new QAction(DeviceControl);
        actionDigital_Audio_Processor->setObjectName(QStringLiteral("actionDigital_Audio_Processor"));
        actionI2S_Setup = new QAction(DeviceControl);
        actionI2S_Setup->setObjectName(QStringLiteral("actionI2S_Setup"));
        actionI2S_Setup_2 = new QAction(DeviceControl);
        actionI2S_Setup_2->setObjectName(QStringLiteral("actionI2S_Setup_2"));
        actionError_Vector_Monitor = new QAction(DeviceControl);
        actionError_Vector_Monitor->setObjectName(QStringLiteral("actionError_Vector_Monitor"));
        actionAbout_2 = new QAction(DeviceControl);
        actionAbout_2->setObjectName(QStringLiteral("actionAbout_2"));
        actionAbout_3 = new QAction(DeviceControl);
        actionAbout_3->setObjectName(QStringLiteral("actionAbout_3"));
        centralWidget = new QWidget(DeviceControl);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridFrame_2 = new QFrame(centralWidget);
        gridFrame_2->setObjectName(QStringLiteral("gridFrame_2"));
        gridFrame_2->setGeometry(QRect(10, 0, 771, 421));
        gridLayout_2 = new QGridLayout(gridFrame_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        progressBar_ch0 = new QWidjetPainter(gridFrame_2);
        progressBar_ch0->setObjectName(QStringLiteral("progressBar_ch0"));

        gridLayout_2->addWidget(progressBar_ch0, 0, 0, 1, 1);

        progressBar_ch1 = new QWidjetPainter(gridFrame_2);
        progressBar_ch1->setObjectName(QStringLiteral("progressBar_ch1"));

        gridLayout_2->addWidget(progressBar_ch1, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(17, -1, 23, -1);
        verticalFrame_PM_control = new QFrame(gridFrame_2);
        verticalFrame_PM_control->setObjectName(QStringLiteral("verticalFrame_PM_control"));
        verticalFrame_PM_control->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout_10 = new QVBoxLayout(verticalFrame_PM_control);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 8, 0, 0);
        label = new QLabel(verticalFrame_PM_control);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(9, -1, 9, 20);
        frame_ch0_pm1 = new QLabel(verticalFrame_PM_control);
        frame_ch0_pm1->setObjectName(QStringLiteral("frame_ch0_pm1"));
        QFont font5;
        font5.setFamily(QStringLiteral("Segoe UI"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        frame_ch0_pm1->setFont(font5);
        frame_ch0_pm1->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_5->addWidget(frame_ch0_pm1, 0, 2, 1, 1);

        frame_ch0_pm3 = new QLabel(verticalFrame_PM_control);
        frame_ch0_pm3->setObjectName(QStringLiteral("frame_ch0_pm3"));
        frame_ch0_pm3->setFont(font5);
        frame_ch0_pm3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_5->addWidget(frame_ch0_pm3, 0, 4, 1, 1);

        frame_ch0_pm2 = new QLabel(verticalFrame_PM_control);
        frame_ch0_pm2->setObjectName(QStringLiteral("frame_ch0_pm2"));
        frame_ch0_pm2->setFont(font5);
        frame_ch0_pm2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_5->addWidget(frame_ch0_pm2, 0, 3, 1, 1);

        frame_ch1_pm1 = new QLabel(verticalFrame_PM_control);
        frame_ch1_pm1->setObjectName(QStringLiteral("frame_ch1_pm1"));
        frame_ch1_pm1->setFont(font5);
        frame_ch1_pm1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_5->addWidget(frame_ch1_pm1, 2, 2, 1, 1);

        frame_ch1_pm3 = new QLabel(verticalFrame_PM_control);
        frame_ch1_pm3->setObjectName(QStringLiteral("frame_ch1_pm3"));
        frame_ch1_pm3->setFont(font5);
        frame_ch1_pm3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_5->addWidget(frame_ch1_pm3, 2, 4, 1, 1);

        label_PM_Ch1 = new QLabel(verticalFrame_PM_control);
        label_PM_Ch1->setObjectName(QStringLiteral("label_PM_Ch1"));
        label_PM_Ch1->setFont(font5);
        label_PM_Ch1->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_5->addWidget(label_PM_Ch1, 2, 0, 1, 1);

        frame_ch1_pm2 = new QLabel(verticalFrame_PM_control);
        frame_ch1_pm2->setObjectName(QStringLiteral("frame_ch1_pm2"));
        frame_ch1_pm2->setFont(font5);
        frame_ch1_pm2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_5->addWidget(frame_ch1_pm2, 2, 3, 1, 1);

        frame_7 = new QFrame(verticalFrame_PM_control);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout_5->addWidget(frame_7, 2, 1, 1, 1);

        line_17 = new QFrame(verticalFrame_PM_control);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_17, 1, 1, 1, 1);

        line_16 = new QFrame(verticalFrame_PM_control);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_16, 1, 0, 1, 1);

        line_18 = new QFrame(verticalFrame_PM_control);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_18, 1, 2, 1, 1);

        line_19 = new QFrame(verticalFrame_PM_control);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_19, 1, 3, 1, 1);

        label__PM_Ch0 = new QLabel(verticalFrame_PM_control);
        label__PM_Ch0->setObjectName(QStringLiteral("label__PM_Ch0"));
        label__PM_Ch0->setFont(font5);
        label__PM_Ch0->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_5->addWidget(label__PM_Ch0, 0, 0, 1, 1);

        line_20 = new QFrame(verticalFrame_PM_control);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_20, 1, 4, 1, 1);

        gridLayout_5->setRowStretch(0, 10);
        gridLayout_5->setColumnStretch(0, 2);
        gridLayout_5->setColumnStretch(1, 1);
        gridLayout_5->setColumnStretch(2, 2);
        gridLayout_5->setColumnStretch(3, 2);
        gridLayout_5->setColumnStretch(4, 2);

        verticalLayout_10->addLayout(gridLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_6->setContentsMargins(-1, 5, -1, 0);
        radioButton_pmp1 = new QPushButton(verticalFrame_PM_control);
        radioButton_pmp1->setObjectName(QStringLiteral("radioButton_pmp1"));
        sizePolicy.setHeightForWidth(radioButton_pmp1->sizePolicy().hasHeightForWidth());
        radioButton_pmp1->setSizePolicy(sizePolicy);
        radioButton_pmp1->setMinimumSize(QSize(15, 35));
        radioButton_pmp1->setMaximumSize(QSize(10000, 40));
        radioButton_pmp1->setFont(font5);
        radioButton_pmp1->setCheckable(true);
        radioButton_pmp1->setChecked(true);

        horizontalLayout_6->addWidget(radioButton_pmp1);

        radioButton_pmp2 = new QPushButton(verticalFrame_PM_control);
        radioButton_pmp2->setObjectName(QStringLiteral("radioButton_pmp2"));
        sizePolicy.setHeightForWidth(radioButton_pmp2->sizePolicy().hasHeightForWidth());
        radioButton_pmp2->setSizePolicy(sizePolicy);
        radioButton_pmp2->setMinimumSize(QSize(15, 35));
        radioButton_pmp2->setMaximumSize(QSize(10000, 40));
        radioButton_pmp2->setFont(font5);
        radioButton_pmp2->setCheckable(true);
        radioButton_pmp2->setChecked(false);

        horizontalLayout_6->addWidget(radioButton_pmp2);

        radioButton_pmp3 = new QPushButton(verticalFrame_PM_control);
        radioButton_pmp3->setObjectName(QStringLiteral("radioButton_pmp3"));
        sizePolicy.setHeightForWidth(radioButton_pmp3->sizePolicy().hasHeightForWidth());
        radioButton_pmp3->setSizePolicy(sizePolicy);
        radioButton_pmp3->setMinimumSize(QSize(15, 35));
        radioButton_pmp3->setMaximumSize(QSize(10000, 40));
        radioButton_pmp3->setFont(font5);
        radioButton_pmp3->setCheckable(true);
        radioButton_pmp3->setChecked(false);

        horizontalLayout_6->addWidget(radioButton_pmp3);

        radioButton_pmp4 = new QPushButton(verticalFrame_PM_control);
        radioButton_pmp4->setObjectName(QStringLiteral("radioButton_pmp4"));
        sizePolicy.setHeightForWidth(radioButton_pmp4->sizePolicy().hasHeightForWidth());
        radioButton_pmp4->setSizePolicy(sizePolicy);
        radioButton_pmp4->setMinimumSize(QSize(15, 35));
        radioButton_pmp4->setMaximumSize(QSize(10000, 40));
        radioButton_pmp4->setFont(font5);
        radioButton_pmp4->setCheckable(true);
        radioButton_pmp4->setChecked(false);

        horizontalLayout_6->addWidget(radioButton_pmp4);

        radioButton_pmp5 = new QPushButton(verticalFrame_PM_control);
        radioButton_pmp5->setObjectName(QStringLiteral("radioButton_pmp5"));
        sizePolicy.setHeightForWidth(radioButton_pmp5->sizePolicy().hasHeightForWidth());
        radioButton_pmp5->setSizePolicy(sizePolicy);
        radioButton_pmp5->setMinimumSize(QSize(15, 35));
        radioButton_pmp5->setMaximumSize(QSize(10000, 35));
        radioButton_pmp5->setFont(font5);
        radioButton_pmp5->setCheckable(true);
        radioButton_pmp5->setChecked(false);

        horizontalLayout_6->addWidget(radioButton_pmp5);


        verticalLayout_10->addLayout(horizontalLayout_6);

        label_2 = new QLabel(verticalFrame_PM_control);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font6;
        font6.setFamily(QStringLiteral("Segoe UI"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_2->setFont(font6);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_2);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 2);
        verticalLayout_10->setStretch(2, 1);
        verticalLayout_10->setStretch(3, 1);

        verticalLayout->addWidget(verticalFrame_PM_control);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(17, 0, 23, 0);
        verticalFrame_Program_Soft_Cliping = new QFrame(gridFrame_2);
        verticalFrame_Program_Soft_Cliping->setObjectName(QStringLiteral("verticalFrame_Program_Soft_Cliping"));
        horizontalLayout_3 = new QHBoxLayout(verticalFrame_Program_Soft_Cliping);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 2, 10, 0);
        label_3 = new QLabel(verticalFrame_Program_Soft_Cliping);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font7;
        font7.setFamily(QStringLiteral("Segoe UI"));
        font7.setPointSize(14);
        label_3->setFont(font7);

        horizontalLayout_3->addWidget(label_3);

        pushButtonSoftClipping = new QPushButton(verticalFrame_Program_Soft_Cliping);
        pushButtonSoftClipping->setObjectName(QStringLiteral("pushButtonSoftClipping"));
        sizePolicy.setHeightForWidth(pushButtonSoftClipping->sizePolicy().hasHeightForWidth());
        pushButtonSoftClipping->setSizePolicy(sizePolicy);
        pushButtonSoftClipping->setMinimumSize(QSize(20, 35));
        pushButtonSoftClipping->setMaximumSize(QSize(1000, 35));

        horizontalLayout_3->addWidget(pushButtonSoftClipping);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addWidget(verticalFrame_Program_Soft_Cliping);

        verticalFrame_Program_control = new QFrame(gridFrame_2);
        verticalFrame_Program_control->setObjectName(QStringLiteral("verticalFrame_Program_control"));
        verticalLayout_14 = new QVBoxLayout(verticalFrame_Program_control);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(1, 0, 1, 0);
        label_4 = new QLabel(verticalFrame_Program_control);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font8;
        font8.setFamily(QStringLiteral("Segoe UI"));
        font8.setPointSize(14);
        font8.setBold(false);
        font8.setWeight(50);
        label_4->setFont(font8);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_9->setContentsMargins(-1, 28, -1, 0);
        pushButtonRec = new QPushButton(verticalFrame_Program_control);
        pushButtonRec->setObjectName(QStringLiteral("pushButtonRec"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonRec->sizePolicy().hasHeightForWidth());
        pushButtonRec->setSizePolicy(sizePolicy1);
        pushButtonRec->setMinimumSize(QSize(20, 35));
        pushButtonRec->setMaximumSize(QSize(1000, 35));
        QFont font9;
        font9.setFamily(QStringLiteral("Segoe UI"));
        font9.setPointSize(10);
        pushButtonRec->setFont(font9);

        horizontalLayout_9->addWidget(pushButtonRec);

        pushButtonProgram = new QPushButton(verticalFrame_Program_control);
        pushButtonProgram->setObjectName(QStringLiteral("pushButtonProgram"));
        sizePolicy.setHeightForWidth(pushButtonProgram->sizePolicy().hasHeightForWidth());
        pushButtonProgram->setSizePolicy(sizePolicy);
        pushButtonProgram->setMinimumSize(QSize(20, 35));
        pushButtonProgram->setMaximumSize(QSize(10000, 35));
        pushButtonProgram->setFont(font9);

        horizontalLayout_9->addWidget(pushButtonProgram);

        pushButtonLoad = new QPushButton(verticalFrame_Program_control);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));
        sizePolicy.setHeightForWidth(pushButtonLoad->sizePolicy().hasHeightForWidth());
        pushButtonLoad->setSizePolicy(sizePolicy);
        pushButtonLoad->setMinimumSize(QSize(20, 35));
        pushButtonLoad->setMaximumSize(QSize(10000, 35));
        pushButtonLoad->setFont(font9);

        horizontalLayout_9->addWidget(pushButtonLoad);

        pushButtonSave = new QPushButton(verticalFrame_Program_control);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        sizePolicy.setHeightForWidth(pushButtonSave->sizePolicy().hasHeightForWidth());
        pushButtonSave->setSizePolicy(sizePolicy);
        pushButtonSave->setMinimumSize(QSize(20, 35));
        pushButtonSave->setMaximumSize(QSize(10000, 35));
        pushButtonSave->setFont(font9);

        horizontalLayout_9->addWidget(pushButtonSave);

        horizontalLayout_9->setStretch(0, 6);
        horizontalLayout_9->setStretch(1, 8);
        horizontalLayout_9->setStretch(2, 8);
        horizontalLayout_9->setStretch(3, 8);

        verticalLayout_14->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_8->setContentsMargins(25, 0, -1, -1);
        RadioButtonDeviceStatus = new QRadioButton(verticalFrame_Program_control);
        RadioButtonDeviceStatus->setObjectName(QStringLiteral("RadioButtonDeviceStatus"));
        QFont font10;
        font10.setFamily(QStringLiteral("Segoe UI"));
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        RadioButtonDeviceStatus->setFont(font10);

        horizontalLayout_8->addWidget(RadioButtonDeviceStatus);

        horizontalLayout_8->setStretch(0, 8);

        verticalLayout_14->addLayout(horizontalLayout_8);

        verticalLayout_14->setStretch(0, 1);
        verticalLayout_14->setStretch(1, 2);
        verticalLayout_14->setStretch(2, 1);

        verticalLayout_2->addWidget(verticalFrame_Program_control);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        DeviceControl->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DeviceControl);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 845, 27));
        menuBar->setFont(font2);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        ActionRegister = new QMenu(menuBar);
        ActionRegister->setObjectName(QStringLiteral("ActionRegister"));
        menuI2S_Setup = new QMenu(menuBar);
        menuI2S_Setup->setObjectName(QStringLiteral("menuI2S_Setup"));
        menuDigital_Audio_Processor = new QMenu(menuBar);
        menuDigital_Audio_Processor->setObjectName(QStringLiteral("menuDigital_Audio_Processor"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        DeviceControl->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(ActionRegister->menuAction());
        menuBar->addAction(menuDigital_Audio_Processor->menuAction());
        menuBar->addAction(menuI2S_Setup->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionClose);
        ActionRegister->addAction(actionRegister_Browser);
        ActionRegister->addAction(actionError_Vector_Monitor);
        menuI2S_Setup->addAction(actionI2S_Setup_2);
        menuDigital_Audio_Processor->addAction(actionDigital_Audio_Processor);
        menuHelp->addAction(actionAbout_2);

        retranslateUi(DeviceControl);

        QMetaObject::connectSlotsByName(DeviceControl);
    } // setupUi

    void retranslateUi(QMainWindow *DeviceControl)
    {
        DeviceControl->setWindowTitle(QApplication::translate("DeviceControl", "DeviceControl", Q_NULLPTR));
        actionSave_settings->setText(QApplication::translate("DeviceControl", "Save settings", Q_NULLPTR));
        actionClose->setText(QApplication::translate("DeviceControl", "Close GUI", Q_NULLPTR));
        actionMA12070x_Datasheet->setText(QApplication::translate("DeviceControl", "MA12070x Datasheet", Q_NULLPTR));
        actionEVK_User_Manual->setText(QApplication::translate("DeviceControl", "EVK User Manual", Q_NULLPTR));
        actionReconnect->setText(QApplication::translate("DeviceControl", "Reconnect", Q_NULLPTR));
        actionRegister_Browser->setText(QApplication::translate("DeviceControl", "Register Browser", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("DeviceControl", "About", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("DeviceControl", "Help", Q_NULLPTR));
        actionDevice_Info->setText(QApplication::translate("DeviceControl", "Device Info", Q_NULLPTR));
        actionRegister_Monitor->setText(QApplication::translate("DeviceControl", "Debug Monitor", Q_NULLPTR));
        actionDigital_Audio_Processor->setText(QApplication::translate("DeviceControl", "Digital Audio Processor", Q_NULLPTR));
        actionI2S_Setup->setText(QApplication::translate("DeviceControl", "I2S Setup", Q_NULLPTR));
        actionI2S_Setup_2->setText(QApplication::translate("DeviceControl", "I2S Setup", Q_NULLPTR));
        actionError_Vector_Monitor->setText(QApplication::translate("DeviceControl", "Error Vector Monitor", Q_NULLPTR));
        actionAbout_2->setText(QApplication::translate("DeviceControl", "About", Q_NULLPTR));
        actionAbout_3->setText(QApplication::translate("DeviceControl", "About_2", Q_NULLPTR));
        label->setText(QApplication::translate("DeviceControl", "POWER MODE MONITOR", Q_NULLPTR));
        label->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        frame_ch0_pm1->setText(QApplication::translate("DeviceControl", "PM1", Q_NULLPTR));
        frame_ch0_pm1->setProperty("color_indication_on", QVariant(QApplication::translate("DeviceControl", "indication_on", Q_NULLPTR)));
        frame_ch0_pm1->setProperty("color_indication_off", QVariant(QApplication::translate("DeviceControl", "indication_off", Q_NULLPTR)));
        frame_ch0_pm3->setText(QApplication::translate("DeviceControl", "PM3", Q_NULLPTR));
        frame_ch0_pm3->setProperty("color_indication_on", QVariant(QApplication::translate("DeviceControl", "indication_on", Q_NULLPTR)));
        frame_ch0_pm3->setProperty("color_indication_off", QVariant(QApplication::translate("DeviceControl", "indication_off", Q_NULLPTR)));
        frame_ch0_pm2->setText(QApplication::translate("DeviceControl", "PM2", Q_NULLPTR));
        frame_ch0_pm2->setProperty("color_indication_on", QVariant(QApplication::translate("DeviceControl", "indication_on", Q_NULLPTR)));
        frame_ch0_pm2->setProperty("color_indication_off", QVariant(QApplication::translate("DeviceControl", "indication_off", Q_NULLPTR)));
        frame_ch1_pm1->setText(QApplication::translate("DeviceControl", "PM1", Q_NULLPTR));
        frame_ch1_pm1->setProperty("color_indication_on", QVariant(QApplication::translate("DeviceControl", "indication_on", Q_NULLPTR)));
        frame_ch1_pm1->setProperty("color_indication_off", QVariant(QApplication::translate("DeviceControl", "indication_off", Q_NULLPTR)));
        frame_ch1_pm3->setText(QApplication::translate("DeviceControl", "PM3", Q_NULLPTR));
        frame_ch1_pm3->setProperty("color_indication_on", QVariant(QApplication::translate("DeviceControl", "indication_on", Q_NULLPTR)));
        frame_ch1_pm3->setProperty("color_indication_off", QVariant(QApplication::translate("DeviceControl", "indication_off", Q_NULLPTR)));
        label_PM_Ch1->setText(QApplication::translate("DeviceControl", "CH1:", Q_NULLPTR));
        frame_ch1_pm2->setText(QApplication::translate("DeviceControl", "PM2", Q_NULLPTR));
        frame_ch1_pm2->setProperty("color_indication_on", QVariant(QApplication::translate("DeviceControl", "indication_on", Q_NULLPTR)));
        frame_ch1_pm2->setProperty("color_indication_off", QVariant(QApplication::translate("DeviceControl", "indication_off", Q_NULLPTR)));
        label__PM_Ch0->setText(QApplication::translate("DeviceControl", "CHO:", Q_NULLPTR));
        radioButton_pmp1->setText(QApplication::translate("DeviceControl", "0", Q_NULLPTR));
        radioButton_pmp1->setProperty("PushButtonLeft", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp1->setProperty("PushButtonLeft_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp1->setProperty("PushButtonLeft_PressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp1->setProperty("PushButtonLeft_Checked", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp1->setProperty("PushButtonLeft_CheckedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp2->setText(QApplication::translate("DeviceControl", "1", Q_NULLPTR));
        radioButton_pmp2->setProperty("PushButtonCentral", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp2->setProperty("PushButtonCentral_Checked", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp2->setProperty("PushButtonCentral_CheckedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp2->setProperty("PushButtonCentral_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp2->setProperty("PushButtonCentral_PressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp3->setText(QApplication::translate("DeviceControl", "2", Q_NULLPTR));
        radioButton_pmp3->setProperty("PushButtonCentral", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp3->setProperty("PushButtonCentral_Checked", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp3->setProperty("PushButtonCentral_CheckedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp3->setProperty("PushButtonCentral_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp3->setProperty("PushButtonCentral_PressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp4->setText(QApplication::translate("DeviceControl", "3", Q_NULLPTR));
        radioButton_pmp4->setProperty("PushButtonCentral", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp4->setProperty("PushButtonCentral_Checked", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp4->setProperty("PushButtonCentral_CheckedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp4->setProperty("PushButtonCentral_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp4->setProperty("PushButtonCentral_PressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp5->setText(QApplication::translate("DeviceControl", "4", Q_NULLPTR));
        radioButton_pmp5->setProperty("PushButtonRifht", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp5->setProperty("PushButtonRifht_Checked", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp5->setProperty("PushButtonRifht_CheckedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp5->setProperty("PushButtonRifht_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        radioButton_pmp5->setProperty("PushButtonRight_Pressed", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        label_2->setText(QApplication::translate("DeviceControl", "POWER MODE PROFILE SELECTION", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeviceControl", "SOFT CLIPPING", Q_NULLPTR));
        label_3->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSoftClipping->setText(QApplication::translate("DeviceControl", "ON", Q_NULLPTR));
        pushButtonSoftClipping->setProperty("PushButtonSeparate_Enabled", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSoftClipping->setProperty("PushButtonSeparate_EnabledPressed", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSoftClipping->setProperty("PushButtonSeparate_EnabledPressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSoftClipping->setProperty("PushButtonSeparate_EnabledHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSoftClipping->setProperty("PushButtonSeparate_Disabled", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        label_4->setText(QApplication::translate("DeviceControl", "DEVICE PROGRAMING", Q_NULLPTR));
        label_4->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonRec->setText(QString());
        pushButtonProgram->setText(QApplication::translate("DeviceControl", "PROGRAM", Q_NULLPTR));
        pushButtonProgram->setProperty("PushButtonCentral", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonProgram->setProperty("PushButtonCentral_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonProgram->setProperty("PushButtonCentral_PressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonProgram->setProperty("PushButtonCentral_Disabled", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonLoad->setText(QApplication::translate("DeviceControl", "LOAD", Q_NULLPTR));
        pushButtonLoad->setProperty("PushButtonCentral", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonLoad->setProperty("PushButtonCentral_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonLoad->setProperty("PushButtonCentral_PressedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSave->setText(QApplication::translate("DeviceControl", "SAVE", Q_NULLPTR));
        pushButtonSave->setProperty("PushButtonRifht", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSave->setProperty("PushButtonRifht_Checked", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSave->setProperty("PushButtonRifht_CheckedHover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSave->setProperty("PushButtonRifht_Hover", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        pushButtonSave->setProperty("PushButtonRight_Pressed", QVariant(QApplication::translate("DeviceControl", "true", Q_NULLPTR)));
        RadioButtonDeviceStatus->setText(QApplication::translate("DeviceControl", " ID: *init*  -  \"XXX\"", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("DeviceControl", "File", Q_NULLPTR));
        ActionRegister->setTitle(QApplication::translate("DeviceControl", "Device", Q_NULLPTR));
        menuI2S_Setup->setTitle(QApplication::translate("DeviceControl", "I2S Setup", Q_NULLPTR));
        menuDigital_Audio_Processor->setTitle(QApplication::translate("DeviceControl", "Digital Audio Processor", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("DeviceControl", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeviceControl: public Ui_DeviceControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICECONTROL_H

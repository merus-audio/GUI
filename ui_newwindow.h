/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <quser_dial.h>
#include "qpushbutton_user.h"
#include "qslider_user.h"

QT_BEGIN_NAMESPACE

class Ui_newWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QFrame *verticalFrame_scroll_contro_left;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout;
    QSlider_USER *ch0vol;
    QVBoxLayout *verticalLayout_17;
    QFrame *line_6;
    QFrame *frame_8;
    QSlider_USER *ch1vol;
    QVBoxLayout *verticalLayout_18;
    QFrame *line_7;
    QFrame *frame_9;
    QSlider_USER *ch2vol;
    QVBoxLayout *verticalLayout_16;
    QFrame *line_5;
    QFrame *frame_7;
    QSlider_USER *ch3vol;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ch0volLabel;
    QLabel *ch1volLabel;
    QLabel *ch2volLabel;
    QLabel *ch3volLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *ch0volTotLabel;
    QLabel *ch1volTotLabel;
    QLabel *ch2volTotLabel;
    QLabel *ch3volTotLabel;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QFrame *verticalFrame_state_Clipping_Ocured;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_18;
    QGridLayout *gridLayout;
    QLabel *clippingCH3;
    QLabel *clippingCH2;
    QLabel *clippingCH1;
    QLabel *clippingCH0;
    QPushBotton_User *pushButton_Mute;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_11;
    QFrame *frame_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *atkFast;
    QRadioButton *atkNormal;
    QRadioButton *atkSlow;
    quser_dial *quser_dial_swith_left;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_13;
    QLabel *label;
    QLabel *label_19;
    QSlider_USER *mrvol;
    QLabel *mrvolLabel;
    QVBoxLayout *verticalLayout_8;
    QFrame *verticalFrame_State_Limitr_active;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_17;
    QGridLayout *gridLayout_2;
    QLabel *limiterActiveCH1;
    QLabel *limiterActiveCH0;
    QLabel *limiterActiveCH2;
    QLabel *limiterActiveCH3;
    QPushBotton_User *pushButton_Limiter;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_12;
    quser_dial *quser_dial_swith_right;
    QFrame *frame_5;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *decFast;
    QRadioButton *decNormal;
    QRadioButton *decSlow;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_9;
    QPushBotton_User *pushButton_Audio_Processor_enable;
    QFrame *verticalFrame_scroll_contro_right;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_2;
    QSlider_USER *ch0thr;
    QVBoxLayout *verticalLayout_19;
    QFrame *line_8;
    QFrame *frame_10;
    QSlider_USER *ch1thr;
    QVBoxLayout *verticalLayout_20;
    QFrame *line_9;
    QFrame *frame_11;
    QSlider_USER *ch2thr;
    QVBoxLayout *verticalLayout_21;
    QFrame *line_10;
    QFrame *frame_12;
    QSlider_USER *ch3thr;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ch0thrLabel;
    QLabel *ch1thrLabel;
    QLabel *ch2thrLabel;
    QLabel *ch3thrLabel;
    QFrame *frame;

    void setupUi(QMainWindow *newWindow)
    {
        if (newWindow->objectName().isEmpty())
            newWindow->setObjectName(QStringLiteral("newWindow"));
        newWindow->resize(1070, 445);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newWindow->sizePolicy().hasHeightForWidth());
        newWindow->setSizePolicy(sizePolicy);
        newWindow->setMinimumSize(QSize(1070, 445));
        newWindow->setMaximumSize(QSize(1070, 445));
        newWindow->setFocusPolicy(Qt::WheelFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/mlogo3_resized_300x234.png"), QSize(), QIcon::Normal, QIcon::Off);
        newWindow->setWindowIcon(icon);
        centralwidget = new QWidget(newWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 20, 1031, 411));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalFrame_scroll_contro_left = new QFrame(horizontalLayoutWidget_3);
        verticalFrame_scroll_contro_left->setObjectName(QStringLiteral("verticalFrame_scroll_contro_left"));
        verticalLayout_5 = new QVBoxLayout(verticalFrame_scroll_contro_left);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        label_6 = new QLabel(verticalFrame_scroll_contro_left);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(verticalFrame_scroll_contro_left);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(verticalFrame_scroll_contro_left);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(verticalFrame_scroll_contro_left);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        label_24 = new QLabel(verticalFrame_scroll_contro_left);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font1);
        label_24->setTextFormat(Qt::AutoText);
        label_24->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_24);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, 10, 5);
        ch0vol = new QSlider_USER(verticalFrame_scroll_contro_left);
        ch0vol->setObjectName(QStringLiteral("ch0vol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ch0vol->sizePolicy().hasHeightForWidth());
        ch0vol->setSizePolicy(sizePolicy1);
        ch0vol->setAutoFillBackground(false);
        ch0vol->setMaximum(768);
        ch0vol->setValue(96);
        ch0vol->setOrientation(Qt::Vertical);
        ch0vol->setInvertedAppearance(true);
        ch0vol->setInvertedControls(false);
        ch0vol->setTickPosition(QSlider::NoTicks);
        ch0vol->setTickInterval(0);

        horizontalLayout->addWidget(ch0vol);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(3, 62, 3, -1);
        line_6 = new QFrame(verticalFrame_scroll_contro_left);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_17->addWidget(line_6);

        frame_8 = new QFrame(verticalFrame_scroll_contro_left);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        verticalLayout_17->addWidget(frame_8);

        verticalLayout_17->setStretch(0, 2);
        verticalLayout_17->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_17);

        ch1vol = new QSlider_USER(verticalFrame_scroll_contro_left);
        ch1vol->setObjectName(QStringLiteral("ch1vol"));
        sizePolicy1.setHeightForWidth(ch1vol->sizePolicy().hasHeightForWidth());
        ch1vol->setSizePolicy(sizePolicy1);
        ch1vol->setAutoFillBackground(false);
        ch1vol->setMaximum(768);
        ch1vol->setValue(96);
        ch1vol->setOrientation(Qt::Vertical);
        ch1vol->setInvertedAppearance(true);
        ch1vol->setInvertedControls(false);

        horizontalLayout->addWidget(ch1vol);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(3, 62, 3, -1);
        line_7 = new QFrame(verticalFrame_scroll_contro_left);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(line_7);

        frame_9 = new QFrame(verticalFrame_scroll_contro_left);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        verticalLayout_18->addWidget(frame_9);

        verticalLayout_18->setStretch(0, 2);
        verticalLayout_18->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_18);

        ch2vol = new QSlider_USER(verticalFrame_scroll_contro_left);
        ch2vol->setObjectName(QStringLiteral("ch2vol"));
        sizePolicy1.setHeightForWidth(ch2vol->sizePolicy().hasHeightForWidth());
        ch2vol->setSizePolicy(sizePolicy1);
        ch2vol->setAutoFillBackground(false);
        ch2vol->setMaximum(768);
        ch2vol->setValue(96);
        ch2vol->setOrientation(Qt::Vertical);
        ch2vol->setInvertedAppearance(true);
        ch2vol->setInvertedControls(false);

        horizontalLayout->addWidget(ch2vol);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(3, 62, 3, -1);
        line_5 = new QFrame(verticalFrame_scroll_contro_left);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line_5);

        frame_7 = new QFrame(verticalFrame_scroll_contro_left);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        verticalLayout_16->addWidget(frame_7);

        verticalLayout_16->setStretch(0, 2);
        verticalLayout_16->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_16);

        ch3vol = new QSlider_USER(verticalFrame_scroll_contro_left);
        ch3vol->setObjectName(QStringLiteral("ch3vol"));
        sizePolicy1.setHeightForWidth(ch3vol->sizePolicy().hasHeightForWidth());
        ch3vol->setSizePolicy(sizePolicy1);
        ch3vol->setAutoFillBackground(false);
        ch3vol->setMaximum(768);
        ch3vol->setValue(96);
        ch3vol->setOrientation(Qt::Vertical);
        ch3vol->setInvertedAppearance(true);
        ch3vol->setInvertedControls(false);

        horizontalLayout->addWidget(ch3vol);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 2);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 2);

        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, -1, 5, 2);
        ch0volLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch0volLabel->setObjectName(QStringLiteral("ch0volLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ch0volLabel->sizePolicy().hasHeightForWidth());
        ch0volLabel->setSizePolicy(sizePolicy2);
        ch0volLabel->setMaximumSize(QSize(80, 30));
        ch0volLabel->setFrameShape(QFrame::NoFrame);
        ch0volLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(ch0volLabel);

        ch1volLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch1volLabel->setObjectName(QStringLiteral("ch1volLabel"));
        sizePolicy2.setHeightForWidth(ch1volLabel->sizePolicy().hasHeightForWidth());
        ch1volLabel->setSizePolicy(sizePolicy2);
        ch1volLabel->setMaximumSize(QSize(80, 30));
        ch1volLabel->setFrameShape(QFrame::NoFrame);
        ch1volLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(ch1volLabel);

        ch2volLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch2volLabel->setObjectName(QStringLiteral("ch2volLabel"));
        sizePolicy2.setHeightForWidth(ch2volLabel->sizePolicy().hasHeightForWidth());
        ch2volLabel->setSizePolicy(sizePolicy2);
        ch2volLabel->setMaximumSize(QSize(80, 30));
        ch2volLabel->setFrameShape(QFrame::NoFrame);
        ch2volLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(ch2volLabel);

        ch3volLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch3volLabel->setObjectName(QStringLiteral("ch3volLabel"));
        sizePolicy2.setHeightForWidth(ch3volLabel->sizePolicy().hasHeightForWidth());
        ch3volLabel->setSizePolicy(sizePolicy2);
        ch3volLabel->setMaximumSize(QSize(80, 30));
        ch3volLabel->setFrameShape(QFrame::NoFrame);
        ch3volLabel->setFrameShadow(QFrame::Plain);
        ch3volLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(ch3volLabel);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 2, 5, -1);
        ch0volTotLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch0volTotLabel->setObjectName(QStringLiteral("ch0volTotLabel"));
        ch0volTotLabel->setMaximumSize(QSize(50, 30));
        ch0volTotLabel->setFrameShape(QFrame::NoFrame);
        ch0volTotLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(ch0volTotLabel);

        ch1volTotLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch1volTotLabel->setObjectName(QStringLiteral("ch1volTotLabel"));
        ch1volTotLabel->setMaximumSize(QSize(50, 30));
        ch1volTotLabel->setFrameShape(QFrame::NoFrame);
        ch1volTotLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(ch1volTotLabel);

        ch2volTotLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch2volTotLabel->setObjectName(QStringLiteral("ch2volTotLabel"));
        ch2volTotLabel->setMaximumSize(QSize(50, 30));
        ch2volTotLabel->setFrameShape(QFrame::NoFrame);
        ch2volTotLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(ch2volTotLabel);

        ch3volTotLabel = new QLabel(verticalFrame_scroll_contro_left);
        ch3volTotLabel->setObjectName(QStringLiteral("ch3volTotLabel"));
        ch3volTotLabel->setMaximumSize(QSize(50, 30));
        ch3volTotLabel->setFrameShape(QFrame::NoFrame);
        ch3volTotLabel->setFrameShadow(QFrame::Plain);
        ch3volTotLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(ch3volTotLabel);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 8);
        verticalLayout_5->setStretch(3, 1);
        verticalLayout_5->setStretch(4, 1);

        horizontalLayout_10->addWidget(verticalFrame_scroll_contro_left);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalFrame_state_Clipping_Ocured = new QFrame(horizontalLayoutWidget_3);
        verticalFrame_state_Clipping_Ocured->setObjectName(QStringLiteral("verticalFrame_state_Clipping_Ocured"));
        sizePolicy1.setHeightForWidth(verticalFrame_state_Clipping_Ocured->sizePolicy().hasHeightForWidth());
        verticalFrame_state_Clipping_Ocured->setSizePolicy(sizePolicy1);
        verticalLayout_11 = new QVBoxLayout(verticalFrame_state_Clipping_Ocured);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(verticalFrame_state_Clipping_Ocured);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_18);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setVerticalSpacing(6);
        clippingCH3 = new QLabel(verticalFrame_state_Clipping_Ocured);
        clippingCH3->setObjectName(QStringLiteral("clippingCH3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        clippingCH3->setFont(font2);
        clippingCH3->setStyleSheet(QStringLiteral(""));
        clippingCH3->setFrameShape(QFrame::NoFrame);
        clippingCH3->setLineWidth(0);
        clippingCH3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(clippingCH3, 1, 1, 1, 1);

        clippingCH2 = new QLabel(verticalFrame_state_Clipping_Ocured);
        clippingCH2->setObjectName(QStringLiteral("clippingCH2"));
        clippingCH2->setFont(font2);
        clippingCH2->setStyleSheet(QStringLiteral(""));
        clippingCH2->setFrameShape(QFrame::NoFrame);
        clippingCH2->setLineWidth(0);
        clippingCH2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(clippingCH2, 1, 0, 1, 1);

        clippingCH1 = new QLabel(verticalFrame_state_Clipping_Ocured);
        clippingCH1->setObjectName(QStringLiteral("clippingCH1"));
        clippingCH1->setFont(font2);
        clippingCH1->setStyleSheet(QStringLiteral(""));
        clippingCH1->setFrameShape(QFrame::NoFrame);
        clippingCH1->setLineWidth(0);
        clippingCH1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(clippingCH1, 0, 1, 1, 1);

        clippingCH0 = new QLabel(verticalFrame_state_Clipping_Ocured);
        clippingCH0->setObjectName(QStringLiteral("clippingCH0"));
        clippingCH0->setFont(font2);
        clippingCH0->setStyleSheet(QStringLiteral(""));
        clippingCH0->setFrameShape(QFrame::NoFrame);
        clippingCH0->setFrameShadow(QFrame::Raised);
        clippingCH0->setLineWidth(0);
        clippingCH0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(clippingCH0, 0, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout);

        pushButton_Mute = new QPushBotton_User(verticalFrame_state_Clipping_Ocured);
        pushButton_Mute->setObjectName(QStringLiteral("pushButton_Mute"));
        sizePolicy1.setHeightForWidth(pushButton_Mute->sizePolicy().hasHeightForWidth());
        pushButton_Mute->setSizePolicy(sizePolicy1);
        pushButton_Mute->setCheckable(true);

        verticalLayout_11->addWidget(pushButton_Mute);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 2);
        verticalLayout_11->setStretch(2, 1);

        verticalLayout_7->addWidget(verticalFrame_state_Clipping_Ocured);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(10);
        label_12->setFont(font3);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setTextFormat(Qt::AutoText);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        frame_6 = new QFrame(horizontalLayoutWidget_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy3);
        frame_6->setMinimumSize(QSize(0, 100));
        frame_6->setMaximumSize(QSize(16777215, 100));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_6);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 91, 108));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 2, 0, 32);
        atkFast = new QRadioButton(layoutWidget);
        atkFast->setObjectName(QStringLiteral("atkFast"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(atkFast->sizePolicy().hasHeightForWidth());
        atkFast->setSizePolicy(sizePolicy4);
        atkFast->setMaximumSize(QSize(100, 26));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(8);
        atkFast->setFont(font4);
        atkFast->setLayoutDirection(Qt::RightToLeft);
        atkFast->setAutoExclusive(true);

        verticalLayout_4->addWidget(atkFast);

        atkNormal = new QRadioButton(layoutWidget);
        atkNormal->setObjectName(QStringLiteral("atkNormal"));
        sizePolicy4.setHeightForWidth(atkNormal->sizePolicy().hasHeightForWidth());
        atkNormal->setSizePolicy(sizePolicy4);
        atkNormal->setMaximumSize(QSize(100, 26));
        atkNormal->setFont(font4);
        atkNormal->setLayoutDirection(Qt::RightToLeft);
        atkNormal->setAutoExclusive(true);

        verticalLayout_4->addWidget(atkNormal);

        atkSlow = new QRadioButton(layoutWidget);
        atkSlow->setObjectName(QStringLiteral("atkSlow"));
        sizePolicy4.setHeightForWidth(atkSlow->sizePolicy().hasHeightForWidth());
        atkSlow->setSizePolicy(sizePolicy4);
        atkSlow->setMaximumSize(QSize(100, 26));
        atkSlow->setFont(font4);
        atkSlow->setLayoutDirection(Qt::RightToLeft);
        atkSlow->setAutoExclusive(true);

        verticalLayout_4->addWidget(atkSlow);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);

        horizontalLayout_11->addWidget(frame_6);

        quser_dial_swith_left = new quser_dial(horizontalLayoutWidget_3);
        quser_dial_swith_left->setObjectName(QStringLiteral("quser_dial_swith_left"));
        quser_dial_swith_left->setMinimumSize(QSize(101, 88));
        quser_dial_swith_left->setMaximumSize(QSize(101, 88));

        horizontalLayout_11->addWidget(quser_dial_swith_left, 0, Qt::AlignLeft);

        horizontalLayout_11->setStretch(0, 7);
        horizontalLayout_11->setStretch(1, 7);

        verticalLayout_7->addLayout(horizontalLayout_11);

        frame_2 = new QFrame(horizontalLayoutWidget_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(frame_2);

        verticalLayout_7->setStretch(0, 4);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 4);
        verticalLayout_7->setStretch(3, 1);

        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_10->setContentsMargins(9, 9, 9, 9);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_13->addWidget(label);

        label_19 = new QLabel(horizontalLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);
        label_19->setTextFormat(Qt::AutoText);
        label_19->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_13->addWidget(label_19);


        verticalLayout_10->addLayout(verticalLayout_13);

        mrvol = new QSlider_USER(horizontalLayoutWidget_3);
        mrvol->setObjectName(QStringLiteral("mrvol"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mrvol->sizePolicy().hasHeightForWidth());
        mrvol->setSizePolicy(sizePolicy5);
        mrvol->setAutoFillBackground(false);
        mrvol->setStyleSheet(QStringLiteral(""));
        mrvol->setMaximum(768);
        mrvol->setValue(96);
        mrvol->setOrientation(Qt::Vertical);
        mrvol->setInvertedAppearance(true);
        mrvol->setInvertedControls(true);

        verticalLayout_10->addWidget(mrvol);

        mrvolLabel = new QLabel(horizontalLayoutWidget_3);
        mrvolLabel->setObjectName(QStringLiteral("mrvolLabel"));
        sizePolicy2.setHeightForWidth(mrvolLabel->sizePolicy().hasHeightForWidth());
        mrvolLabel->setSizePolicy(sizePolicy2);
        mrvolLabel->setMinimumSize(QSize(60, 0));
        mrvolLabel->setMaximumSize(QSize(80, 30));
        mrvolLabel->setFrameShape(QFrame::NoFrame);
        mrvolLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(mrvolLabel, 0, Qt::AlignHCenter);

        verticalLayout_10->setStretch(0, 2);
        verticalLayout_10->setStretch(1, 8);
        verticalLayout_10->setStretch(2, 1);

        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalFrame_State_Limitr_active = new QFrame(horizontalLayoutWidget_3);
        verticalFrame_State_Limitr_active->setObjectName(QStringLiteral("verticalFrame_State_Limitr_active"));
        verticalLayout_12 = new QVBoxLayout(verticalFrame_State_Limitr_active);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(verticalFrame_State_Limitr_active);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_17);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        limiterActiveCH1 = new QLabel(verticalFrame_State_Limitr_active);
        limiterActiveCH1->setObjectName(QStringLiteral("limiterActiveCH1"));
        limiterActiveCH1->setFont(font2);
        limiterActiveCH1->setStyleSheet(QStringLiteral(""));
        limiterActiveCH1->setFrameShape(QFrame::NoFrame);
        limiterActiveCH1->setFrameShadow(QFrame::Raised);
        limiterActiveCH1->setLineWidth(0);
        limiterActiveCH1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(limiterActiveCH1, 0, 1, 1, 1);

        limiterActiveCH0 = new QLabel(verticalFrame_State_Limitr_active);
        limiterActiveCH0->setObjectName(QStringLiteral("limiterActiveCH0"));
        limiterActiveCH0->setFont(font2);
        limiterActiveCH0->setStyleSheet(QStringLiteral(""));
        limiterActiveCH0->setFrameShape(QFrame::NoFrame);
        limiterActiveCH0->setLineWidth(0);
        limiterActiveCH0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(limiterActiveCH0, 0, 0, 1, 1);

        limiterActiveCH2 = new QLabel(verticalFrame_State_Limitr_active);
        limiterActiveCH2->setObjectName(QStringLiteral("limiterActiveCH2"));
        limiterActiveCH2->setFont(font2);
        limiterActiveCH2->setStyleSheet(QStringLiteral(""));
        limiterActiveCH2->setFrameShape(QFrame::NoFrame);
        limiterActiveCH2->setLineWidth(0);
        limiterActiveCH2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(limiterActiveCH2, 1, 0, 1, 1);

        limiterActiveCH3 = new QLabel(verticalFrame_State_Limitr_active);
        limiterActiveCH3->setObjectName(QStringLiteral("limiterActiveCH3"));
        limiterActiveCH3->setFont(font2);
        limiterActiveCH3->setStyleSheet(QStringLiteral(""));
        limiterActiveCH3->setFrameShape(QFrame::NoFrame);
        limiterActiveCH3->setLineWidth(0);
        limiterActiveCH3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(limiterActiveCH3, 1, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout_2);

        pushButton_Limiter = new QPushBotton_User(verticalFrame_State_Limitr_active);
        pushButton_Limiter->setObjectName(QStringLiteral("pushButton_Limiter"));
        sizePolicy1.setHeightForWidth(pushButton_Limiter->sizePolicy().hasHeightForWidth());
        pushButton_Limiter->setSizePolicy(sizePolicy1);
        pushButton_Limiter->setCheckable(true);

        verticalLayout_12->addWidget(pushButton_Limiter);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 2);
        verticalLayout_12->setStretch(2, 1);

        verticalLayout_8->addWidget(verticalFrame_State_Limitr_active);

        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font5;
        font5.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setWeight(50);
        label_11->setFont(font5);
        label_11->setTextFormat(Qt::AutoText);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        quser_dial_swith_right = new quser_dial(horizontalLayoutWidget_3);
        quser_dial_swith_right->setObjectName(QStringLiteral("quser_dial_swith_right"));
        quser_dial_swith_right->setMinimumSize(QSize(101, 88));
        quser_dial_swith_right->setMaximumSize(QSize(101, 88));

        horizontalLayout_12->addWidget(quser_dial_swith_right, 0, Qt::AlignLeft);

        frame_5 = new QFrame(horizontalLayoutWidget_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        sizePolicy3.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy3);
        frame_5->setMinimumSize(QSize(0, 100));
        frame_5->setMaximumSize(QSize(16777215, 100));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame_5);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 91, 108));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 2, 0, 32);
        decFast = new QRadioButton(layoutWidget1);
        decFast->setObjectName(QStringLiteral("decFast"));
        sizePolicy4.setHeightForWidth(decFast->sizePolicy().hasHeightForWidth());
        decFast->setSizePolicy(sizePolicy4);
        decFast->setMaximumSize(QSize(100, 26));
        decFast->setFont(font4);
        decFast->setAutoExclusive(true);

        verticalLayout_3->addWidget(decFast);

        decNormal = new QRadioButton(layoutWidget1);
        decNormal->setObjectName(QStringLiteral("decNormal"));
        sizePolicy4.setHeightForWidth(decNormal->sizePolicy().hasHeightForWidth());
        decNormal->setSizePolicy(sizePolicy4);
        decNormal->setMaximumSize(QSize(100, 26));
        decNormal->setFont(font4);
        decNormal->setAutoExclusive(true);

        verticalLayout_3->addWidget(decNormal);

        decSlow = new QRadioButton(layoutWidget1);
        decSlow->setObjectName(QStringLiteral("decSlow"));
        sizePolicy4.setHeightForWidth(decSlow->sizePolicy().hasHeightForWidth());
        decSlow->setSizePolicy(sizePolicy4);
        decSlow->setMaximumSize(QSize(100, 26));
        decSlow->setFont(font4);
        decSlow->setAutoExclusive(true);

        verticalLayout_3->addWidget(decSlow);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);

        horizontalLayout_12->addWidget(frame_5);

        horizontalLayout_12->setStretch(0, 7);
        horizontalLayout_12->setStretch(1, 7);

        verticalLayout_8->addLayout(horizontalLayout_12);

        frame_3 = new QFrame(horizontalLayoutWidget_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame_3);

        verticalLayout_8->setStretch(0, 4);
        verticalLayout_8->setStretch(1, 1);
        verticalLayout_8->setStretch(3, 1);

        horizontalLayout_8->addLayout(verticalLayout_8);

        horizontalLayout_8->setStretch(0, 5);
        horizontalLayout_8->setStretch(1, 1);
        horizontalLayout_8->setStretch(2, 5);

        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_9->setContentsMargins(20, 0, 20, 0);
        pushButton_Audio_Processor_enable = new QPushBotton_User(horizontalLayoutWidget_3);
        pushButton_Audio_Processor_enable->setObjectName(QStringLiteral("pushButton_Audio_Processor_enable"));
        sizePolicy1.setHeightForWidth(pushButton_Audio_Processor_enable->sizePolicy().hasHeightForWidth());
        pushButton_Audio_Processor_enable->setSizePolicy(sizePolicy1);
        pushButton_Audio_Processor_enable->setMinimumSize(QSize(150, 0));
        pushButton_Audio_Processor_enable->setMaximumSize(QSize(150, 16777215));
        pushButton_Audio_Processor_enable->setCheckable(true);
        pushButton_Audio_Processor_enable->setChecked(false);

        horizontalLayout_9->addWidget(pushButton_Audio_Processor_enable);


        verticalLayout_9->addLayout(horizontalLayout_9);

        verticalLayout_9->setStretch(0, 10);
        verticalLayout_9->setStretch(1, 1);

        horizontalLayout_10->addLayout(verticalLayout_9);

        verticalFrame_scroll_contro_right = new QFrame(horizontalLayoutWidget_3);
        verticalFrame_scroll_contro_right->setObjectName(QStringLiteral("verticalFrame_scroll_contro_right"));
        verticalLayout_6 = new QVBoxLayout(verticalFrame_scroll_contro_right);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(1, 1, 1, 1);
        label_13 = new QLabel(verticalFrame_scroll_contro_right);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_6->addWidget(label_13);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(verticalFrame_scroll_contro_right);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setTextFormat(Qt::AutoText);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        label_8 = new QLabel(verticalFrame_scroll_contro_right);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_8);

        label_9 = new QLabel(verticalFrame_scroll_contro_right);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setTextFormat(Qt::AutoText);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_9);

        label_25 = new QLabel(verticalFrame_scroll_contro_right);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font1);
        label_25->setTextFormat(Qt::AutoText);
        label_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_25);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, 10, 5);
        ch0thr = new QSlider_USER(verticalFrame_scroll_contro_right);
        ch0thr->setObjectName(QStringLiteral("ch0thr"));
        sizePolicy1.setHeightForWidth(ch0thr->sizePolicy().hasHeightForWidth());
        ch0thr->setSizePolicy(sizePolicy1);
        ch0thr->setAutoFillBackground(false);
        ch0thr->setMaximum(672);
        ch0thr->setValue(96);
        ch0thr->setOrientation(Qt::Vertical);
        ch0thr->setInvertedAppearance(true);
        ch0thr->setInvertedControls(false);

        horizontalLayout_2->addWidget(ch0thr);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(3, 68, 3, -1);
        line_8 = new QFrame(verticalFrame_scroll_contro_right);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_19->addWidget(line_8);

        frame_10 = new QFrame(verticalFrame_scroll_contro_right);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        verticalLayout_19->addWidget(frame_10);

        verticalLayout_19->setStretch(0, 2);
        verticalLayout_19->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_19);

        ch1thr = new QSlider_USER(verticalFrame_scroll_contro_right);
        ch1thr->setObjectName(QStringLiteral("ch1thr"));
        sizePolicy1.setHeightForWidth(ch1thr->sizePolicy().hasHeightForWidth());
        ch1thr->setSizePolicy(sizePolicy1);
        ch1thr->setAutoFillBackground(false);
        ch1thr->setMaximum(672);
        ch1thr->setValue(96);
        ch1thr->setOrientation(Qt::Vertical);
        ch1thr->setInvertedAppearance(true);
        ch1thr->setInvertedControls(false);

        horizontalLayout_2->addWidget(ch1thr);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(3, 68, 3, -1);
        line_9 = new QFrame(verticalFrame_scroll_contro_right);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_20->addWidget(line_9);

        frame_11 = new QFrame(verticalFrame_scroll_contro_right);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        verticalLayout_20->addWidget(frame_11);

        verticalLayout_20->setStretch(0, 2);
        verticalLayout_20->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_20);

        ch2thr = new QSlider_USER(verticalFrame_scroll_contro_right);
        ch2thr->setObjectName(QStringLiteral("ch2thr"));
        sizePolicy1.setHeightForWidth(ch2thr->sizePolicy().hasHeightForWidth());
        ch2thr->setSizePolicy(sizePolicy1);
        ch2thr->setAutoFillBackground(false);
        ch2thr->setMaximum(672);
        ch2thr->setValue(96);
        ch2thr->setOrientation(Qt::Vertical);
        ch2thr->setInvertedAppearance(true);
        ch2thr->setInvertedControls(false);

        horizontalLayout_2->addWidget(ch2thr);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(3, 68, 3, -1);
        line_10 = new QFrame(verticalFrame_scroll_contro_right);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_21->addWidget(line_10);

        frame_12 = new QFrame(verticalFrame_scroll_contro_right);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);

        verticalLayout_21->addWidget(frame_12);

        verticalLayout_21->setStretch(0, 2);
        verticalLayout_21->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_21);

        ch3thr = new QSlider_USER(verticalFrame_scroll_contro_right);
        ch3thr->setObjectName(QStringLiteral("ch3thr"));
        sizePolicy1.setHeightForWidth(ch3thr->sizePolicy().hasHeightForWidth());
        ch3thr->setSizePolicy(sizePolicy1);
        ch3thr->setLayoutDirection(Qt::LeftToRight);
        ch3thr->setAutoFillBackground(false);
        ch3thr->setMaximum(672);
        ch3thr->setPageStep(1);
        ch3thr->setValue(96);
        ch3thr->setOrientation(Qt::Vertical);
        ch3thr->setInvertedAppearance(true);
        ch3thr->setInvertedControls(false);

        horizontalLayout_2->addWidget(ch3thr);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 2);
        horizontalLayout_2->setStretch(5, 1);
        horizontalLayout_2->setStretch(6, 2);

        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, -1, 5, -1);
        ch0thrLabel = new QLabel(verticalFrame_scroll_contro_right);
        ch0thrLabel->setObjectName(QStringLiteral("ch0thrLabel"));
        sizePolicy2.setHeightForWidth(ch0thrLabel->sizePolicy().hasHeightForWidth());
        ch0thrLabel->setSizePolicy(sizePolicy2);
        ch0thrLabel->setMaximumSize(QSize(80, 30));
        ch0thrLabel->setFrameShape(QFrame::NoFrame);
        ch0thrLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ch0thrLabel);

        ch1thrLabel = new QLabel(verticalFrame_scroll_contro_right);
        ch1thrLabel->setObjectName(QStringLiteral("ch1thrLabel"));
        sizePolicy2.setHeightForWidth(ch1thrLabel->sizePolicy().hasHeightForWidth());
        ch1thrLabel->setSizePolicy(sizePolicy2);
        ch1thrLabel->setMaximumSize(QSize(80, 30));
        ch1thrLabel->setFrameShape(QFrame::NoFrame);
        ch1thrLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ch1thrLabel);

        ch2thrLabel = new QLabel(verticalFrame_scroll_contro_right);
        ch2thrLabel->setObjectName(QStringLiteral("ch2thrLabel"));
        sizePolicy2.setHeightForWidth(ch2thrLabel->sizePolicy().hasHeightForWidth());
        ch2thrLabel->setSizePolicy(sizePolicy2);
        ch2thrLabel->setMaximumSize(QSize(80, 30));
        ch2thrLabel->setFrameShape(QFrame::NoFrame);
        ch2thrLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ch2thrLabel);

        ch3thrLabel = new QLabel(verticalFrame_scroll_contro_right);
        ch3thrLabel->setObjectName(QStringLiteral("ch3thrLabel"));
        sizePolicy2.setHeightForWidth(ch3thrLabel->sizePolicy().hasHeightForWidth());
        ch3thrLabel->setSizePolicy(sizePolicy2);
        ch3thrLabel->setMaximumSize(QSize(80, 30));
        ch3thrLabel->setFrameShape(QFrame::NoFrame);
        ch3thrLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ch3thrLabel);


        verticalLayout_6->addLayout(horizontalLayout_4);

        frame = new QFrame(verticalFrame_scroll_contro_right);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(frame);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 8);
        verticalLayout_6->setStretch(3, 1);
        verticalLayout_6->setStretch(4, 1);

        horizontalLayout_10->addWidget(verticalFrame_scroll_contro_right);

        horizontalLayout_10->setStretch(0, 4);
        horizontalLayout_10->setStretch(1, 8);
        horizontalLayout_10->setStretch(2, 4);
        newWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(ch0vol, ch1vol);
        QWidget::setTabOrder(ch1vol, ch3vol);
        QWidget::setTabOrder(ch3vol, ch0thr);
        QWidget::setTabOrder(ch0thr, ch1thr);
        QWidget::setTabOrder(ch1thr, ch2thr);
        QWidget::setTabOrder(ch2thr, ch3thr);
        QWidget::setTabOrder(ch3thr, atkFast);
        QWidget::setTabOrder(atkFast, atkNormal);
        QWidget::setTabOrder(atkNormal, atkSlow);
        QWidget::setTabOrder(atkSlow, decNormal);
        QWidget::setTabOrder(decNormal, decSlow);

        retranslateUi(newWindow);

        QMetaObject::connectSlotsByName(newWindow);
    } // setupUi

    void retranslateUi(QMainWindow *newWindow)
    {
        newWindow->setWindowTitle(QApplication::translate("newWindow", "Digital Audio Processing", Q_NULLPTR));
        label_6->setText(QApplication::translate("newWindow", "CHANNEL VOLUME", Q_NULLPTR));
        label_6->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        label_3->setText(QApplication::translate("newWindow", "Ch0 ", Q_NULLPTR));
        label_4->setText(QApplication::translate("newWindow", "Ch1", Q_NULLPTR));
        label_5->setText(QApplication::translate("newWindow", "Ch2", Q_NULLPTR));
        label_24->setText(QApplication::translate("newWindow", "Ch3", Q_NULLPTR));
        ch0volLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch0volLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch1volLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch1volLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch2volLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch2volLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch3volLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch3volLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch0volTotLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch1volTotLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch2volTotLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch3volTotLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        label_18->setText(QApplication::translate("newWindow", "CLIPPING OCCURED", Q_NULLPTR));
        clippingCH3->setText(QApplication::translate("newWindow", "Ch3", Q_NULLPTR));
        clippingCH3->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        clippingCH3->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        clippingCH2->setText(QApplication::translate("newWindow", "Ch2", Q_NULLPTR));
        clippingCH2->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        clippingCH2->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        clippingCH1->setText(QApplication::translate("newWindow", "Ch1", Q_NULLPTR));
        clippingCH1->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        clippingCH1->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        clippingCH0->setText(QApplication::translate("newWindow", "Ch0", Q_NULLPTR));
        clippingCH0->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        clippingCH0->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        pushButton_Mute->setText(QApplication::translate("newWindow", "MUTE", Q_NULLPTR));
        pushButton_Mute->setProperty("QPushButtonCentral", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Mute->setProperty("QPushButtonCentral_EnableChecked", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Mute->setProperty("QPushButtonCentral_EnableCheckedHover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Mute->setProperty("QPushButtonCentral_EnablePresed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Mute->setProperty("QPushButtonCentral_EnableHover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Mute->setProperty("QPushButtonCentral_EnableHoverPresed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        label_12->setText(QApplication::translate("newWindow", "ATTACK", Q_NULLPTR));
        label_12->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        atkFast->setText(QApplication::translate("newWindow", "Fast", Q_NULLPTR));
        atkFast->setProperty("radio_but_unchecked", QVariant(QApplication::translate("newWindow", "unchecked", Q_NULLPTR)));
        atkFast->setProperty("radio_but_checked", QVariant(QApplication::translate("newWindow", "checked", Q_NULLPTR)));
        atkFast->setProperty("radio_but_font", QVariant(QApplication::translate("newWindow", "radibut_font", Q_NULLPTR)));
        atkNormal->setText(QApplication::translate("newWindow", "Normal", Q_NULLPTR));
        atkNormal->setProperty("radio_but_unchecked", QVariant(QApplication::translate("newWindow", "unchecked", Q_NULLPTR)));
        atkNormal->setProperty("radio_but_checked", QVariant(QApplication::translate("newWindow", "checked", Q_NULLPTR)));
        atkNormal->setProperty("radio_but_font", QVariant(QApplication::translate("newWindow", "radibut_font", Q_NULLPTR)));
        atkSlow->setText(QApplication::translate("newWindow", "Slow", Q_NULLPTR));
        atkSlow->setProperty("radio_but_unchecked", QVariant(QApplication::translate("newWindow", "unchecked", Q_NULLPTR)));
        atkSlow->setProperty("radio_but_checked", QVariant(QApplication::translate("newWindow", "checked", Q_NULLPTR)));
        atkSlow->setProperty("radio_but_font", QVariant(QApplication::translate("newWindow", "radibut_font", Q_NULLPTR)));
        label->setText(QApplication::translate("newWindow", "MASTER", Q_NULLPTR));
        label_19->setText(QApplication::translate("newWindow", "VOLUME", Q_NULLPTR));
        label_19->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        mrvolLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        mrvolLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        label_17->setText(QApplication::translate("newWindow", "LIMITER ACTIVE", Q_NULLPTR));
        limiterActiveCH1->setText(QApplication::translate("newWindow", "Ch1", Q_NULLPTR));
        limiterActiveCH1->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        limiterActiveCH1->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        limiterActiveCH0->setText(QApplication::translate("newWindow", "Ch0", Q_NULLPTR));
        limiterActiveCH0->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        limiterActiveCH0->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        limiterActiveCH2->setText(QApplication::translate("newWindow", "Ch2", Q_NULLPTR));
        limiterActiveCH2->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        limiterActiveCH2->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        limiterActiveCH3->setText(QApplication::translate("newWindow", "Ch3", Q_NULLPTR));
        limiterActiveCH3->setProperty("color_indication_on", QVariant(QApplication::translate("newWindow", "indication_on", Q_NULLPTR)));
        limiterActiveCH3->setProperty("color_indication_off", QVariant(QApplication::translate("newWindow", "indication_off", Q_NULLPTR)));
        pushButton_Limiter->setText(QApplication::translate("newWindow", "LIMITER", Q_NULLPTR));
        pushButton_Limiter->setProperty("QPushButtonCentral", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Limiter->setProperty("QPushButtonCentral_EnableChecked", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Limiter->setProperty("QPushButtonCentral_EnableCheckedHover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Limiter->setProperty("QPushButtonCentral_EnablePresed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Limiter->setProperty("QPushButtonCentral_EnableHover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Limiter->setProperty("QPushButtonCentral_EnableHoverPresed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        label_11->setText(QApplication::translate("newWindow", "DECAY", Q_NULLPTR));
        label_11->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        decFast->setText(QApplication::translate("newWindow", "Fast", Q_NULLPTR));
        decFast->setProperty("radio_but_unchecked", QVariant(QApplication::translate("newWindow", "unchecked", Q_NULLPTR)));
        decFast->setProperty("radio_but_checked", QVariant(QApplication::translate("newWindow", "checked", Q_NULLPTR)));
        decFast->setProperty("radio_but_font", QVariant(QApplication::translate("newWindow", "radibut_font", Q_NULLPTR)));
        decNormal->setText(QApplication::translate("newWindow", "Normal", Q_NULLPTR));
        decNormal->setProperty("radio_but_unchecked", QVariant(QApplication::translate("newWindow", "unchecked", Q_NULLPTR)));
        decNormal->setProperty("radio_but_checked", QVariant(QApplication::translate("newWindow", "checked", Q_NULLPTR)));
        decNormal->setProperty("radio_but_font", QVariant(QApplication::translate("newWindow", "radibut_font", Q_NULLPTR)));
        decSlow->setText(QApplication::translate("newWindow", "Slow", Q_NULLPTR));
        decSlow->setProperty("radio_but_unchecked", QVariant(QApplication::translate("newWindow", "unchecked", Q_NULLPTR)));
        decSlow->setProperty("radio_but_checked", QVariant(QApplication::translate("newWindow", "checked", Q_NULLPTR)));
        decSlow->setProperty("radio_but_font", QVariant(QApplication::translate("newWindow", "radibut_font", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setText(QApplication::translate("newWindow", "AUDIO PROCESSOR", Q_NULLPTR));
        pushButton_Audio_Processor_enable->setProperty("PushButtonCentral", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("PushButtonCentral_Pressed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("PushButtonCentral_Hover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("QPushButtonCentral", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("QPushButtonCentral_EnableChecked", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("QPushButtonCentral_EnableCheckedHover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("QPushButtonCentral_EnablePresed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("QPushButtonCentral_EnableHover", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        pushButton_Audio_Processor_enable->setProperty("QPushButtonCentral_EnableHoverPresed", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        label_13->setText(QApplication::translate("newWindow", "LIMITER THRESHOLD", Q_NULLPTR));
        label_13->setProperty("QLabelMainBig_SegoeUI12pt", QVariant(QApplication::translate("newWindow", "true", Q_NULLPTR)));
        label_7->setText(QApplication::translate("newWindow", "Ch0 ", Q_NULLPTR));
        label_8->setText(QApplication::translate("newWindow", "Ch1", Q_NULLPTR));
        label_9->setText(QApplication::translate("newWindow", "Ch2", Q_NULLPTR));
        label_25->setText(QApplication::translate("newWindow", "Ch3", Q_NULLPTR));
        ch0thrLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch0thrLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch1thrLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch1thrLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch2thrLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch2thrLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
        ch3thrLabel->setText(QApplication::translate("newWindow", "text", Q_NULLPTR));
        ch3thrLabel->setProperty("lbl_type", QVariant(QApplication::translate("newWindow", "vol", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class newWindow: public Ui_newWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H

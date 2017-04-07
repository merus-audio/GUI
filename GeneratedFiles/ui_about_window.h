/********************************************************************************
** Form generated from reading UI file 'about_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_WINDOW_H
#define UI_ABOUT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About_window
{
public:
    QFrame *verticalFrameAbout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *QframeLogo;
    QGridLayout *gridLayout;
    QLabel *NameSofLable;
    QLabel *sVersionSoftLable;
    QLabel *NameCompanyLable;
    QLabel *VersionSoftLable;
    QLabel *sNameCompanyLable;
    QLabel *sNameSofLable;
    QLabel *DateLable;
    QLabel *sDateLable;
    QLabel *sHomePage;
    QLabel *HomePageLable;
    QLabel *DescriptionLable;
    QPushButton *AboutOkpushButton;

    void setupUi(QDialog *About_window)
    {
        if (About_window->objectName().isEmpty())
            About_window->setObjectName(QStringLiteral("About_window"));
        About_window->resize(389, 223);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About_window->sizePolicy().hasHeightForWidth());
        About_window->setSizePolicy(sizePolicy);
        verticalFrameAbout = new QFrame(About_window);
        verticalFrameAbout->setObjectName(QStringLiteral("verticalFrameAbout"));
        verticalFrameAbout->setGeometry(QRect(10, 10, 371, 211));
        verticalLayout = new QVBoxLayout(verticalFrameAbout);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, 5, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        QframeLogo = new QFrame(verticalFrameAbout);
        QframeLogo->setObjectName(QStringLiteral("QframeLogo"));
        QframeLogo->setFrameShape(QFrame::StyledPanel);
        QframeLogo->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(QframeLogo);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 5, -1, 5);
        NameSofLable = new QLabel(verticalFrameAbout);
        NameSofLable->setObjectName(QStringLiteral("NameSofLable"));

        gridLayout->addWidget(NameSofLable, 0, 1, 1, 1);

        sVersionSoftLable = new QLabel(verticalFrameAbout);
        sVersionSoftLable->setObjectName(QStringLiteral("sVersionSoftLable"));

        gridLayout->addWidget(sVersionSoftLable, 1, 0, 1, 1);

        NameCompanyLable = new QLabel(verticalFrameAbout);
        NameCompanyLable->setObjectName(QStringLiteral("NameCompanyLable"));

        gridLayout->addWidget(NameCompanyLable, 3, 1, 1, 1);

        VersionSoftLable = new QLabel(verticalFrameAbout);
        VersionSoftLable->setObjectName(QStringLiteral("VersionSoftLable"));

        gridLayout->addWidget(VersionSoftLable, 1, 1, 1, 1);

        sNameCompanyLable = new QLabel(verticalFrameAbout);
        sNameCompanyLable->setObjectName(QStringLiteral("sNameCompanyLable"));

        gridLayout->addWidget(sNameCompanyLable, 3, 0, 1, 1);

        sNameSofLable = new QLabel(verticalFrameAbout);
        sNameSofLable->setObjectName(QStringLiteral("sNameSofLable"));

        gridLayout->addWidget(sNameSofLable, 0, 0, 1, 1);

        DateLable = new QLabel(verticalFrameAbout);
        DateLable->setObjectName(QStringLiteral("DateLable"));

        gridLayout->addWidget(DateLable, 2, 1, 1, 1);

        sDateLable = new QLabel(verticalFrameAbout);
        sDateLable->setObjectName(QStringLiteral("sDateLable"));

        gridLayout->addWidget(sDateLable, 2, 0, 1, 1);

        sHomePage = new QLabel(verticalFrameAbout);
        sHomePage->setObjectName(QStringLiteral("sHomePage"));

        gridLayout->addWidget(sHomePage, 4, 0, 1, 1);

        HomePageLable = new QLabel(verticalFrameAbout);
        HomePageLable->setObjectName(QStringLiteral("HomePageLable"));

        gridLayout->addWidget(HomePageLable, 4, 1, 1, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 4);

        horizontalLayout->addLayout(gridLayout);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(1, 6);

        verticalLayout->addLayout(horizontalLayout);

        DescriptionLable = new QLabel(verticalFrameAbout);
        DescriptionLable->setObjectName(QStringLiteral("DescriptionLable"));

        verticalLayout->addWidget(DescriptionLable);

        AboutOkpushButton = new QPushButton(verticalFrameAbout);
        AboutOkpushButton->setObjectName(QStringLiteral("AboutOkpushButton"));
        AboutOkpushButton->setMinimumSize(QSize(100, 30));

        verticalLayout->addWidget(AboutOkpushButton, 0, Qt::AlignHCenter);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        retranslateUi(About_window);

        QMetaObject::connectSlotsByName(About_window);
    } // setupUi

    void retranslateUi(QDialog *About_window)
    {
        About_window->setWindowTitle(QApplication::translate("About_window", "Dialog", Q_NULLPTR));
        About_window->setProperty("QDialogAbout_BorderImage", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        verticalFrameAbout->setProperty("QFrameAbout_BorderImage", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        QframeLogo->setProperty("QFrameLogo_BorderImage", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        NameSofLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        sVersionSoftLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        NameCompanyLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        VersionSoftLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        sNameCompanyLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        sNameSofLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        DateLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        sDateLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        sHomePage->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        HomePageLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        DescriptionLable->setText(QApplication::translate("About_window", "TextLabel", Q_NULLPTR));
        AboutOkpushButton->setText(QApplication::translate("About_window", "OK", Q_NULLPTR));
        AboutOkpushButton->setProperty("PushButtonSeparate_Enabled", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        AboutOkpushButton->setProperty("PushButtonSeparate_EnabledPressed", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        AboutOkpushButton->setProperty("PushButtonSeparate_EnabledPressedHover", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        AboutOkpushButton->setProperty("PushButtonSeparate_EnabledHover", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
        AboutOkpushButton->setProperty("PushButtonSeparate_Disabled", QVariant(QApplication::translate("About_window", "true", Q_NULLPTR)));
    } // retranslateUi

};

namespace Ui {
    class About_window: public Ui_About_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_WINDOW_H

#include "about_window.h"
#include "about_window_text.h"
#include "ui_about_window.h"
#include "QSize"
#include "QPoint"
#include "QWidget"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

About_window::About_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_window)
{

    setAttribute(Qt::WA_TranslucentBackground); //

    //LogImgScene=new QGraphicsScene;
    //LogImgPixmap=new QGraphicsPixmapItem(QString( QCoreApplication::applicationDirPath())+"/IMG/Merus_alfa_logo.png");
    //LogImgPixmap->setScale(0.4);
    //LogImgScene->addItem(LogImgPixmap);
    //LogImgScene->se

    ui->setupUi(this);
    // Disable title bar
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    // Set merus log
    //ui->graphicsView->setScene(LogImgScene);
    //ui->graphicsView->show();

    ui->sNameSofLable->setText(S_NAME_SOFT);
    ui->sVersionSoftLable->setText(S_VERSIN_SOFT);
    ui->sDateLable->setText(S_NAME_DATE);
    ui->sNameCompanyLable->setText(S_NAME_COMPANY);
    ui->sHomePage->setText(S_HOME_PAGE);

    ui->NameSofLable->setText(NAME_SOFT);
    ui->VersionSoftLable->setText(VERSIN_SOFT);
    ui->DateLable->setText(NAME_DATE);
    ui->NameCompanyLable->setText(NAME_COMPANY);
    ui->HomePageLable->setText(HOME_PAGE);

    ui->DescriptionLable->setText(DESCRIPTION);

}

About_window::~About_window()
{
    delete ui;
}

void About_window::on_AboutOkpushButton_clicked()
{
    this->close();
}

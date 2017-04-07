#ifndef ABOUT_WINDOW_H
#define ABOUT_WINDOW_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

namespace Ui {
class About_window;
}

class About_window : public QDialog
{
    Q_OBJECT

public:
    explicit About_window(QWidget *parent = 0);
    ~About_window();

private slots:
    void on_AboutOkpushButton_clicked();

private:
    Ui::About_window *ui;
    QGraphicsScene *LogImgScene;
    QGraphicsPixmapItem *LogImgPixmap;
};

#endif // ABOUT_WINDOW_H

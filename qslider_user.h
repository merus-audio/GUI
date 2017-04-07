#ifndef QSLIDER_USER_H
#define QSLIDER_USER_H

#include <QtWidgets/qslider.h>
#include <QKeyEvent>
#include <QFocusFrame>

class QSlider_USER : public QSlider
{
    //Q_OBJECT

public:
    explicit QSlider_USER(QWidget *parent);
    explicit QSlider_USER(Qt::Orientation orientation, QWidget *parent);
private:
    QFocusFrame *my_focus_frame;
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
};

#endif // QSLIDER_USER_H

#ifndef QWIDJETPAINTER_H
#define QWIDJETPAINTER_H

#include <QWidget>
#include <QLabel>
#include <QString>

namespace Ui {
class QWidjetPainter;
}

class QWidjetPainter : public QWidget
{
    Q_OBJECT

public:
    explicit QWidjetPainter(QWidget *parent = 0);
    ~QWidjetPainter();
    void setValue(qreal new_pos);
    qreal getValue(void);
    void setName(QString new_name);
    void set_new_scale_threshold(int new_min_pos, int new_max_pos);


private:
    Ui::QWidjetPainter *ui;
    // ------pointer ----------
    qreal max_point_engle;
    qreal min_point_engle;
    qreal max_point_position;
    qreal min_point_position;
    qreal k_pointer_position;
    qreal b_pointer_position;
    qreal ind_threshold;
    //--------------------------
    qreal k_shadow;
    qreal b_shadow;
    qreal pos;
    qreal df_shadow(void);
    //---------------------------
    //QLabel *data_show_lable;
     QLabel data_show_lable;
     QString widget_name;

protected:
    void paintEvent(QPaintEvent*);


};

#endif // QWIDJETPAINTER_H

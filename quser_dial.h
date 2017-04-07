#ifndef QUSER_DIAL_H
#define QUSER_DIAL_H

#include <QWidget>


#define DEFAULT_NUM_POS            3
#define DEFAULT_START_ANGLE_RIGHT  315
#define DEFAULT_STOP_ANGLE_RIGHT   225
#define DEFAULT_START_ANGLE_LEFT   45
#define DEFAULT_STOP_ANGLE_LEFT   135


typedef enum{
    DIAL_RIGHT,
    DIAL_LEFT
}USER_DIAL_SIDE;

namespace Ui {
class quser_dial;
}

class quser_dial : public QWidget
{
    Q_OBJECT

public:
    explicit quser_dial(QWidget *parent = 0);
    ~quser_dial();
    void setSide(USER_DIAL_SIDE set_user_side);
    bool set_position(int position);
    void init_switch_position(int num_position, qreal angle_start, qreal angle_stop);
    void set_default_switch_position(void);
    int get_pos_pointer(void);

private:
    Ui::quser_dial *ui;

    USER_DIAL_SIDE user_side;
    QImage image_layer_1_left;
    QImage image_layer_1_right;
    QImage image_layer_1;
    QImage image_layer_2;
    QImage image_pointer;
    QSize img_size_layer_1_left;
    QSize img_size_layer_1_right;
    QSize img_size_layer_2;
    QSize img_size_pointer;
    QPointF Point_layer_1;
    QPointF Point_layer_2;
    QPointF Point_pointer;

    int temp_pointer_pos; // temporary swither position
    int max_num_position; // number position 0...(max_num_position-1)
    qreal start_angle;    //  angle position 0
    qreal stop_angle;    //  angle position max_num_position-1
    qreal d_angle;        // delta angle


protected:
    void paintEvent(QPaintEvent*);
    void mousePressEvent( QMouseEvent * event );
signals:
    void mouse_clic(int pos);

};

#endif // QUSER_DIAL_H

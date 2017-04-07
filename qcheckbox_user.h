#ifndef QCHECKBOX_USER_H
#define QCHECKBOX_USER_H


#include <QtWidgets/qcheckbox.h>
#include <QKeyEvent>
#include <QFocusFrame>


class QCheckBox_User : public QCheckBox
{
    //Q_OBJECT

public:
    explicit QCheckBox_User(QWidget *parent = Q_NULLPTR);
    explicit QCheckBox_User(const QString &text, QWidget *parent = Q_NULLPTR);

private:
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
};

#endif // QCHECKBOX_USER_H


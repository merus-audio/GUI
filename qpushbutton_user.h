#ifndef QPUSHBOTTON_USER_H
#define QPUSHBOTTON_USER_H

#include <QtWidgets/qpushbutton.h>
#include <QKeyEvent>
#include <QFocusFrame>


class QPushBotton_User : public QPushButton
{
    //Q_OBJECT

public:
    explicit QPushBotton_User(QWidget *parent = Q_NULLPTR);
    explicit QPushBotton_User(const QString &text, QWidget *parent = Q_NULLPTR);
    QPushBotton_User(const QIcon& icon, const QString &text, QWidget *parent = Q_NULLPTR);
private:
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
};

#endif // QPUSHBOTTON_USER_H

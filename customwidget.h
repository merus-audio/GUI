#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include<QSpinBox>
#include<QLabel>
#include<QCheckBox>
#include<QSignalMapper>


class RegBrowRow : public QWidget
{
    Q_OBJECT
public:
    RegBrowRow(QWidget *parent = 0);
    QLabel *addnr;
    QLabel *bit[8];
    QCheckBox *bitcheckbox[8];
    QLabel *namen;
    QLabel *nRW;
    QLabel *descrn;
    QLabel *horlabel;
    int bit_mask;

signals:
    void clicked(int k);
    void writeBit(int bit, int addr, bool value);

public slots:
    void fill(QList<QString> str, unsigned char reg);
    void on_checkbox_clicked(int k);


private slots:

protected:

private:
    QSignalMapper *signalMapper;

};

#endif // CUSTOMWIDGET_H


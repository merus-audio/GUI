#ifndef QTHREAD_READREG_H
#define QTHREAD_READREG_H

#include <QMainWindow>
#include <qscomthreadsave.h>
#include <QThread>
#include <QMutex>

// Thread state
typedef enum{
    THREAD_RUN,
    THREAD_STOP
}THREAD_STATE;

// Device state
typedef enum{
    DEVICE_OK,
    DEVICE_ERROR,
    DEVICE_FTDI_ERROR
}DEVICE_STATE;



class QThread_ReadReg: public QThread
{
        Q_OBJECT
public:
    QThread_ReadReg(){
        thread_state_mutex = new QMutex;
        set_thread_state(THREAD_RUN);
        start();
    };
    void update_reg(void);
    void set_thread_state(THREAD_STATE new_state);
    THREAD_STATE get_thread_state(void);
    void run();
private:
    QMutex *thread_state_mutex;
    THREAD_STATE thread_state;
public:
signals:
    //void update_register_signal(unsigned char *reg_map);
    void update_register_signal(unsigned char *reg_map, int  device_state);
};


#endif // QTHREAD_READREG_H

#ifndef SCOM_THREAD_SAVE_H
#define SCOM_THREAD_SAVE_H

#include <QMutex>
#include <QMutexLocker>
#include "scom.h"

class QScomThreadSave
{

private:
    scom Scom_ex;
    QMutex *scom_save_mutex;
public:
    QScomThreadSave();
    ~QScomThreadSave();
    void write(int StartReg, int writes, unsigned char *write);
    void read(int address, int reads, unsigned char *buf);
    void open(bool ct);
    void fuse(unsigned char address, unsigned char *fb_data);
    int get_spi_status(void);
};

#endif // SCOM_THREAD_SAVE_H

#include "qscomthreadsave.h"
#include <QMutex>
#include <QMutexLocker>
#include "scom.h"

QScomThreadSave::QScomThreadSave(){
    scom_save_mutex=new QMutex;
   // Scom_ex = new scom();
}
QScomThreadSave::~QScomThreadSave(){
    //delete Scom_ex;
    delete scom_save_mutex;
}


void QScomThreadSave::write(int StartReg, int writes, unsigned char *write){
    QMutexLocker my_QMutexLocker(scom_save_mutex);
    Scom_ex.write(StartReg, writes, write);
}

void QScomThreadSave::read(int address, int reads, unsigned char *buf){
     QMutexLocker my_QMutexLocker(scom_save_mutex);
     Scom_ex.read(address, reads, buf);
}


void QScomThreadSave::open(bool ct){
     QMutexLocker my_QMutexLocker(scom_save_mutex);
     Scom_ex.open(ct);
}


void QScomThreadSave::fuse(unsigned char address, unsigned char *fb_data){
     QMutexLocker my_QMutexLocker(scom_save_mutex);
     Scom_ex.fuse(address, fb_data);
}

int QScomThreadSave::get_spi_status(void){
    QMutexLocker my_QMutexLocker(scom_save_mutex);
    return Scom_ex.spiNotOK;
}

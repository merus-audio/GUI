#include "qthread_readreg.h"
#include "merus_mode_reg_definition.h"


extern QScomThreadSave DevCom;
extern QVector< QVector<QString> >  mode_reg;

void QThread_ReadReg::run(){
    update_reg();
}

// Infinite loop for read register
void QThread_ReadReg::update_reg(void){
    unsigned char buff_read[128];
    // main action of thread
    while(1){
        msleep(20);
        // if main window close - stop thread
        if(get_thread_state()==THREAD_STOP){
            return;
        }

        if(DevCom.get_spi_status()){
            emit update_register_signal(&buff_read[0], DEVICE_FTDI_ERROR);
            continue;
        }
       // DevCom.read(MODE_REG_START_AADDRES,MODE_REG_SIZE,&buff_read[0]);
        DevCom.read(0,128,&buff_read[0]);
        if((buff_read[127]!=64)&&
                (buff_read[127]!=65)&&
                (buff_read[127]!=68)&&
                (buff_read[127]!=69)&&
                (buff_read[127]!=71)&&
                (buff_read[127]!=72)&&
                (buff_read[127]!=80))
        {
        //if(buff_read[0]==255){
            emit update_register_signal(&buff_read[0], DEVICE_ERROR);
            continue;
        };

        emit update_register_signal(&buff_read[0], DEVICE_OK);

    }
}

void QThread_ReadReg::set_thread_state(THREAD_STATE new_state){
 QMutexLocker my_QMutexLocker(thread_state_mutex);
 thread_state=new_state;
}


THREAD_STATE QThread_ReadReg::get_thread_state(void){
 QMutexLocker my_QMutexLocker(thread_state_mutex);
 return thread_state;
}

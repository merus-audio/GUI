/****************************************************************************
** Meta object code from reading C++ file 'devicecontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../devicecontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceControl_t {
    QByteArrayData data[65];
    char stringdata0[1091];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceControl_t qt_meta_stringdata_DeviceControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DeviceControl"
QT_MOC_LITERAL(1, 14, 10), // "DAPclicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "sendVol"
QT_MOC_LITERAL(4, 34, 14), // "unsigned char*"
QT_MOC_LITERAL(5, 49, 3), // "buf"
QT_MOC_LITERAL(6, 53, 9), // "sendCHthr"
QT_MOC_LITERAL(7, 63, 15), // "sendAtkDecState"
QT_MOC_LITERAL(8, 79, 18), // "sendLimitMuteState"
QT_MOC_LITERAL(9, 98, 18), // "sendAudioProcState"
QT_MOC_LITERAL(10, 117, 20), // "sendAudioInModeState"
QT_MOC_LITERAL(11, 138, 24), // "sendAudioProcEnableState"
QT_MOC_LITERAL(12, 163, 13), // "send_reg_bank"
QT_MOC_LITERAL(13, 177, 8), // "Reg_bank"
QT_MOC_LITERAL(14, 186, 17), // "send_reg_bank_DAP"
QT_MOC_LITERAL(15, 204, 12), // "upd_reg_bank"
QT_MOC_LITERAL(16, 217, 14), // "windowIsClosed"
QT_MOC_LITERAL(17, 232, 10), // "getGUIvals"
QT_MOC_LITERAL(18, 243, 14), // "writeMasterVol"
QT_MOC_LITERAL(19, 258, 4), // "wbuf"
QT_MOC_LITERAL(20, 263, 11), // "writeCHvols"
QT_MOC_LITERAL(21, 275, 11), // "writeCHthrs"
QT_MOC_LITERAL(22, 287, 18), // "getAttackDecayByte"
QT_MOC_LITERAL(23, 306, 4), // "rbuf"
QT_MOC_LITERAL(24, 311, 20), // "writeAttackDecayByte"
QT_MOC_LITERAL(25, 332, 16), // "getMuteLimitByte"
QT_MOC_LITERAL(26, 349, 18), // "writeMuteLimitByte"
QT_MOC_LITERAL(27, 368, 16), // "getAudioProcByte"
QT_MOC_LITERAL(28, 385, 18), // "writeAudioProcByte"
QT_MOC_LITERAL(29, 404, 21), // "getAudioInModeExtByte"
QT_MOC_LITERAL(30, 426, 23), // "writeAudioInModeExtByte"
QT_MOC_LITERAL(31, 450, 18), // "getAudioInModeByte"
QT_MOC_LITERAL(32, 469, 20), // "writeAudioInModeByte"
QT_MOC_LITERAL(33, 490, 10), // "getI2Sdata"
QT_MOC_LITERAL(34, 501, 13), // "writeI2Sdata3"
QT_MOC_LITERAL(35, 515, 4), // "addr"
QT_MOC_LITERAL(36, 520, 15), // "writeBitregBrow"
QT_MOC_LITERAL(37, 536, 3), // "bit"
QT_MOC_LITERAL(38, 540, 5), // "value"
QT_MOC_LITERAL(39, 546, 14), // "regBrow_closed"
QT_MOC_LITERAL(40, 561, 28), // "do_pushButtonProgram_clicked"
QT_MOC_LITERAL(41, 590, 25), // "do_pushButtonLoad_clicked"
QT_MOC_LITERAL(42, 616, 25), // "do_pushButtonSave_clicked"
QT_MOC_LITERAL(43, 642, 24), // "do_pushButtonRec_clicked"
QT_MOC_LITERAL(44, 667, 30), // "do_menuActionReconnect_clicked"
QT_MOC_LITERAL(45, 698, 28), // "do_menuActionRegBrow_clicked"
QT_MOC_LITERAL(46, 727, 26), // "do_menuActionAbout_clicked"
QT_MOC_LITERAL(47, 754, 18), // "get_dev_status_inc"
QT_MOC_LITERAL(48, 773, 18), // "get_dev_status_pol"
QT_MOC_LITERAL(49, 792, 7), // "reg_map"
QT_MOC_LITERAL(50, 800, 12), // "device_state"
QT_MOC_LITERAL(51, 813, 17), // "calc_modIndex_ch0"
QT_MOC_LITERAL(52, 831, 4), // "modi"
QT_MOC_LITERAL(53, 836, 17), // "calc_modIndex_ch1"
QT_MOC_LITERAL(54, 854, 12), // "set_GUI_idle"
QT_MOC_LITERAL(55, 867, 3), // "pol"
QT_MOC_LITERAL(56, 871, 16), // "read_all_dev_reg"
QT_MOC_LITERAL(57, 888, 25), // "do_pushButton_DAP_clicked"
QT_MOC_LITERAL(58, 914, 15), // "ProgramDefaults"
QT_MOC_LITERAL(59, 930, 13), // "get_fuse_bits"
QT_MOC_LITERAL(60, 944, 41), // "do_menuActionError_Vector_Mon..."
QT_MOC_LITERAL(61, 986, 28), // "button_power_mode_grup_slote"
QT_MOC_LITERAL(62, 1015, 9), // "id_button"
QT_MOC_LITERAL(63, 1025, 31), // "clear_acumulated_error_reg_slot"
QT_MOC_LITERAL(64, 1057, 33) // "on_pushButtonSoftClipping_cli..."

    },
    "DeviceControl\0DAPclicked\0\0sendVol\0"
    "unsigned char*\0buf\0sendCHthr\0"
    "sendAtkDecState\0sendLimitMuteState\0"
    "sendAudioProcState\0sendAudioInModeState\0"
    "sendAudioProcEnableState\0send_reg_bank\0"
    "Reg_bank\0send_reg_bank_DAP\0upd_reg_bank\0"
    "windowIsClosed\0getGUIvals\0writeMasterVol\0"
    "wbuf\0writeCHvols\0writeCHthrs\0"
    "getAttackDecayByte\0rbuf\0writeAttackDecayByte\0"
    "getMuteLimitByte\0writeMuteLimitByte\0"
    "getAudioProcByte\0writeAudioProcByte\0"
    "getAudioInModeExtByte\0writeAudioInModeExtByte\0"
    "getAudioInModeByte\0writeAudioInModeByte\0"
    "getI2Sdata\0writeI2Sdata3\0addr\0"
    "writeBitregBrow\0bit\0value\0regBrow_closed\0"
    "do_pushButtonProgram_clicked\0"
    "do_pushButtonLoad_clicked\0"
    "do_pushButtonSave_clicked\0"
    "do_pushButtonRec_clicked\0"
    "do_menuActionReconnect_clicked\0"
    "do_menuActionRegBrow_clicked\0"
    "do_menuActionAbout_clicked\0"
    "get_dev_status_inc\0get_dev_status_pol\0"
    "reg_map\0device_state\0calc_modIndex_ch0\0"
    "modi\0calc_modIndex_ch1\0set_GUI_idle\0"
    "pol\0read_all_dev_reg\0do_pushButton_DAP_clicked\0"
    "ProgramDefaults\0get_fuse_bits\0"
    "do_menuActionError_Vector_Monitor_clicked\0"
    "button_power_mode_grup_slote\0id_button\0"
    "clear_acumulated_error_reg_slot\0"
    "on_pushButtonSoftClipping_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x06 /* Public */,
       3,    1,  265,    2, 0x06 /* Public */,
       6,    1,  268,    2, 0x06 /* Public */,
       7,    1,  271,    2, 0x06 /* Public */,
       8,    1,  274,    2, 0x06 /* Public */,
       9,    1,  277,    2, 0x06 /* Public */,
      10,    1,  280,    2, 0x06 /* Public */,
      11,    1,  283,    2, 0x06 /* Public */,
      12,    1,  286,    2, 0x06 /* Public */,
      14,    1,  289,    2, 0x06 /* Public */,
      15,    1,  292,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  295,    2, 0x0a /* Public */,
      17,    0,  296,    2, 0x0a /* Public */,
      18,    1,  297,    2, 0x0a /* Public */,
      20,    1,  300,    2, 0x0a /* Public */,
      21,    1,  303,    2, 0x0a /* Public */,
      22,    1,  306,    2, 0x0a /* Public */,
      24,    1,  309,    2, 0x0a /* Public */,
      25,    1,  312,    2, 0x0a /* Public */,
      26,    1,  315,    2, 0x0a /* Public */,
      27,    1,  318,    2, 0x0a /* Public */,
      28,    1,  321,    2, 0x0a /* Public */,
      29,    1,  324,    2, 0x0a /* Public */,
      30,    1,  327,    2, 0x0a /* Public */,
      31,    1,  330,    2, 0x0a /* Public */,
      32,    1,  333,    2, 0x0a /* Public */,
      33,    1,  336,    2, 0x0a /* Public */,
      34,    2,  339,    2, 0x0a /* Public */,
      36,    3,  344,    2, 0x0a /* Public */,
      39,    0,  351,    2, 0x0a /* Public */,
      40,    0,  352,    2, 0x08 /* Private */,
      41,    0,  353,    2, 0x08 /* Private */,
      42,    0,  354,    2, 0x08 /* Private */,
      43,    0,  355,    2, 0x08 /* Private */,
      44,    0,  356,    2, 0x08 /* Private */,
      45,    0,  357,    2, 0x08 /* Private */,
      46,    0,  358,    2, 0x08 /* Private */,
      47,    0,  359,    2, 0x08 /* Private */,
      48,    2,  360,    2, 0x08 /* Private */,
      51,    1,  365,    2, 0x08 /* Private */,
      53,    1,  368,    2, 0x08 /* Private */,
      54,    1,  371,    2, 0x08 /* Private */,
      56,    0,  374,    2, 0x08 /* Private */,
      57,    0,  375,    2, 0x08 /* Private */,
      58,    0,  376,    2, 0x08 /* Private */,
      59,    0,  377,    2, 0x08 /* Private */,
      60,    0,  378,    2, 0x08 /* Private */,
      61,    1,  379,    2, 0x08 /* Private */,
      63,    0,  382,    2, 0x08 /* Private */,
      64,    0,  383,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,   13,
    QMetaType::Void, 0x80000000 | 4,   13,
    QMetaType::Void, 0x80000000 | 4,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4,   19,
    QMetaType::Void, 0x80000000 | 4,   23,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,   19,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   37,   35,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,   49,   50,
    QMetaType::Void, QMetaType::Double,   52,
    QMetaType::Void, QMetaType::Double,   52,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeviceControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceControl *_t = static_cast<DeviceControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DAPclicked(); break;
        case 1: _t->sendVol((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 2: _t->sendCHthr((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 3: _t->sendAtkDecState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 4: _t->sendLimitMuteState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 5: _t->sendAudioProcState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 6: _t->sendAudioInModeState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 7: _t->sendAudioProcEnableState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 8: _t->send_reg_bank((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 9: _t->send_reg_bank_DAP((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 10: _t->upd_reg_bank((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 11: _t->windowIsClosed(); break;
        case 12: _t->getGUIvals(); break;
        case 13: _t->writeMasterVol((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 14: _t->writeCHvols((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 15: _t->writeCHthrs((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 16: _t->getAttackDecayByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 17: _t->writeAttackDecayByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 18: _t->getMuteLimitByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 19: _t->writeMuteLimitByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 20: _t->getAudioProcByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 21: _t->writeAudioProcByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 22: _t->getAudioInModeExtByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 23: _t->writeAudioInModeExtByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 24: _t->getAudioInModeByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 25: _t->writeAudioInModeByte((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 26: _t->getI2Sdata((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 27: _t->writeI2Sdata3((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->writeBitregBrow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->regBrow_closed(); break;
        case 30: _t->do_pushButtonProgram_clicked(); break;
        case 31: _t->do_pushButtonLoad_clicked(); break;
        case 32: _t->do_pushButtonSave_clicked(); break;
        case 33: _t->do_pushButtonRec_clicked(); break;
        case 34: _t->do_menuActionReconnect_clicked(); break;
        case 35: _t->do_menuActionRegBrow_clicked(); break;
        case 36: _t->do_menuActionAbout_clicked(); break;
        case 37: _t->get_dev_status_inc(); break;
        case 38: _t->get_dev_status_pol((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->calc_modIndex_ch0((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: _t->calc_modIndex_ch1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 41: _t->set_GUI_idle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->read_all_dev_reg(); break;
        case 43: _t->do_pushButton_DAP_clicked(); break;
        case 44: _t->ProgramDefaults(); break;
        case 45: { int _r = _t->get_fuse_bits();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 46: _t->do_menuActionError_Vector_Monitor_clicked(); break;
        case 47: _t->button_power_mode_grup_slote((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->clear_acumulated_error_reg_slot(); break;
        case 49: _t->on_pushButtonSoftClipping_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeviceControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::DAPclicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendVol)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendCHthr)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendAtkDecState)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendLimitMuteState)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendAudioProcState)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendAudioInModeState)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::sendAudioProcEnableState)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::send_reg_bank)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::send_reg_bank_DAP)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DeviceControl::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceControl::upd_reg_bank)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject DeviceControl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DeviceControl.data,
      qt_meta_data_DeviceControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeviceControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceControl.stringdata0))
        return static_cast<void*>(const_cast< DeviceControl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DeviceControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void DeviceControl::DAPclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DeviceControl::sendVol(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceControl::sendCHthr(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceControl::sendAtkDecState(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceControl::sendLimitMuteState(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeviceControl::sendAudioProcState(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeviceControl::sendAudioInModeState(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeviceControl::sendAudioProcEnableState(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DeviceControl::send_reg_bank(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DeviceControl::send_reg_bank_DAP(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DeviceControl::upd_reg_bank(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

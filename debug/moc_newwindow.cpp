/****************************************************************************
** Meta object code from reading C++ file 'newwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_newWindow_t {
    QByteArrayData data[67];
    char stringdata0[1213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_newWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_newWindow_t qt_meta_stringdata_newWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "newWindow"
QT_MOC_LITERAL(1, 10, 12), // "windowClosed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "DAPopened"
QT_MOC_LITERAL(4, 34, 16), // "MasterVolChanged"
QT_MOC_LITERAL(5, 51, 14), // "unsigned char*"
QT_MOC_LITERAL(6, 66, 4), // "wbuf"
QT_MOC_LITERAL(7, 71, 13), // "CHvolsChanged"
QT_MOC_LITERAL(8, 85, 13), // "CHthrsChanged"
QT_MOC_LITERAL(9, 99, 21), // "attackDecayByteNeeded"
QT_MOC_LITERAL(10, 121, 4), // "rbuf"
QT_MOC_LITERAL(11, 126, 20), // "attackDecayByteReady"
QT_MOC_LITERAL(12, 147, 19), // "muteLimitByteNeeded"
QT_MOC_LITERAL(13, 167, 18), // "muteLimitByteReady"
QT_MOC_LITERAL(14, 186, 19), // "AudioProcByteNeeded"
QT_MOC_LITERAL(15, 206, 18), // "AudioProcByteReady"
QT_MOC_LITERAL(16, 225, 24), // "AudioInModeExtByteNeeded"
QT_MOC_LITERAL(17, 250, 23), // "AudioInModeExtByteReady"
QT_MOC_LITERAL(18, 274, 21), // "AudioInModeByteNeeded"
QT_MOC_LITERAL(19, 296, 20), // "AudioInModeByteReady"
QT_MOC_LITERAL(20, 317, 21), // "I2SsetupButtonClicked"
QT_MOC_LITERAL(21, 339, 13), // "I2SdataNeeded"
QT_MOC_LITERAL(22, 353, 16), // "I2SdataReadReady"
QT_MOC_LITERAL(23, 370, 13), // "writeI2Sdata2"
QT_MOC_LITERAL(24, 384, 4), // "addr"
QT_MOC_LITERAL(25, 389, 10), // "confirmDAP"
QT_MOC_LITERAL(26, 400, 17), // "initDAsetupDialog"
QT_MOC_LITERAL(27, 418, 7), // "InitVol"
QT_MOC_LITERAL(28, 426, 9), // "InitCHthr"
QT_MOC_LITERAL(29, 436, 15), // "InitAtkDecState"
QT_MOC_LITERAL(30, 452, 18), // "InitLimitMuteState"
QT_MOC_LITERAL(31, 471, 20), // "UpdateAudioProcState"
QT_MOC_LITERAL(32, 492, 11), // "getI2Sdata2"
QT_MOC_LITERAL(33, 504, 24), // "InitAudioProcEnableState"
QT_MOC_LITERAL(34, 529, 12), // "writeI2Sdata"
QT_MOC_LITERAL(35, 542, 20), // "receive_reg_bank_DAP"
QT_MOC_LITERAL(36, 563, 8), // "Reg_bank"
QT_MOC_LITERAL(37, 572, 29), // "on_pushButtonI2SSetup_clicked"
QT_MOC_LITERAL(38, 602, 20), // "on_mrvol_sliderMoved"
QT_MOC_LITERAL(39, 623, 5), // "value"
QT_MOC_LITERAL(40, 629, 22), // "on_ch0thr_valueChanged"
QT_MOC_LITERAL(41, 652, 22), // "on_ch1thr_valueChanged"
QT_MOC_LITERAL(42, 675, 22), // "on_ch2thr_valueChanged"
QT_MOC_LITERAL(43, 698, 22), // "on_ch3thr_valueChanged"
QT_MOC_LITERAL(44, 721, 22), // "on_ch3vol_valueChanged"
QT_MOC_LITERAL(45, 744, 22), // "on_ch2vol_valueChanged"
QT_MOC_LITERAL(46, 767, 22), // "on_ch1vol_valueChanged"
QT_MOC_LITERAL(47, 790, 22), // "on_ch0vol_valueChanged"
QT_MOC_LITERAL(48, 813, 20), // "on_atkNormal_clicked"
QT_MOC_LITERAL(49, 834, 18), // "on_atkSlow_clicked"
QT_MOC_LITERAL(50, 853, 18), // "on_atkFast_clicked"
QT_MOC_LITERAL(51, 872, 18), // "on_decFast_clicked"
QT_MOC_LITERAL(52, 891, 20), // "on_decNormal_clicked"
QT_MOC_LITERAL(53, 912, 18), // "on_decSlow_clicked"
QT_MOC_LITERAL(54, 931, 12), // "updateCHthrs"
QT_MOC_LITERAL(55, 944, 12), // "updateCHvols"
QT_MOC_LITERAL(56, 957, 15), // "ctrlAttackDecay"
QT_MOC_LITERAL(57, 973, 13), // "ctrlMuteLimit"
QT_MOC_LITERAL(58, 987, 21), // "on_mrvol_valueChanged"
QT_MOC_LITERAL(59, 1009, 26), // "on_pushButton_Mute_toggled"
QT_MOC_LITERAL(60, 1036, 7), // "checked"
QT_MOC_LITERAL(61, 1044, 29), // "on_pushButton_Limiter_toggled"
QT_MOC_LITERAL(62, 1074, 42), // "on_pushButton_Digital_Audio_e..."
QT_MOC_LITERAL(63, 1117, 44), // "on_pushButton_Audio_Processor..."
QT_MOC_LITERAL(64, 1162, 21), // "on_dial_Attack_switch"
QT_MOC_LITERAL(65, 1184, 7), // "new_pos"
QT_MOC_LITERAL(66, 1192, 20) // "on_dial_Decay_switch"

    },
    "newWindow\0windowClosed\0\0DAPopened\0"
    "MasterVolChanged\0unsigned char*\0wbuf\0"
    "CHvolsChanged\0CHthrsChanged\0"
    "attackDecayByteNeeded\0rbuf\0"
    "attackDecayByteReady\0muteLimitByteNeeded\0"
    "muteLimitByteReady\0AudioProcByteNeeded\0"
    "AudioProcByteReady\0AudioInModeExtByteNeeded\0"
    "AudioInModeExtByteReady\0AudioInModeByteNeeded\0"
    "AudioInModeByteReady\0I2SsetupButtonClicked\0"
    "I2SdataNeeded\0I2SdataReadReady\0"
    "writeI2Sdata2\0addr\0confirmDAP\0"
    "initDAsetupDialog\0InitVol\0InitCHthr\0"
    "InitAtkDecState\0InitLimitMuteState\0"
    "UpdateAudioProcState\0getI2Sdata2\0"
    "InitAudioProcEnableState\0writeI2Sdata\0"
    "receive_reg_bank_DAP\0Reg_bank\0"
    "on_pushButtonI2SSetup_clicked\0"
    "on_mrvol_sliderMoved\0value\0"
    "on_ch0thr_valueChanged\0on_ch1thr_valueChanged\0"
    "on_ch2thr_valueChanged\0on_ch3thr_valueChanged\0"
    "on_ch3vol_valueChanged\0on_ch2vol_valueChanged\0"
    "on_ch1vol_valueChanged\0on_ch0vol_valueChanged\0"
    "on_atkNormal_clicked\0on_atkSlow_clicked\0"
    "on_atkFast_clicked\0on_decFast_clicked\0"
    "on_decNormal_clicked\0on_decSlow_clicked\0"
    "updateCHthrs\0updateCHvols\0ctrlAttackDecay\0"
    "ctrlMuteLimit\0on_mrvol_valueChanged\0"
    "on_pushButton_Mute_toggled\0checked\0"
    "on_pushButton_Limiter_toggled\0"
    "on_pushButton_Digital_Audio_enable_toggled\0"
    "on_pushButton_Audio_Processor_enable_toggled\0"
    "on_dial_Attack_switch\0new_pos\0"
    "on_dial_Decay_switch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_newWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  299,    2, 0x06 /* Public */,
       3,    0,  300,    2, 0x06 /* Public */,
       4,    1,  301,    2, 0x06 /* Public */,
       7,    1,  304,    2, 0x06 /* Public */,
       8,    1,  307,    2, 0x06 /* Public */,
       9,    1,  310,    2, 0x06 /* Public */,
      11,    1,  313,    2, 0x06 /* Public */,
      12,    1,  316,    2, 0x06 /* Public */,
      13,    1,  319,    2, 0x06 /* Public */,
      14,    1,  322,    2, 0x06 /* Public */,
      15,    1,  325,    2, 0x06 /* Public */,
      16,    1,  328,    2, 0x06 /* Public */,
      17,    1,  331,    2, 0x06 /* Public */,
      18,    1,  334,    2, 0x06 /* Public */,
      19,    1,  337,    2, 0x06 /* Public */,
      20,    0,  340,    2, 0x06 /* Public */,
      21,    1,  341,    2, 0x06 /* Public */,
      22,    1,  344,    2, 0x06 /* Public */,
      23,    2,  347,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  352,    2, 0x0a /* Public */,
      26,    0,  353,    2, 0x0a /* Public */,
      27,    1,  354,    2, 0x0a /* Public */,
      28,    1,  357,    2, 0x0a /* Public */,
      29,    1,  360,    2, 0x0a /* Public */,
      30,    1,  363,    2, 0x0a /* Public */,
      31,    1,  366,    2, 0x0a /* Public */,
      32,    1,  369,    2, 0x0a /* Public */,
      33,    1,  372,    2, 0x0a /* Public */,
      34,    2,  375,    2, 0x0a /* Public */,
      35,    1,  380,    2, 0x0a /* Public */,
      37,    0,  383,    2, 0x0a /* Public */,
      38,    1,  384,    2, 0x08 /* Private */,
      40,    0,  387,    2, 0x08 /* Private */,
      41,    0,  388,    2, 0x08 /* Private */,
      42,    0,  389,    2, 0x08 /* Private */,
      43,    0,  390,    2, 0x08 /* Private */,
      44,    0,  391,    2, 0x08 /* Private */,
      45,    0,  392,    2, 0x08 /* Private */,
      46,    0,  393,    2, 0x08 /* Private */,
      47,    0,  394,    2, 0x08 /* Private */,
      48,    0,  395,    2, 0x08 /* Private */,
      49,    0,  396,    2, 0x08 /* Private */,
      50,    0,  397,    2, 0x08 /* Private */,
      51,    0,  398,    2, 0x08 /* Private */,
      52,    0,  399,    2, 0x08 /* Private */,
      53,    0,  400,    2, 0x08 /* Private */,
      54,    0,  401,    2, 0x08 /* Private */,
      55,    0,  402,    2, 0x08 /* Private */,
      56,    0,  403,    2, 0x08 /* Private */,
      57,    0,  404,    2, 0x08 /* Private */,
      58,    1,  405,    2, 0x08 /* Private */,
      59,    1,  408,    2, 0x08 /* Private */,
      61,    1,  411,    2, 0x08 /* Private */,
      62,    1,  414,    2, 0x08 /* Private */,
      63,    1,  417,    2, 0x08 /* Private */,
      64,    1,  420,    2, 0x08 /* Private */,
      66,    1,  423,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   24,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   24,
    QMetaType::Void, 0x80000000 | 5,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void, QMetaType::Int,   65,

       0        // eod
};

void newWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        newWindow *_t = static_cast<newWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowClosed(); break;
        case 1: _t->DAPopened(); break;
        case 2: _t->MasterVolChanged((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 3: _t->CHvolsChanged((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 4: _t->CHthrsChanged((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 5: _t->attackDecayByteNeeded((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 6: _t->attackDecayByteReady((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 7: _t->muteLimitByteNeeded((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 8: _t->muteLimitByteReady((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 9: _t->AudioProcByteNeeded((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 10: _t->AudioProcByteReady((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 11: _t->AudioInModeExtByteNeeded((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 12: _t->AudioInModeExtByteReady((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 13: _t->AudioInModeByteNeeded((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 14: _t->AudioInModeByteReady((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 15: _t->I2SsetupButtonClicked(); break;
        case 16: _t->I2SdataNeeded((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 17: _t->I2SdataReadReady((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 18: _t->writeI2Sdata2((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->confirmDAP(); break;
        case 20: _t->initDAsetupDialog(); break;
        case 21: _t->InitVol((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 22: _t->InitCHthr((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 23: _t->InitAtkDecState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 24: _t->InitLimitMuteState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 25: _t->UpdateAudioProcState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 26: _t->getI2Sdata2((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 27: _t->InitAudioProcEnableState((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 28: _t->writeI2Sdata((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->receive_reg_bank_DAP((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 30: _t->on_pushButtonI2SSetup_clicked(); break;
        case 31: _t->on_mrvol_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_ch0thr_valueChanged(); break;
        case 33: _t->on_ch1thr_valueChanged(); break;
        case 34: _t->on_ch2thr_valueChanged(); break;
        case 35: _t->on_ch3thr_valueChanged(); break;
        case 36: _t->on_ch3vol_valueChanged(); break;
        case 37: _t->on_ch2vol_valueChanged(); break;
        case 38: _t->on_ch1vol_valueChanged(); break;
        case 39: _t->on_ch0vol_valueChanged(); break;
        case 40: _t->on_atkNormal_clicked(); break;
        case 41: _t->on_atkSlow_clicked(); break;
        case 42: _t->on_atkFast_clicked(); break;
        case 43: _t->on_decFast_clicked(); break;
        case 44: _t->on_decNormal_clicked(); break;
        case 45: _t->on_decSlow_clicked(); break;
        case 46: _t->updateCHthrs(); break;
        case 47: _t->updateCHvols(); break;
        case 48: _t->ctrlAttackDecay(); break;
        case 49: _t->ctrlMuteLimit(); break;
        case 50: _t->on_mrvol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_pushButton_Mute_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_pushButton_Limiter_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->on_pushButton_Digital_Audio_enable_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_pushButton_Audio_Processor_enable_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_dial_Attack_switch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->on_dial_Decay_switch((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (newWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::windowClosed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::DAPopened)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::MasterVolChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::CHvolsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::CHthrsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::attackDecayByteNeeded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::attackDecayByteReady)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::muteLimitByteNeeded)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::muteLimitByteReady)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::AudioProcByteNeeded)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::AudioProcByteReady)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::AudioInModeExtByteNeeded)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::AudioInModeExtByteReady)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::AudioInModeByteNeeded)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::AudioInModeByteReady)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::I2SsetupButtonClicked)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::I2SdataNeeded)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::I2SdataReadReady)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (newWindow::*_t)(unsigned char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&newWindow::writeI2Sdata2)) {
                *result = 18;
                return;
            }
        }
    }
}

const QMetaObject newWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_newWindow.data,
      qt_meta_data_newWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *newWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *newWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_newWindow.stringdata0))
        return static_cast<void*>(const_cast< newWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int newWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void newWindow::windowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void newWindow::DAPopened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void newWindow::MasterVolChanged(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void newWindow::CHvolsChanged(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void newWindow::CHthrsChanged(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void newWindow::attackDecayByteNeeded(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void newWindow::attackDecayByteReady(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void newWindow::muteLimitByteNeeded(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void newWindow::muteLimitByteReady(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void newWindow::AudioProcByteNeeded(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void newWindow::AudioProcByteReady(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void newWindow::AudioInModeExtByteNeeded(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void newWindow::AudioInModeExtByteReady(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void newWindow::AudioInModeByteNeeded(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void newWindow::AudioInModeByteReady(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void newWindow::I2SsetupButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void newWindow::I2SdataNeeded(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void newWindow::I2SdataReadReady(unsigned char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void newWindow::writeI2Sdata2(unsigned char * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

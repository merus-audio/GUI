/****************************************************************************
** Meta object code from reading C++ file 'moderegisterbrouser_short.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../moderegisterbrouser_short.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moderegisterbrouser_short.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModeRegisterBrouser_short_t {
    QByteArrayData data[8];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModeRegisterBrouser_short_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModeRegisterBrouser_short_t qt_meta_stringdata_ModeRegisterBrouser_short = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ModeRegisterBrouser_short"
QT_MOC_LITERAL(1, 26, 25), // "click_clear_button_signal"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 31), // "update_register_indication_slot"
QT_MOC_LITERAL(4, 85, 14), // "unsigned char*"
QT_MOC_LITERAL(5, 100, 7), // "reg_map"
QT_MOC_LITERAL(6, 108, 12), // "device_state"
QT_MOC_LITERAL(7, 121, 33) // "on_pushButton_clear_error_cli..."

    },
    "ModeRegisterBrouser_short\0"
    "click_clear_button_signal\0\0"
    "update_register_indication_slot\0"
    "unsigned char*\0reg_map\0device_state\0"
    "on_pushButton_clear_error_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModeRegisterBrouser_short[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void,

       0        // eod
};

void ModeRegisterBrouser_short::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModeRegisterBrouser_short *_t = static_cast<ModeRegisterBrouser_short *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->click_clear_button_signal(); break;
        case 1: _t->update_register_indication_slot((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_clear_error_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModeRegisterBrouser_short::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModeRegisterBrouser_short::click_clear_button_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ModeRegisterBrouser_short::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModeRegisterBrouser_short.data,
      qt_meta_data_ModeRegisterBrouser_short,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModeRegisterBrouser_short::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModeRegisterBrouser_short::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModeRegisterBrouser_short.stringdata0))
        return static_cast<void*>(const_cast< ModeRegisterBrouser_short*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ModeRegisterBrouser_short::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ModeRegisterBrouser_short::click_clear_button_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'registerbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../registerbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegisterBrowser_t {
    QByteArrayData data[19];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterBrowser_t qt_meta_stringdata_RegisterBrowser = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RegisterBrowser"
QT_MOC_LITERAL(1, 16, 11), // "map_to_main"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "k"
QT_MOC_LITERAL(4, 31, 4), // "addr"
QT_MOC_LITERAL(5, 36, 5), // "value"
QT_MOC_LITERAL(6, 42, 14), // "regBrow_closed"
QT_MOC_LITERAL(7, 57, 17), // "regBrow_addr_name"
QT_MOC_LITERAL(8, 75, 9), // "addr_name"
QT_MOC_LITERAL(9, 85, 13), // "csv_read_line"
QT_MOC_LITERAL(10, 99, 14), // "QList<QString>"
QT_MOC_LITERAL(11, 114, 4), // "line"
QT_MOC_LITERAL(12, 119, 13), // "csv_scan_file"
QT_MOC_LITERAL(13, 133, 16), // "receive_reg_bank"
QT_MOC_LITERAL(14, 150, 14), // "unsigned char*"
QT_MOC_LITERAL(15, 165, 8), // "Reg_bank"
QT_MOC_LITERAL(16, 174, 14), // "get_data_array"
QT_MOC_LITERAL(17, 189, 31), // "update_register_indication_slot"
QT_MOC_LITERAL(18, 221, 7) // "reg_map"

    },
    "RegisterBrowser\0map_to_main\0\0k\0addr\0"
    "value\0regBrow_closed\0regBrow_addr_name\0"
    "addr_name\0csv_read_line\0QList<QString>\0"
    "line\0csv_scan_file\0receive_reg_bank\0"
    "unsigned char*\0Reg_bank\0get_data_array\0"
    "update_register_indication_slot\0reg_map"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       6,    0,   61,    2, 0x06 /* Public */,
       7,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   65,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x0a /* Public */,
      16,    1,   72,    2, 0x0a /* Public */,
      17,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    0x80000000 | 10, QMetaType::Int,   11,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 14,   15,
    0x80000000 | 10, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 14,   18,

       0        // eod
};

void RegisterBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegisterBrowser *_t = static_cast<RegisterBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->map_to_main((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->regBrow_closed(); break;
        case 2: _t->regBrow_addr_name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QList<QString> _r = _t->csv_read_line((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->csv_scan_file();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->receive_reg_bank((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        case 6: { QList<QString> _r = _t->get_data_array((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        case 7: _t->update_register_indication_slot((*reinterpret_cast< unsigned char*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RegisterBrowser::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterBrowser::map_to_main)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RegisterBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterBrowser::regBrow_closed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RegisterBrowser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterBrowser::regBrow_addr_name)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RegisterBrowser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RegisterBrowser.data,
      qt_meta_data_RegisterBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegisterBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterBrowser.stringdata0))
        return static_cast<void*>(const_cast< RegisterBrowser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RegisterBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RegisterBrowser::map_to_main(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RegisterBrowser::regBrow_closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void RegisterBrowser::regBrow_addr_name(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

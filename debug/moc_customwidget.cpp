/****************************************************************************
** Meta object code from reading C++ file 'customwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../customwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegBrowRow_t {
    QByteArrayData data[13];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegBrowRow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegBrowRow_t qt_meta_stringdata_RegBrowRow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RegBrowRow"
QT_MOC_LITERAL(1, 11, 7), // "clicked"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 1), // "k"
QT_MOC_LITERAL(4, 22, 8), // "writeBit"
QT_MOC_LITERAL(5, 31, 3), // "bit"
QT_MOC_LITERAL(6, 35, 4), // "addr"
QT_MOC_LITERAL(7, 40, 5), // "value"
QT_MOC_LITERAL(8, 46, 4), // "fill"
QT_MOC_LITERAL(9, 51, 14), // "QList<QString>"
QT_MOC_LITERAL(10, 66, 3), // "str"
QT_MOC_LITERAL(11, 70, 3), // "reg"
QT_MOC_LITERAL(12, 74, 19) // "on_checkbox_clicked"

    },
    "RegBrowRow\0clicked\0\0k\0writeBit\0bit\0"
    "addr\0value\0fill\0QList<QString>\0str\0"
    "reg\0on_checkbox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegBrowRow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    3,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   44,    2, 0x0a /* Public */,
      12,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::UChar,   10,   11,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void RegBrowRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegBrowRow *_t = static_cast<RegBrowRow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->writeBit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->fill((*reinterpret_cast< QList<QString>(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2]))); break;
        case 3: _t->on_checkbox_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RegBrowRow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegBrowRow::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RegBrowRow::*_t)(int , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegBrowRow::writeBit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RegBrowRow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RegBrowRow.data,
      qt_meta_data_RegBrowRow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegBrowRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegBrowRow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegBrowRow.stringdata0))
        return static_cast<void*>(const_cast< RegBrowRow*>(this));
    return QWidget::qt_metacast(_clname);
}

int RegBrowRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RegBrowRow::clicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RegBrowRow::writeBit(int _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

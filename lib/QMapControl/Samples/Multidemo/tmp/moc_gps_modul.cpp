/****************************************************************************
** Meta object code from reading C++ file 'gps_modul.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gps_modul.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gps_modul.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPS_Modul_t {
    QByteArrayData data[5];
    char stringdata[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPS_Modul_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPS_Modul_t qt_meta_stringdata_GPS_Modul = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GPS_Modul"
QT_MOC_LITERAL(1, 10, 12), // "new_position"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "changed"
QT_MOC_LITERAL(4, 32, 4) // "tick"

    },
    "GPS_Modul\0new_position\0\0changed\0tick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPS_Modul[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GPS_Modul::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPS_Modul *_t = static_cast<GPS_Modul *>(_o);
        switch (_id) {
        case 0: _t->new_position((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->changed(); break;
        case 2: _t->tick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPS_Modul::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPS_Modul::new_position)) {
                *result = 0;
            }
        }
        {
            typedef void (GPS_Modul::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPS_Modul::changed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GPS_Modul::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPS_Modul.data,
      qt_meta_data_GPS_Modul,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPS_Modul::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPS_Modul::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPS_Modul.stringdata))
        return static_cast<void*>(const_cast< GPS_Modul*>(this));
    return QObject::qt_metacast(_clname);
}

int GPS_Modul::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GPS_Modul::new_position(QPointF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPS_Modul::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

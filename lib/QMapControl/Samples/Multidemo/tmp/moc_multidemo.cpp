/****************************************************************************
** Meta object code from reading C++ file 'multidemo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/multidemo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multidemo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Multidemo_t {
    QByteArrayData data[18];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Multidemo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Multidemo_t qt_meta_stringdata_Multidemo = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Multidemo"
QT_MOC_LITERAL(1, 10, 4), // "setX"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "setY"
QT_MOC_LITERAL(4, 21, 6), // "zoomIn"
QT_MOC_LITERAL(5, 28, 7), // "zoomOut"
QT_MOC_LITERAL(6, 36, 18), // "geometryClickEvent"
QT_MOC_LITERAL(7, 55, 9), // "Geometry*"
QT_MOC_LITERAL(8, 65, 4), // "geom"
QT_MOC_LITERAL(9, 70, 8), // "coord_px"
QT_MOC_LITERAL(10, 79, 17), // "coordinateClicked"
QT_MOC_LITERAL(11, 97, 18), // "const QMouseEvent*"
QT_MOC_LITERAL(12, 116, 21), // "coordinateClicked_mc2"
QT_MOC_LITERAL(13, 138, 13), // "buttonToggled"
QT_MOC_LITERAL(14, 152, 12), // "toggleFollow"
QT_MOC_LITERAL(15, 165, 9), // "toggleGPS"
QT_MOC_LITERAL(16, 175, 11), // "draggedRect"
QT_MOC_LITERAL(17, 187, 20) // "mouseEventCoordinate"

    },
    "Multidemo\0setX\0\0setY\0zoomIn\0zoomOut\0"
    "geometryClickEvent\0Geometry*\0geom\0"
    "coord_px\0coordinateClicked\0"
    "const QMouseEvent*\0coordinateClicked_mc2\0"
    "buttonToggled\0toggleFollow\0toggleGPS\0"
    "draggedRect\0mouseEventCoordinate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Multidemo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    0,   80,    2, 0x06 /* Public */,
       5,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   82,    2, 0x0a /* Public */,
      10,    2,   87,    2, 0x0a /* Public */,
      12,    2,   92,    2, 0x0a /* Public */,
      13,    1,   97,    2, 0x0a /* Public */,
      14,    1,  100,    2, 0x0a /* Public */,
      15,    1,  103,    2, 0x0a /* Public */,
      16,    1,  106,    2, 0x0a /* Public */,
      17,    2,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QPoint,    8,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QPointF,    2,    2,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QPointF,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QPointF,    2,    2,

       0        // eod
};

void Multidemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Multidemo *_t = static_cast<Multidemo *>(_o);
        switch (_id) {
        case 0: _t->setX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->zoomIn(); break;
        case 3: _t->zoomOut(); break;
        case 4: _t->geometryClickEvent((*reinterpret_cast< Geometry*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 5: _t->coordinateClicked((*reinterpret_cast< const QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 6: _t->coordinateClicked_mc2((*reinterpret_cast< const QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 7: _t->buttonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toggleFollow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleGPS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->draggedRect((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 11: _t->mouseEventCoordinate((*reinterpret_cast< const QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Geometry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Multidemo::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Multidemo::setX)) {
                *result = 0;
            }
        }
        {
            typedef void (Multidemo::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Multidemo::setY)) {
                *result = 1;
            }
        }
        {
            typedef void (Multidemo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Multidemo::zoomIn)) {
                *result = 2;
            }
        }
        {
            typedef void (Multidemo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Multidemo::zoomOut)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Multidemo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Multidemo.data,
      qt_meta_data_Multidemo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Multidemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Multidemo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Multidemo.stringdata))
        return static_cast<void*>(const_cast< Multidemo*>(this));
    return QWidget::qt_metacast(_clname);
}

int Multidemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Multidemo::setX(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Multidemo::setY(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Multidemo::zoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Multidemo::zoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

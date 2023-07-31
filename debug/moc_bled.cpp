/****************************************************************************
** Meta object code from reading C++ file 'bled.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../bled.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BLed_t {
    const uint offsetsAndSize[40];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BLed_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BLed_t qt_meta_stringdata_BLed = {
    {
QT_MOC_LITERAL(0, 4), // "BLed"
QT_MOC_LITERAL(5, 6), // "toggle"
QT_MOC_LITERAL(12, 0), // ""
QT_MOC_LITERAL(13, 2), // "on"
QT_MOC_LITERAL(16, 3), // "off"
QT_MOC_LITERAL(20, 5), // "state"
QT_MOC_LITERAL(26, 5), // "State"
QT_MOC_LITERAL(32, 5), // "shape"
QT_MOC_LITERAL(38, 5), // "Shape"
QT_MOC_LITERAL(44, 4), // "look"
QT_MOC_LITERAL(49, 4), // "Look"
QT_MOC_LITERAL(54, 5), // "color"
QT_MOC_LITERAL(60, 10), // "darkFactor"
QT_MOC_LITERAL(71, 3), // "Off"
QT_MOC_LITERAL(75, 2), // "On"
QT_MOC_LITERAL(78, 11), // "Rectangular"
QT_MOC_LITERAL(90, 8), // "Circular"
QT_MOC_LITERAL(99, 4), // "Flat"
QT_MOC_LITERAL(104, 6), // "Raised"
QT_MOC_LITERAL(111, 6) // "Sunken"

    },
    "BLed\0toggle\0\0on\0off\0state\0State\0shape\0"
    "Shape\0look\0Look\0color\0darkFactor\0Off\0"
    "On\0Rectangular\0Circular\0Flat\0Raised\0"
    "Sunken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BLed[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   35, // properties
       3,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    6 /* Public */,
       3,    0,   33,    2, 0x0a,    7 /* Public */,
       4,    0,   34,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510b, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001510b, uint(-1), 0,
      11, QMetaType::QColor, 0x00015103, uint(-1), 0,
      12, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    2,   75,
       8,    8, 0x0,    2,   79,
      10,   10, 0x0,    3,   83,

 // enum data: key, value
      13, uint(BLed::Off),
      14, uint(BLed::On),
      15, uint(BLed::Rectangular),
      16, uint(BLed::Circular),
      17, uint(BLed::Flat),
      18, uint(BLed::Raised),
      19, uint(BLed::Sunken),

       0        // eod
};

void BLed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BLed *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggle(); break;
        case 1: _t->on(); break;
        case 2: _t->off(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BLed *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< Shape*>(_v) = _t->shape(); break;
        case 2: *reinterpret_cast< Look*>(_v) = _t->look(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->darkFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BLed *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setState(*reinterpret_cast< State*>(_v)); break;
        case 1: _t->setShape(*reinterpret_cast< Shape*>(_v)); break;
        case 2: _t->setLook(*reinterpret_cast< Look*>(_v)); break;
        case 3: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setDarkFactor(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject BLed::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BLed.offsetsAndSize,
    qt_meta_data_BLed,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BLed_t
, QtPrivate::TypeAndForceComplete<State, std::true_type>, QtPrivate::TypeAndForceComplete<Shape, std::true_type>, QtPrivate::TypeAndForceComplete<Look, std::true_type>, QtPrivate::TypeAndForceComplete<QColor, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<BLed, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *BLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BLed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BLed.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

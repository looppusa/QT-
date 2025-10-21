/****************************************************************************
** Meta object code from reading C++ file 'WBSpecWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../WBSpecWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBSpecWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBSpecWindow_t {
    QByteArrayData data[20];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBSpecWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBSpecWindow_t qt_meta_stringdata_WBSpecWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WBSpecWindow"
QT_MOC_LITERAL(1, 13, 29), // "onSpectroVLinePositionChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "value"
QT_MOC_LITERAL(4, 50, 26), // "onSpectroDataViewMouseDown"
QT_MOC_LITERAL(5, 77, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 90, 1), // "e"
QT_MOC_LITERAL(7, 92, 28), // "onWaterfallDataViewMouseDown"
QT_MOC_LITERAL(8, 121, 23), // "onSpectroHAxisMouseDown"
QT_MOC_LITERAL(9, 145, 25), // "onWaterfallHAxisMouseDown"
QT_MOC_LITERAL(10, 171, 25), // "onSpectroMouseDragChanged"
QT_MOC_LITERAL(11, 197, 7), // "WRPoint"
QT_MOC_LITERAL(12, 205, 6), // "begPos"
QT_MOC_LITERAL(13, 212, 6), // "endPos"
QT_MOC_LITERAL(14, 219, 26), // "onSpectroMouseDragReleased"
QT_MOC_LITERAL(15, 246, 27), // "onWaterfallMouseDragChanged"
QT_MOC_LITERAL(16, 274, 28), // "onWaterfallMouseDragReleased"
QT_MOC_LITERAL(17, 303, 26), // "onShowVAxisBoxStateChanged"
QT_MOC_LITERAL(18, 330, 25), // "onShowApexBoxStateChanged"
QT_MOC_LITERAL(19, 356, 22) // "onResetApexButtonClick"

    },
    "WBSpecWindow\0onSpectroVLinePositionChanged\0"
    "\0value\0onSpectroDataViewMouseDown\0"
    "QMouseEvent*\0e\0onWaterfallDataViewMouseDown\0"
    "onSpectroHAxisMouseDown\0"
    "onWaterfallHAxisMouseDown\0"
    "onSpectroMouseDragChanged\0WRPoint\0"
    "begPos\0endPos\0onSpectroMouseDragReleased\0"
    "onWaterfallMouseDragChanged\0"
    "onWaterfallMouseDragReleased\0"
    "onShowVAxisBoxStateChanged\0"
    "onShowApexBoxStateChanged\0"
    "onResetApexButtonClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBSpecWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       8,    1,   83,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      10,    2,   89,    2, 0x08 /* Private */,
      14,    2,   94,    2, 0x08 /* Private */,
      15,    2,   99,    2, 0x08 /* Private */,
      16,    2,  104,    2, 0x08 /* Private */,
      17,    1,  109,    2, 0x08 /* Private */,
      18,    1,  112,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void WBSpecWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBSpecWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSpectroVLinePositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onSpectroDataViewMouseDown((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->onWaterfallDataViewMouseDown((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->onSpectroHAxisMouseDown((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->onWaterfallHAxisMouseDown((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->onSpectroMouseDragChanged((*reinterpret_cast< const WRPoint(*)>(_a[1])),(*reinterpret_cast< const WRPoint(*)>(_a[2]))); break;
        case 6: _t->onSpectroMouseDragReleased((*reinterpret_cast< const WRPoint(*)>(_a[1])),(*reinterpret_cast< const WRPoint(*)>(_a[2]))); break;
        case 7: _t->onWaterfallMouseDragChanged((*reinterpret_cast< const WRPoint(*)>(_a[1])),(*reinterpret_cast< const WRPoint(*)>(_a[2]))); break;
        case 8: _t->onWaterfallMouseDragReleased((*reinterpret_cast< const WRPoint(*)>(_a[1])),(*reinterpret_cast< const WRPoint(*)>(_a[2]))); break;
        case 9: _t->onShowVAxisBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onShowApexBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onResetApexButtonClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBSpecWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBSpecWindow.data,
    qt_meta_data_WBSpecWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBSpecWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBSpecWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBSpecWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBSpecWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

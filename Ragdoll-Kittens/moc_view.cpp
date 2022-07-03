/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyView_t {
    QByteArrayData data[16];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyView_t qt_meta_stringdata_MyView = {
    {
QT_MOC_LITERAL(0, 0, 6), // "MyView"
QT_MOC_LITERAL(1, 7, 10), // "newDrawing"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "save"
QT_MOC_LITERAL(4, 24, 4), // "open"
QT_MOC_LITERAL(5, 29, 4), // "exit"
QT_MOC_LITERAL(6, 34, 9), // "rectangle"
QT_MOC_LITERAL(7, 44, 6), // "circle"
QT_MOC_LITERAL(8, 51, 8), // "triangle"
QT_MOC_LITERAL(9, 60, 3), // "red"
QT_MOC_LITERAL(10, 64, 6), // "orange"
QT_MOC_LITERAL(11, 71, 6), // "yellow"
QT_MOC_LITERAL(12, 78, 5), // "green"
QT_MOC_LITERAL(13, 84, 4), // "blue"
QT_MOC_LITERAL(14, 89, 6), // "purple"
QT_MOC_LITERAL(15, 96, 5) // "black"

    },
    "MyView\0newDrawing\0\0save\0open\0exit\0"
    "rectangle\0circle\0triangle\0red\0orange\0"
    "yellow\0green\0blue\0purple\0black"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
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

       0        // eod
};

void MyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newDrawing(); break;
        case 1: _t->save(); break;
        case 2: _t->open(); break;
        case 3: _t->exit(); break;
        case 4: _t->rectangle(); break;
        case 5: _t->circle(); break;
        case 6: _t->triangle(); break;
        case 7: _t->red(); break;
        case 8: _t->orange(); break;
        case 9: _t->yellow(); break;
        case 10: _t->green(); break;
        case 11: _t->blue(); break;
        case 12: _t->purple(); break;
        case 13: _t->black(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MyView::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_MyView.data,
    qt_meta_data_MyView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int MyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

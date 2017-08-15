/****************************************************************************
** Meta object code from reading C++ file 'user_reserch_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../library/user_reserch_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_reserch_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_reserch_widget_t {
    QByteArrayData data[15];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_reserch_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_reserch_widget_t qt_meta_stringdata_user_reserch_widget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "user_reserch_widget"
QT_MOC_LITERAL(1, 20, 26), // "on_find_pushButton_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 28), // "on_borrow_pushButton_clicked"
QT_MOC_LITERAL(4, 77, 25), // "on_add_pushButton_clicked"
QT_MOC_LITERAL(5, 103, 25), // "on_del_pushButton_clicked"
QT_MOC_LITERAL(6, 129, 29), // "on_connect_pushButton_clicked"
QT_MOC_LITERAL(7, 159, 26), // "on_send_pushButton_clicked"
QT_MOC_LITERAL(8, 186, 16), // "slotDisConnected"
QT_MOC_LITERAL(9, 203, 13), // "slotConnected"
QT_MOC_LITERAL(10, 217, 12), // "slotReadDate"
QT_MOC_LITERAL(11, 230, 9), // "slotError"
QT_MOC_LITERAL(12, 240, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(13, 269, 16), // "slotStateChanged"
QT_MOC_LITERAL(14, 286, 28) // "QAbstractSocket::SocketState"

    },
    "user_reserch_widget\0on_find_pushButton_clicked\0"
    "\0on_borrow_pushButton_clicked\0"
    "on_add_pushButton_clicked\0"
    "on_del_pushButton_clicked\0"
    "on_connect_pushButton_clicked\0"
    "on_send_pushButton_clicked\0slotDisConnected\0"
    "slotConnected\0slotReadDate\0slotError\0"
    "QAbstractSocket::SocketError\0"
    "slotStateChanged\0QAbstractSocket::SocketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_reserch_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void user_reserch_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        user_reserch_widget *_t = static_cast<user_reserch_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_find_pushButton_clicked(); break;
        case 1: _t->on_borrow_pushButton_clicked(); break;
        case 2: _t->on_add_pushButton_clicked(); break;
        case 3: _t->on_del_pushButton_clicked(); break;
        case 4: _t->on_connect_pushButton_clicked(); break;
        case 5: _t->on_send_pushButton_clicked(); break;
        case 6: _t->slotDisConnected(); break;
        case 7: _t->slotConnected(); break;
        case 8: _t->slotReadDate(); break;
        case 9: _t->slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 10: _t->slotStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject user_reserch_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_user_reserch_widget.data,
      qt_meta_data_user_reserch_widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *user_reserch_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_reserch_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_reserch_widget.stringdata0))
        return static_cast<void*>(const_cast< user_reserch_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int user_reserch_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'tcpclient_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../library/tcpclient_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclient_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tcpClient_widget_t {
    QByteArrayData data[13];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tcpClient_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tcpClient_widget_t qt_meta_stringdata_tcpClient_widget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tcpClient_widget"
QT_MOC_LITERAL(1, 17, 13), // "slotConnected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "slotDisConnected"
QT_MOC_LITERAL(4, 49, 26), // "on_send_pushButton_clicked"
QT_MOC_LITERAL(5, 76, 9), // "slotError"
QT_MOC_LITERAL(6, 86, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 115, 16), // "slotStateChanged"
QT_MOC_LITERAL(8, 132, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(9, 161, 29), // "on_connect_pushButton_clicked"
QT_MOC_LITERAL(10, 191, 12), // "slotReadDate"
QT_MOC_LITERAL(11, 204, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 228, 22) // "on_logInButton_clicked"

    },
    "tcpClient_widget\0slotConnected\0\0"
    "slotDisConnected\0on_send_pushButton_clicked\0"
    "slotError\0QAbstractSocket::SocketError\0"
    "slotStateChanged\0QAbstractSocket::SocketState\0"
    "on_connect_pushButton_clicked\0"
    "slotReadDate\0on_pushButton_2_clicked\0"
    "on_logInButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tcpClient_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tcpClient_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tcpClient_widget *_t = static_cast<tcpClient_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotConnected(); break;
        case 1: _t->slotDisConnected(); break;
        case 2: _t->on_send_pushButton_clicked(); break;
        case 3: _t->slotError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->slotStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 5: _t->on_connect_pushButton_clicked(); break;
        case 6: _t->slotReadDate(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_logInButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject tcpClient_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tcpClient_widget.data,
      qt_meta_data_tcpClient_widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tcpClient_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcpClient_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tcpClient_widget.stringdata0))
        return static_cast<void*>(const_cast< tcpClient_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tcpClient_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

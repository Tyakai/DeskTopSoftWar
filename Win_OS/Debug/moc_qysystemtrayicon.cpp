/****************************************************************************
** Meta object code from reading C++ file 'qysystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qysystemtrayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qysystemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QYSystemTrayIcon_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QYSystemTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QYSystemTrayIcon_t qt_meta_stringdata_QYSystemTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QYSystemTrayIcon"
QT_MOC_LITERAL(1, 17, 15), // "tray_icon_event"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "nType"
QT_MOC_LITERAL(4, 40, 16), // "tray_icon_active"
QT_MOC_LITERAL(5, 57, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(6, 91, 6), // "reason"
QT_MOC_LITERAL(7, 98, 24), // "tray_icon_menu_triggered"
QT_MOC_LITERAL(8, 123, 8), // "QAction*"
QT_MOC_LITERAL(9, 132, 6) // "action"

    },
    "QYSystemTrayIcon\0tray_icon_event\0\0"
    "nType\0tray_icon_active\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0tray_icon_menu_triggered\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QYSystemTrayIcon[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QYSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QYSystemTrayIcon *_t = static_cast<QYSystemTrayIcon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tray_icon_event((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tray_icon_active((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 2: _t->tray_icon_menu_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QYSystemTrayIcon::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QYSystemTrayIcon::tray_icon_event)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QYSystemTrayIcon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QYSystemTrayIcon.data,
      qt_meta_data_QYSystemTrayIcon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QYSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QYSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QYSystemTrayIcon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QYSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QYSystemTrayIcon::tray_icon_event(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}


QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'visitwindows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eJournalDesktop/visitwindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visitwindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisitWindows_t {
    QByteArrayData data[6];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisitWindows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisitWindows_t qt_meta_stringdata_VisitWindows = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VisitWindows"
QT_MOC_LITERAL(1, 13, 11), // "closeSignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 30), // "on_studentSearchFilter_clicked"
QT_MOC_LITERAL(4, 57, 34), // "on_departamentSearchFilter_cl..."
QT_MOC_LITERAL(5, 92, 27) // "on_AddNewDateButton_clicked"

    },
    "VisitWindows\0closeSignal\0\0"
    "on_studentSearchFilter_clicked\0"
    "on_departamentSearchFilter_clicked\0"
    "on_AddNewDateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisitWindows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VisitWindows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VisitWindows *_t = static_cast<VisitWindows *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeSignal(); break;
        case 1: _t->on_studentSearchFilter_clicked(); break;
        case 2: _t->on_departamentSearchFilter_clicked(); break;
        case 3: _t->on_AddNewDateButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VisitWindows::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VisitWindows::closeSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VisitWindows::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VisitWindows.data,
      qt_meta_data_VisitWindows,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VisitWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisitWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VisitWindows.stringdata0))
        return static_cast<void*>(const_cast< VisitWindows*>(this));
    return QWidget::qt_metacast(_clname);
}

int VisitWindows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void VisitWindows::closeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'studentdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eJournalDesktop/studentdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StudentDisplay_t {
    QByteArrayData data[6];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StudentDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StudentDisplay_t qt_meta_stringdata_StudentDisplay = {
    {
QT_MOC_LITERAL(0, 0, 14), // "StudentDisplay"
QT_MOC_LITERAL(1, 15, 17), // "tableContextClick"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "pos"
QT_MOC_LITERAL(4, 38, 17), // "onStudentEditCall"
QT_MOC_LITERAL(5, 56, 24) // "on_addstudentBtn_clicked"

    },
    "StudentDisplay\0tableContextClick\0\0pos\0"
    "onStudentEditCall\0on_addstudentBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StudentDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StudentDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StudentDisplay *_t = static_cast<StudentDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tableContextClick((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->onStudentEditCall(); break;
        case 2: _t->on_addstudentBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject StudentDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StudentDisplay.data,
      qt_meta_data_StudentDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StudentDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StudentDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StudentDisplay.stringdata0))
        return static_cast<void*>(const_cast< StudentDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int StudentDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

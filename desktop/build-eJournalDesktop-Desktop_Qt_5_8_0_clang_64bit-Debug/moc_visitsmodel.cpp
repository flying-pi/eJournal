/****************************************************************************
** Meta object code from reading C++ file 'visitsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eJournalDesktop/models/visitsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visitsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisitsModel_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisitsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisitsModel_t qt_meta_stringdata_VisitsModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VisitsModel"
QT_MOC_LITERAL(1, 12, 13), // "informationID"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "informationdate"
QT_MOC_LITERAL(4, 43, 20), // "informationstudentID"
QT_MOC_LITERAL(5, 64, 20) // "informationisPresent"

    },
    "VisitsModel\0informationID\0\0informationdate\0"
    "informationstudentID\0informationisPresent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisitsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x00 /* Private */,
       3,    0,   35,    2, 0x00 /* Private */,
       4,    0,   36,    2, 0x00 /* Private */,
       5,    0,   37,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void VisitsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VisitsModel *_t = static_cast<VisitsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->informationID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->informationdate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->informationstudentID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->informationisPresent();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject VisitsModel::staticMetaObject = {
    { &BaseModel::staticMetaObject, qt_meta_stringdata_VisitsModel.data,
      qt_meta_data_VisitsModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VisitsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisitsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VisitsModel.stringdata0))
        return static_cast<void*>(const_cast< VisitsModel*>(this));
    return BaseModel::qt_metacast(_clname);
}

int VisitsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

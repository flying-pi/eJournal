/****************************************************************************
** Meta object code from reading C++ file 'studentmodels.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eJournalDesktop/models/studentmodels.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentmodels.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StudentModels_t {
    QByteArrayData data[21];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StudentModels_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StudentModels_t qt_meta_stringdata_StudentModels = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StudentModels"
QT_MOC_LITERAL(1, 14, 20), // "informationfirstName"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "informationmidlName"
QT_MOC_LITERAL(4, 56, 21), // "informationsecondName"
QT_MOC_LITERAL(5, 78, 19), // "informationbornDate"
QT_MOC_LITERAL(6, 98, 17), // "informationgender"
QT_MOC_LITERAL(7, 116, 20), // "informationgaderbook"
QT_MOC_LITERAL(8, 137, 24), // "informationacademicGroup"
QT_MOC_LITERAL(9, 162, 21), // "informationisContract"
QT_MOC_LITERAL(10, 184, 17), // "informationadress"
QT_MOC_LITERAL(11, 202, 23), // "informationregistration"
QT_MOC_LITERAL(12, 226, 27), // "informationtelephoneNumbers"
QT_MOC_LITERAL(13, 254, 16), // "informationemail"
QT_MOC_LITERAL(14, 271, 17), // "informationgroupT"
QT_MOC_LITERAL(15, 289, 6), // "torert"
QT_MOC_LITERAL(16, 296, 16), // "RegistrationType"
QT_MOC_LITERAL(17, 313, 8), // "eKharkiv"
QT_MOC_LITERAL(18, 322, 14), // "eKharkivHostel"
QT_MOC_LITERAL(19, 337, 13), // "eKharkivRgion"
QT_MOC_LITERAL(20, 351, 6) // "eOther"

    },
    "StudentModels\0informationfirstName\0\0"
    "informationmidlName\0informationsecondName\0"
    "informationbornDate\0informationgender\0"
    "informationgaderbook\0informationacademicGroup\0"
    "informationisContract\0informationadress\0"
    "informationregistration\0"
    "informationtelephoneNumbers\0"
    "informationemail\0informationgroupT\0"
    "torert\0RegistrationType\0eKharkiv\0"
    "eKharkivHostel\0eKharkivRgion\0eOther"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StudentModels[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       1,   98, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x00 /* Private */,
       3,    0,   85,    2, 0x00 /* Private */,
       4,    0,   86,    2, 0x00 /* Private */,
       5,    0,   87,    2, 0x00 /* Private */,
       6,    0,   88,    2, 0x00 /* Private */,
       7,    0,   89,    2, 0x00 /* Private */,
       8,    0,   90,    2, 0x00 /* Private */,
       9,    0,   91,    2, 0x00 /* Private */,
      10,    0,   92,    2, 0x00 /* Private */,
      11,    0,   93,    2, 0x00 /* Private */,
      12,    0,   94,    2, 0x00 /* Private */,
      13,    0,   95,    2, 0x00 /* Private */,
      14,    0,   96,    2, 0x00 /* Private */,
      15,    0,   97,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,

 // enums: name, flags, count, data
      16, 0x0,    4,  102,

 // enum data: key, value
      17, uint(StudentModels::eKharkiv),
      18, uint(StudentModels::eKharkivHostel),
      19, uint(StudentModels::eKharkivRgion),
      20, uint(StudentModels::eOther),

       0        // eod
};

void StudentModels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StudentModels *_t = static_cast<StudentModels *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->informationfirstName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->informationmidlName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->informationsecondName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->informationbornDate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->informationgender();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->informationgaderbook();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->informationacademicGroup();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->informationisContract();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->informationadress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->informationregistration();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->informationtelephoneNumbers();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->informationemail();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->informationgroupT();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: _t->torert(); break;
        default: ;
        }
    }
}

const QMetaObject StudentModels::staticMetaObject = {
    { &BaseModel::staticMetaObject, qt_meta_stringdata_StudentModels.data,
      qt_meta_data_StudentModels,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StudentModels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StudentModels::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StudentModels.stringdata0))
        return static_cast<void*>(const_cast< StudentModels*>(this));
    return BaseModel::qt_metacast(_clname);
}

int StudentModels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseModel::qt_metacall(_c, _id, _a);
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

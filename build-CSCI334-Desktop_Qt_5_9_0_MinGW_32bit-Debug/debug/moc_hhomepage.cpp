/****************************************************************************
** Meta object code from reading C++ file 'hhomepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CSCI334/hhomepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hhomepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Hhomepage_t {
    QByteArrayData data[12];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hhomepage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hhomepage_t qt_meta_stringdata_Hhomepage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Hhomepage"
QT_MOC_LITERAL(1, 10, 18), // "on_Log_out_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "on_search_clicked"
QT_MOC_LITERAL(4, 48, 17), // "on_Vissue_clicked"
QT_MOC_LITERAL(5, 66, 23), // "on_commitButton_clicked"
QT_MOC_LITERAL(6, 90, 23), // "on_issuebButton_clicked"
QT_MOC_LITERAL(7, 114, 26), // "on_issue_itemDoubleClicked"
QT_MOC_LITERAL(8, 141, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 158, 4), // "item"
QT_MOC_LITERAL(10, 163, 25), // "on_code_itemDoubleClicked"
QT_MOC_LITERAL(11, 189, 22) // "on_radioButton_clicked"

    },
    "Hhomepage\0on_Log_out_clicked\0\0"
    "on_search_clicked\0on_Vissue_clicked\0"
    "on_commitButton_clicked\0on_issuebButton_clicked\0"
    "on_issue_itemDoubleClicked\0QListWidgetItem*\0"
    "item\0on_code_itemDoubleClicked\0"
    "on_radioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hhomepage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void Hhomepage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hhomepage *_t = static_cast<Hhomepage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Log_out_clicked(); break;
        case 1: _t->on_search_clicked(); break;
        case 3: _t->on_commitButton_clicked(); break;
        case 4: _t->on_issuebButton_clicked(); break;
        case 5: _t->on_issue_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_code_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_radioButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Hhomepage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Hhomepage.data,
      qt_meta_data_Hhomepage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Hhomepage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hhomepage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Hhomepage.stringdata0))
        return static_cast<void*>(const_cast< Hhomepage*>(this));
    return QDialog::qt_metacast(_clname);
}

int Hhomepage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

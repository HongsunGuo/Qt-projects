/****************************************************************************
** Meta object code from reading C++ file 'qSanityChkDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qSanityChkDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSanityChkDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSanityChkDlg_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSanityChkDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSanityChkDlg_t qt_meta_stringdata_qSanityChkDlg = {
    {
QT_MOC_LITERAL(0, 0, 13), // "qSanityChkDlg"
QT_MOC_LITERAL(1, 14, 6), // "accept"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "reject"
QT_MOC_LITERAL(4, 29, 13), // "onRelayOpened"
QT_MOC_LITERAL(5, 43, 6), // "isOpen"
QT_MOC_LITERAL(6, 50, 12), // "onDAQStarted"
QT_MOC_LITERAL(7, 63, 13) // "onARBSelected"

    },
    "qSanityChkDlg\0accept\0\0reject\0onRelayOpened\0"
    "isOpen\0onDAQStarted\0onARBSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSanityChkDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSanityChkDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSanityChkDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->onRelayOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onDAQStarted(); break;
        case 4: _t->onARBSelected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSanityChkDlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_qSanityChkDlg.data,
    qt_meta_data_qSanityChkDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSanityChkDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSanityChkDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSanityChkDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qSanityChkDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Projekt3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Projekt3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Projekt3_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Projekt3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Projekt3_t qt_meta_stringdata_Projekt3 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Projekt3"
QT_MOC_LITERAL(1, 9, 10), // "dodajOkno2"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "rysujListe"
QT_MOC_LITERAL(4, 32, 12), // "wyswietlInfo"
QT_MOC_LITERAL(5, 45, 4), // "usun"
QT_MOC_LITERAL(6, 50, 13), // "zapiszDoPliku"
QT_MOC_LITERAL(7, 64, 11), // "wczytajPlik"
QT_MOC_LITERAL(8, 76, 15), // "wyswietlObrazek"
QT_MOC_LITERAL(9, 92, 7), // "wyjscie"
QT_MOC_LITERAL(10, 100, 6) // "edytuj"

    },
    "Projekt3\0dodajOkno2\0\0rysujListe\0"
    "wyswietlInfo\0usun\0zapiszDoPliku\0"
    "wczytajPlik\0wyswietlObrazek\0wyjscie\0"
    "edytuj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Projekt3[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void Projekt3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Projekt3 *_t = static_cast<Projekt3 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dodajOkno2(); break;
        case 1: _t->rysujListe(); break;
        case 2: _t->wyswietlInfo(); break;
        case 3: _t->usun(); break;
        case 4: _t->zapiszDoPliku(); break;
        case 5: _t->wczytajPlik(); break;
        case 6: _t->wyswietlObrazek(); break;
        case 7: _t->wyjscie(); break;
        case 8: _t->edytuj(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Projekt3::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Projekt3.data,
      qt_meta_data_Projekt3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Projekt3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Projekt3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Projekt3.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Projekt3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

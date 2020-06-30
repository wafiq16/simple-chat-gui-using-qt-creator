/****************************************************************************
** Meta object code from reading C++ file 'handler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../jaringan_komputer/handler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_handler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      23,    8,    8,    8, 0x05,
      36,    8,    8,    8, 0x05,
      47,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,    8,    8,    8, 0x0a,
      76,    8,    8,    8, 0x0a,
      95,    8,    8,    8, 0x0a,
     122,    8,    8,    8, 0x0a,
     149,    8,    8,    8, 0x0a,
     166,    8,    8,    8, 0x0a,
     183,    8,    8,    8, 0x0a,
     203,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_handler[] = {
    "handler\0\0getProtokol()\0getPilihan()\0"
    "getPesan()\0getIP()\0on_Connect_clicked()\0"
    "on_Kirim_clicked()\0on_Isi_pesan_textChanged()\0"
    "on_IP_tujuan_textChanged()\0on_Tcp_clicked()\0"
    "on_Udp_clicked()\0on_Server_clicked()\0"
    "on_Client_clicked()\0"
};

void handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        handler *_t = static_cast<handler *>(_o);
        switch (_id) {
        case 0: _t->getProtokol(); break;
        case 1: _t->getPilihan(); break;
        case 2: _t->getPesan(); break;
        case 3: _t->getIP(); break;
        case 4: _t->on_Connect_clicked(); break;
        case 5: _t->on_Kirim_clicked(); break;
        case 6: _t->on_Isi_pesan_textChanged(); break;
        case 7: _t->on_IP_tujuan_textChanged(); break;
        case 8: _t->on_Tcp_clicked(); break;
        case 9: _t->on_Udp_clicked(); break;
        case 10: _t->on_Server_clicked(); break;
        case 11: _t->on_Client_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData handler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject handler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_handler,
      qt_meta_data_handler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &handler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *handler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_handler))
        return static_cast<void*>(const_cast< handler*>(this));
    return QWidget::qt_metacast(_clname);
}

int handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void handler::getProtokol()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void handler::getPilihan()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void handler::getPesan()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void handler::getIP()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE

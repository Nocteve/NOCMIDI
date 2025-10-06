/****************************************************************************
** Meta object code from reading C++ file 'MIDIWithGui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MIDIWithGui.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MIDIWithGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS = QtMocHelpers::stringData(
    "MIDIWithGui",
    "clickWhiteKey",
    "",
    "i",
    "clickBlackKey",
    "changeTimbre",
    "changeMode",
    "changePitchA",
    "changePitcha"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[14];
    char stringdata5[13];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS_t qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "MIDIWithGui"
        QT_MOC_LITERAL(12, 13),  // "clickWhiteKey"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 1),  // "i"
        QT_MOC_LITERAL(29, 13),  // "clickBlackKey"
        QT_MOC_LITERAL(43, 12),  // "changeTimbre"
        QT_MOC_LITERAL(56, 10),  // "changeMode"
        QT_MOC_LITERAL(67, 12),  // "changePitchA"
        QT_MOC_LITERAL(80, 12)   // "changePitcha"
    },
    "MIDIWithGui",
    "clickWhiteKey",
    "",
    "i",
    "clickBlackKey",
    "changeTimbre",
    "changeMode",
    "changePitchA",
    "changePitcha"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMIDIWithGuiENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x0a,    1 /* Public */,
       4,    1,   53,    2, 0x0a,    3 /* Public */,
       5,    1,   56,    2, 0x0a,    5 /* Public */,
       6,    1,   59,    2, 0x0a,    7 /* Public */,
       7,    0,   62,    2, 0x0a,    9 /* Public */,
       8,    0,   63,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MIDIWithGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMIDIWithGuiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MIDIWithGui, std::true_type>,
        // method 'clickWhiteKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clickBlackKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeTimbre'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changePitchA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changePitcha'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MIDIWithGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MIDIWithGui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clickWhiteKey((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->clickBlackKey((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->changeTimbre((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->changeMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changePitchA(); break;
        case 5: _t->changePitcha(); break;
        default: ;
        }
    }
}

const QMetaObject *MIDIWithGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MIDIWithGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMIDIWithGuiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MIDIWithGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

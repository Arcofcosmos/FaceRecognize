/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.11.3
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/root/clever-door/menjin-2-3/related_file/personDatas.txt
  0x0,0x0,0x0,0x20,
  0x78,
  0x63,0x5b,0x31,0x5d,0x20,0x32,0x30,0x33,0x35,0x2e,0x30,0x31,0x2e,0x30,0x31,0x20,
  0x30,0x30,0x3a,0x31,0x34,0x3a,0x34,0x32,0x20,0x6e,0x6f,0x72,0x6d,0x61,0x6c,
  
};

static const unsigned char qt_resource_name[] = {
  // new
  0x0,0x3,
  0x0,0x0,0x74,0xc7,
  0x0,0x6e,
  0x0,0x65,0x0,0x77,
    // prefix1
  0x0,0x7,
  0x7,0x8b,0xd0,0x51,
  0x0,0x70,
  0x0,0x72,0x0,0x65,0x0,0x66,0x0,0x69,0x0,0x78,0x0,0x31,
    // related_file
  0x0,0xc,
  0x4,0xbd,0xa1,0x65,
  0x0,0x72,
  0x0,0x65,0x0,0x6c,0x0,0x61,0x0,0x74,0x0,0x65,0x0,0x64,0x0,0x5f,0x0,0x66,0x0,0x69,0x0,0x6c,0x0,0x65,
    // personDatas.txt
  0x0,0xf,
  0x9,0xcb,0xd5,0xd4,
  0x0,0x70,
  0x0,0x65,0x0,0x72,0x0,0x73,0x0,0x6f,0x0,0x6e,0x0,0x44,0x0,0x61,0x0,0x74,0x0,0x61,0x0,0x73,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/prefix1
  0x0,0x0,0x0,0xc,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/prefix1/related_file
  0x0,0x0,0x0,0x20,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/prefix1/related_file/personDatas.txt
  0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0xdd,0x96,0x6f,0x62,0x24,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_persondatas)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_persondatas)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_persondatas)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_persondatas)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_persondatas)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_persondatas)(); }
   } dummy;
}

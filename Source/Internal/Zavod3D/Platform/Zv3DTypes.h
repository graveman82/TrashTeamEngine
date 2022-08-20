/*
-----------------
 Persistent info
-----------------
(C) 2012-2022 Zavod3D project. Marat Sungatullin

.........
License:
.........

is in the "LICENSE" file.

......
 Web:
......

 + https://gamedev.ru/community/trash_team/forum/?id=192020 (for questions and help)

------
 Desc
------
Purpose: language and other simple types definitions.

----------------------
 for developers notes
----------------------

*/

#ifndef ZV3D_PLATFORM_TYPES_H
#define ZV3D_PLATFORM_TYPES_H

//-----------------------------------------------------------------------------
// Identify the compiler being used

// GNU GCC
#if defined(__GNUC__)
#   include "Platform/Zv3DCompilerGCC.h"
#else
#   error "Unknown Compiler"
#endif

//-----------------------------------------------------------------------------
// Basic Types:
#ifndef ZVD_OFF_INTTYPE_SIZE_CHECKING
typedef signed char         ZvdInt8;        ///< Compiler independent signed 8-bit integer
typedef unsigned char       ZvdUint8;       ///< Compiler independent unsigned 8-bit integer

typedef signed short        ZvdInt16;       ///< Compiler independent signed 16-bit integer
typedef unsigned short      ZvdUint16;      ///< Compiler independent unsigned 16-bit integer

typedef signed int          ZvdInt32;       ///< Compiler independent signed 32-bit integer
typedef unsigned int        ZvdUint32;      ///< Compiler independent unsigned 32-bit integer

typedef float               ZvdFlt32;       ///< Compiler independent 32-bit float
typedef double              ZvdFlt64;       ///< Compiler independent 64-bit float
#endif

typedef ZvdUint32           ZvdSize;        ///< For size (count, number) storage
// Don't use index variable in code like for (ZvdIndex i = n; i >= 0; --i)!
typedef ZvdUint32           ZvdIndex;       ///< For index (ordinal number) storage

typedef ZvdUint8            ZvdByte;

struct ZvdEmptyType {};                     ///< "Null" type used by templates
struct ZvdPODTag {};                        ///< "POD" tag used by templates
struct ZvdClassTag {};                      ///< "Class" tag used by templates

//-----------------------------------------------------------------------------
// String Types:

typedef char        ZvdUtf8;        ///< Compiler independent 8  bit Unicode encoded character
typedef ZvdUint16   ZvdUtf16;       ///< Compiler independent 16 bit Unicode encoded character
typedef const char* ZvdCString;     ///< String in C style


//-----------------------------------------------------------------------------
// Type constants:
#ifndef ZVD_OFF_INTTYPE_SIZE_CHECKING

extern const ZvdInt8   kZVD_INT8_MIN;           ///< Constant min limit ZvdInt8
extern const ZvdInt8   kZVD_INT8_LOWEST;        ///< Constant lowest limit ZvdInt8
extern const ZvdInt8   kZVD_INT8_MAX;           ///< Constant max limit ZvdInt8

extern const ZvdUint8  kZVD_UINT8_MIN;          ///< Constant min limit ZvdUint8
extern const ZvdUint8  kZVD_UINT8_LOWEST;       ///< Constant lowest limit ZvdUint8
extern const ZvdUint8  kZVD_UINT8_MAX;          ///< Constant max limit ZvdUint8

extern const ZvdInt16  kZVD_INT16_MIN;          ///< Constant min limit ZvdInt16
extern const ZvdInt16  kZVD_INT16_LOWEST;       ///< Constant lowest limit ZvdInt16
extern const ZvdInt16  kZVD_INT16_MAX;          ///< Constant max limit ZvdInt16

extern const ZvdUint16 kZVD_UINT16_MIN;         ///< Constant min limit ZvdUint16
extern const ZvdUint16 kZVD_UINT16_LOWEST;      ///< Constant lowest limit ZvdUint16
extern const ZvdUint16 kZVD_UINT16_MAX;         ///< Constant max limit ZvdUint16

extern const ZvdInt32  kZVD_INT32_MIN;          ///< Constant min limit ZvdInt32
extern const ZvdInt32  kZVD_INT32_LOWEST;       ///< Constant lowest limit ZvdInt32
extern const ZvdInt32  kZVD_INT32_MAX;          ///< Constant max limit ZvdInt32

extern const ZvdUint32 kZVD_UINT32_MIN;         ///< Constant min limit ZvdUint32
extern const ZvdUint32 kZVD_UINT32_LOWEST;      ///< Constant lowest limit ZvdUint32
extern const ZvdUint32 kZVD_UINT32_MAX;         ///< Constant max limit ZvdUint32

extern const ZvdFlt32  kZVD_FLT32_MIN;          ///< Constant min limit ZvdFlt32
extern const ZvdFlt32  kZVD_FLT32_LOWEST;       ///< Constant lowest limit ZvdFlt32
extern const ZvdFlt32  kZVD_FLT32_MAX;          ///< Constant max limit ZvdFlt32
extern const ZvdFlt32  kZVD_FLT32_EPSILON;      ///< Constant epsilon limit ZvdFlt32

extern const ZvdFlt64  kZVD_FLT64_MIN;          ///< Constant min limit ZvdFlt64
extern const ZvdFlt64  kZVD_FLT64_LOWEST;       ///< Constant lowest limit ZvdFlt64
extern const ZvdFlt64  kZVD_FLT64_MAX;          ///< Constant max limit ZvdFlt64
extern const ZvdFlt64  kZVD_FLT64_EPSILON;      ///< Constant epsilon limit ZvdFlt64

#endif // ZVD_OFF_INTTYPE_SIZE_CHECKING

#define ZVD_EQUAL_TOL_F ZvdFlt32(0.000001)                       ///< Constant float epsilon used for ZvdFlt32 comparisons

const ZvdFlt32 kZvdZerof = ZvdFlt32(0.0);                       ///< Constant float 0.0
const ZvdFlt32 kZvdOnef  = ZvdFlt32(1.0);                       ///< Constant float 1.0
const ZvdFlt32 kZvdHalff = ZvdFlt32(0.5);                       ///< Constant float 0.5

const ZvdFlt32 kZvdPif   = ZvdFlt32(3.14159265358979323846);        ///< Constant float PI
const ZvdFlt32 kZvd2Pif  = ZvdFlt32(2.0 * 3.14159265358979323846);  ///< Constant float 2*PI


#endif // ZV3D_PLATFORM_TYPES_H

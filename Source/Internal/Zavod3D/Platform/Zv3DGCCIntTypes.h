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
Purpose: gcc types if standard language types sizes are not suitable.

----------------------
 for developers notes
----------------------
 (1) подключается в файл Zv3DCompilerGCC.h; не подключать вручную.
*/

#ifndef ZV3D_PLATFORM_GCCINTTYPES_H
#define ZV3D_PLATFORM_GCCINTTYPES_H

//-----------------------------------------------------------------------------
// std headers
#if defined(ZVD_USED_CPPSTD)
#   if (ZVD_CPP_STANDARD >= 11)
#       include <cstdint>
#   else
#       include <stdint.h>
#   endif

#elif defined(ZVD_USED_CRT)
#   include <stdint.h>

#else
#   error unexpected case
#endif // ZVD_USED_CPPSTD

typedef int8_t      ZvdInt8;         ///< Compiler independent signed 8-bit integer
typedef uint8_t     ZvdUint8;        ///< Compiler independent unsigned 8-bit integer

typedef int16_t     ZvdInt16;        ///< Compiler independent signed 16-bit integer
typedef uint16_t    ZvdUint16;       ///< Compiler independent unsigned 16-bit integer

typedef int32_t     ZvdInt32;        ///< Compiler independent signed 32-bit integer
typedef uint32_t    ZvdUint32;       ///< Compiler independent unsigned 32-bit integer

typedef float       ZvdFlt32;       ///< Compiler independent 32-bit float
typedef double      ZvdFlt64;       ///< Compiler independent 64-bit float

const ZvdInt8   kZVD_INT8_MIN       = -(__INT8_MAX__) - 1;      ///< Constant min limit ZvdInt8
const ZvdInt8   kZVD_INT8_LOWEST    = -(__INT8_MAX__) - 1;      ///< Constant lowest limit ZvdInt8
const ZvdInt8   kZVD_INT8_MAX       = __INT8_MAX__;             ///< Constant max limit ZvdInt8

const ZvdUint8  kZVD_UINT8_MIN      = 0;                        ///< Constant min limit ZvdUint8
const ZvdUint8  kZVD_UINT8_LOWEST   = 0;                        ///< Constant lowest limit ZvdUint8
const ZvdUint8  kZVD_UINT8_MAX      = __UINT8_MAX__;            ///< Constant max limit ZvdUint8

const ZvdInt16  kZVD_INT16_MIN      = -(__INT16_MAX__) - 1;     ///< Constant min limit ZvdInt16
const ZvdInt16  kZVD_INT16_LOWEST   = -(__INT16_MAX__) - 1;     ///< Constant lowest limit ZvdInt16
const ZvdInt16  kZVD_INT16_MAX      = __INT16_MAX__;            ///< Constant max limit ZvdInt16

const ZvdUint16 kZVD_UINT16_MIN     = 0;                        ///< Constant min limit ZvdUint16
const ZvdUint16 kZVD_UINT16_LOWEST  = 0;                        ///< Constant lowest limit ZvdUint16
const ZvdUint16 kZVD_UINT16_MAX     = __UINT16_MAX__;           ///< Constant max limit ZvdUint16

const ZvdInt32  kZVD_INT32_MIN      = -(__INT32_MAX__) - 1;     ///< Constant min limit ZvdInt32
const ZvdInt32  kZVD_INT32_LOWEST   = -(__INT32_MAX__) - 1;     ///< Constant lowest limit ZvdInt32
const ZvdInt32  kZVD_INT32_MAX      = __INT32_MAX__;            ///< Constant max limit ZvdInt32

const ZvdUint32 kZVD_UINT32_MIN     = 0;                        ///< Constant min limit ZvdUint32
const ZvdUint32 kZVD_UINT32_LOWEST  = 0;                        ///< Constant lowest limit ZvdUint32
const ZvdUint32 kZVD_UINT32_MAX     = __UINT32_MAX__;           ///< Constant max limit ZvdUint32

const ZvdFlt32  kZVD_FLT32_MIN      = __FLT32_MIN__;            ///< Constant min limit ZvdFlt32
const ZvdFlt32  kZVD_FLT32_LOWEST   = -(__FLT32_MAX__);         ///< Constant lowest limit ZvdFlt32
const ZvdFlt32  kZVD_FLT32_MAX      = __FLT32_MAX__;            ///< Constant max limit ZvdFlt32
const ZvdFlt32  kZVD_FLT32_EPSILON  = __FLT32_EPSILON__;        ///< Constant epsilon limit ZvdFlt32

const ZvdFlt64  kZVD_FLT64_MIN      = __FLT64_MIN__;            ///< Constant min limit ZvdFlt64
const ZvdFlt64  kZVD_FLT64_LOWEST   = -(__FLT64_MAX__);         ///< Constant lowest limit ZvdFlt64
const ZvdFlt64  kZVD_FLT64_MAX      = __FLT64_MAX__;            ///< Constant max limit ZvdFlt64
const ZvdFlt64  kZVD_FLT64_EPSILON  = __FLT64_EPSILON__;        ///< Constant epsilon limit ZvdFlt64


#endif // ZV3D_PLATFORM_GCCINTTYPES_H

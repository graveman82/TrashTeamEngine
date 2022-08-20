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
Purpose: language and other simple types (implementation).

----------------------
 for developers notes
----------------------

*/
#include "Platform/Zv3DTypes.h"

#ifndef ZVD_OFF_INTTYPE_SIZE_CHECKING
#if defined(ZVD_USED_CPPSTD)

const ZvdInt8   kZVD_INT8_MIN       = std::numeric_limits<ZvdInt8>::min();
const ZvdInt8   kZVD_INT8_LOWEST    = std::numeric_limits<ZvdInt8>::lowest();
const ZvdInt8   kZVD_INT8_MAX       = std::numeric_limits<ZvdInt8>::max();

const ZvdUint8  kZVD_UINT8_MIN      = std::numeric_limits<ZvdUint8>::min();
const ZvdUint8  kZVD_UINT8_LOWEST   = std::numeric_limits<ZvdUint8>::lowest();
const ZvdUint8  kZVD_UINT8_MAX      = std::numeric_limits<ZvdUint8>::max();

const ZvdInt16  kZVD_INT16_MIN      = std::numeric_limits<ZvdInt16>::min();
const ZvdInt16  kZVD_INT16_LOWEST   = std::numeric_limits<ZvdInt16>::lowest();
const ZvdInt16  kZVD_INT16_MAX      = std::numeric_limits<ZvdInt16>::max();

const ZvdUint16 kZVD_UINT16_MIN     = std::numeric_limits<ZvdUint16>::min();
const ZvdUint16 kZVD_UINT16_LOWEST  = std::numeric_limits<ZvdUint16>::lowest();
const ZvdUint16 kZVD_UINT16_MAX     = std::numeric_limits<ZvdUint16>::max();

const ZvdInt32  kZVD_INT32_MIN      = std::numeric_limits<ZvdInt32>::min();
const ZvdInt32  kZVD_INT32_LOWEST   = std::numeric_limits<ZvdInt32>::lowest();
const ZvdInt32  kZVD_INT32_MAX      = std::numeric_limits<ZvdInt32>::max();

const ZvdUint32 kZVD_UINT32_MIN     = std::numeric_limits<ZvdUint32>::min();
const ZvdUint32 kZVD_UINT32_LOWEST  = std::numeric_limits<ZvdUint32>::lowest();
const ZvdUint32 kZVD_UINT32_MAX     = std::numeric_limits<ZvdUint32>::max();

const ZvdFlt32  kZVD_FLT32_MIN      = std::numeric_limits<ZvdFlt32>::min();
const ZvdFlt32  kZVD_FLT32_LOWEST   = std::numeric_limits<ZvdFlt32>::lowest();
const ZvdFlt32  kZVD_FLT32_MAX      = std::numeric_limits<ZvdFlt32>::max();
const ZvdFlt32  kZVD_FLT32_EPSILON  = std::numeric_limits<ZvdFlt32>::epsilon();

const ZvdFlt64  kZVD_FLT64_MIN      = std::numeric_limits<ZvdFlt64>::min();
const ZvdFlt64  kZVD_FLT64_LOWEST   = std::numeric_limits<ZvdFlt64>::lowest();
const ZvdFlt64  kZVD_FLT64_MAX      = std::numeric_limits<ZvdFlt64>::max();
const ZvdFlt64  kZVD_FLT64_EPSILON  = std::numeric_limits<ZvdFlt64>::epsilon();
#else

const ZvdInt8   kZVD_INT8_MIN       = SCHAR_MIN;
const ZvdInt8   kZVD_INT8_LOWEST    = SCHAR_MIN;
const ZvdInt8   kZVD_INT8_MAX       = SCHAR_MAX;

const ZvdUint8  kZVD_UINT8_MIN      = 0;
const ZvdUint8  kZVD_UINT8_LOWEST   = 0;
const ZvdUint8  kZVD_UINT8_MAX      = UCHAR_MAX;

const ZvdInt16  kZVD_INT16_MIN      = SHRT_MIN;
const ZvdInt16  kZVD_INT16_LOWEST   = SHRT_MIN;
const ZvdInt16  kZVD_INT16_MAX      = SHRT_MAX;

const ZvdUint16 kZVD_UINT16_MIN     = 0;
const ZvdUint16 kZVD_UINT16_LOWEST  = 0;
const ZvdUint16 kZVD_UINT16_MAX     = USHRT_MAX;

const ZvdInt32  kZVD_INT32_MIN      = INT_MIN;
const ZvdInt32  kZVD_INT32_LOWEST   = INT_MIN;
const ZvdInt32  kZVD_INT32_MAX      = INT_MAX;

const ZvdUint32 kZVD_UINT32_MIN     = 0;
const ZvdUint32 kZVD_UINT32_LOWEST  = 0;
const ZvdUint32 kZVD_UINT32_MAX     = UINT_MAX;

const ZvdFlt32  kZVD_FLT32_MIN      = FLT_MIN;
const ZvdFlt32  kZVD_FLT32_LOWEST   = -(FLT_MAX);
const ZvdFlt32  kZVD_FLT32_MAX      = FLT_MAX;
const ZvdFlt32  kZVD_FLT32_EPSILON  = FLT_EPSILON;

const ZvdFlt64  kZVD_FLT64_MIN      = DBL_MIN;
const ZvdFlt64  kZVD_FLT64_LOWEST   = -(DBL_MAX);
const ZvdFlt64  kZVD_FLT64_MAX      = DBL_MAX;
const ZvdFlt64  kZVD_FLT64_EPSILON  = DBL_EPSILON;
#endif
#endif // ZVD_OFF_INTTYPE_SIZE_CHECKING

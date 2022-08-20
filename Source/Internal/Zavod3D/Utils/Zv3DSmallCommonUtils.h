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
Purpose: small common used utils.

----------------------
 for developers notes
----------------------

*/

#ifndef ZV3D_UTILS_SMALLCOMMONUTILS_H
#define ZV3D_UTILS_SMALLCOMMONUTILS_H

#include "Platform/Zv3DTypes.h"

/// Unused variable wrapper.
#define ZVD_UNUSED(x) (void)sizeof(x)

//-----------------------------------------------------------------------------
/// Returns value with bit x set (2^x)
template <typename T>
inline T ZvdBitToValue(ZvdIndex bitIdx)
{
    return (T(1) << bitIdx);
}


//-----------------------------------------------------------------------------
/// Returns true if specified bit is set.
template <typename T>
inline bool ZvdIsBitSet(T x, ZvdIndex bitIdx)
{
    return (x & ZvdBitToValue<T>(bitIdx));
}

//-----------------------------------------------------------------------------
/// Sets a specified bit.
template <typename T>
inline void ZvdSetBit(T x, ZvdIndex bitIdx)
{
   x |= ZvdBitToValue<T>(bitIdx);
}

//-----------------------------------------------------------------------------
/// Resets a specified bit.
template <typename T>
inline void ZvdResetBit(T x, ZvdIndex bitIdx)
{
   x &= ~ZvdBitToValue<T>(bitIdx);
}

//-----------------------------------------------------------------------------
/// FOURCC
#define ZVD_FOURCC(ch0, ch1, ch2, ch3)      \
   (((ZvdUint32(ch0) & 0xFF) << 0)  |       \
    ((ZvdUint32(ch1) & 0xFF) << 8)  |       \
    ((ZvdUint32(ch2) & 0xFF) << 16) |       \
    ((ZvdUint32(ch3) & 0xFF) << 24) )

//-----------------------------------------------------------------------------
/// Returns the lesser of the two values.
template <typename T>
inline T ZvdMin(T a, T b)
{
    return a < b ? a : b;
}

//-----------------------------------------------------------------------------
/// Returns the greater of the two values.
template <typename T>
inline T ZvdMax(T a, T b)
{
    return a > b ? a : b;
}

//-----------------------------------------------------------------------------
/// Returns the absolute value of the value.
template <typename T>
inline T ZvdAbs(T a)
{
    return a >= 0 ? a : -a;
}

//-----------------------------------------------------------------------------
/// Cast raw (void) pointer to pointer of bytes.
inline ZvdByte* ZvdVoidToBytePtr(void* pRaw)
{
    return reinterpret_cast<ZvdByte*>(pRaw);
}

//-----------------------------------------------------------------------------
/// Cast raw (void) pointer to pointer of bytes.
inline const ZvdByte* ZvdVoidToBytePtr(const void* pRaw)
{
    return reinterpret_cast<const ZvdByte*>(pRaw);
}

/// Returns the absolute distanse of 1st pointer to 2nd.
inline ZvdSize ZvdAbsPtrDist(const void* p1, const void* p2)
{
    const ZvdByte* pb1 = ZvdVoidToBytePtr(p1);
    const ZvdByte* pb2 = ZvdVoidToBytePtr(p2);
    if (pb1 > pb2)
    {
        return pb1 - pb2;
    }
    return pb2 - pb1;
}

#endif // ZV3D_UTILS_SMALLCOMMONUTILS_H

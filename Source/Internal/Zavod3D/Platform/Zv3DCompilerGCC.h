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
Purpose: gcc dependent defs.

----------------------
 for developers notes
----------------------

*/

#ifndef ZV3D_PLATFORM_COMPILERGCC_H
#define ZV3D_PLATFORM_COMPILERGCC_H

#if !defined(ZVD_USED_CPPSTD) && !defined(ZVD_USED_CRT)
#   define ZVD_USED_CRT

#endif // ZVD_USED_CPPSTD

#ifdef ZVD_USED_CPPSTD
#   ifdef ZVD_USED_CRT
#       undef ZVD_USED_CRT
#   endif

#endif // ZVD_USED_CPPSTD

//-----------------------------------------------------------------------------
// Compiler Version
#define ZVD_COMPILER_GCC (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)


//-----------------------------------------------------------------------------
// C++ version -- {
#if defined(__cplusplus)
#   define ZVD_CPP __cplusplus

#   if (199711L == ZVD_CPP)
#       define ZVD_CPP_STANDARD 1
#   elif (201103L == ZVD_CPP)
#       define ZVD_CPP_STANDARD 11
#   elif (201402L == ZVD_CPP)
#       define ZVD_CPP_STANDARD 14
#   elif (201703L == ZVD_CPP)
#       define ZVD_CPP_STANDARD 17
#   elif (202002L == ZVD_CPP)
#       define ZVD_CPP_STANDARD 20
#   else
#       error "GCC: ZVD_CPP_STANDARD undefined"
#   endif

#   if ZVD_CPP_STANDARD < 11
#       error "GCC: C++ 11 or higher compiler is required"
#   endif

#else
#   error "GCC: C++ compiler is required"

#endif // } -- end of C++ version

//-----------------------------------------------------------------------------
// Identify the Operating System -- {

#if defined(__WIN32__) || defined(_WIN32)

#   define ZVD_OS_WIN
#   define ZVD_OS_WIN32
#   if defined(_WIN64)
#       define ZVD_OS_STRING "Win64"
#       define ZVD_OS_WIN64
#   else
#       define ZVD_OS_STRING "Win32"
#   endif
#   include "Platform/Zv3DTypesWin.h"

#else
#   error "GCC: Unsupported Operating System"
#endif // } -- end of Identify the Operating System



//-----------------------------------------------------------------------------
// Identify the CPU -- {
#if defined(i386)
#   define ZVD_CPU_STRING "Intel x86"
#   define ZVD_CPU_X86
#   define ZVD_LITTLE_ENDIAN

#else
#   error "GCC: Unsupported Target CPU"
#endif // } -- end of Identify the CPU


//-----------------------------------------------------------------------------
// std headers
#if defined(ZVD_USED_CPPSTD)
#   include <cstddef>
#   include <limits>
#   include <cfloat>

#elif defined(ZVD_USED_CRT)
#   include <stddef.h>
#   include <limits.h>
#   include <float.h>

#else
#   error unexpected case
#endif // ZVD_USED_CPPSTD

//-----------------------------------------------------------------------------
/** ZVD_OFFSET_OF macro.
The value of which is the offset, in bytes, from the beginning of an object of
specified type to its specified subobject, including padding if any.
*/
// compiler is GCC 8.x
#if defined(ZVD_COMPILER_GCC) && (__GNUC__ == 8)

#   define ZVD_OFFSET_OF(t, m) offsetof((t), (m))

#endif

//-----------------------------------------------------------------------------
// Basic Types and constants:
#include "Debug/Zv3DStaticAssert.h"
#ifndef ZVD_OFF_INTTYPE_SIZE_CHECKING
ZVD_STATIC_ASSERT_T(sizeof(signed char) == 1, ZvdInt8);
ZVD_STATIC_ASSERT_T(sizeof(unsigned char) == 1, ZvdUint8);
ZVD_STATIC_ASSERT_T(sizeof(signed short) == 2, ZvdInt16);
ZVD_STATIC_ASSERT_T(sizeof(unsigned short) == 2, ZvdUint16);
ZVD_STATIC_ASSERT_T(sizeof(signed int) == 4, ZvdInt32);
ZVD_STATIC_ASSERT_T(sizeof(unsigned int) == 4, ZvdUint32);
#else
#   include "Platform/Zv3DGCCIntTypes.h"
#endif




#endif // ZV3D_PLATFORM_COMPILERGCC_H


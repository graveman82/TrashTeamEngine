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
Purpose: Windows dependent types.

----------------------
 for developers notes
----------------------

*/

#ifndef ZV3D_PLATFORM_TYPESWIN_H
#define ZV3D_PLATFORM_TYPESWIN_H

#define ZVD_CDECL       __cdecl
#define ZVD_STDCALL     __stdcall
#define ZVD_DLL_CALLCONV ZVD_STDCALL

#if (ZVD_CPP_STANDARD >= 11)
#   ifdef NULL
#       undef NULL
#       define NULL nullptr
#   endif

#   define kZVD_NULL nullptr

#endif


#endif // ZV3D_PLATFORM_TYPESWIN_H

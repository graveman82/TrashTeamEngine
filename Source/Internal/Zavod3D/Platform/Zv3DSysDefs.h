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
Purpose: system definitions.

----------------------
 for developers notes
----------------------

*/

#ifndef ZV3D_PLATFORM_SYSDEFSWIN32_H
#define ZV3D_PLATFORM_SYSDEFSWIN32_H

#include "Platform/Zv3DTypes.h"

struct ZvdAppHandle
{
    ZvdAppHandle();
    ZvdAppHandle(const ZvdAppHandle& oth);

    void Set(void*);
    void* Get();

    ZvdAppHandle& operator=(const ZvdAppHandle&);
private:
    class ZvdAppHandleImpl* pImpl_;
#ifdef ZVD_OS_WIN32
    enum {kDataSize = 4}; // must be greater or equal ZvdAppHandleImpl size in bytes
#endif // ZVD_OS_WIN32
    ZvdByte data_[kDataSize];
};


#endif // ZV3D_PLATFORM_SYSDEFSWIN32_H

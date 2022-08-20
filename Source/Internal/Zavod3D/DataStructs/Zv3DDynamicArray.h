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
Purpose: dynamic array (vector) definitions.

----------------------
 for developers notes
----------------------

*/

#ifndef ZV3D_DATASTRUCTS_DYNAMICARRAY_H
#define ZV3D_DATASTRUCTS_DYNAMICARRAY_H

#include "Platform/Zv3DTypes.h"

//-----------------------------------------------------------------------------
template <typename T, TTag>
class ZvdDynamicArray
{
public:
private:
    void* rawMemory_;
    ZvdSize count_;
    ZvdSize capacity_;
};

#endif // ZV3D_DATASTRUCTS_DYNAMICARRAY_H

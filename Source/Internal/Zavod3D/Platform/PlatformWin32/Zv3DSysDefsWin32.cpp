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
Purpose: system types (implementation).

----------------------
 for developers notes
----------------------

*/
#include "Platform/Zv3DTypes.h"

#ifdef ZVD_OS_WIN32 // -- { CPP BODY START
#include "Debug/Zv3DAssert.h"
#include "Debug/Zv3DStaticAssert.h"


#include "Platform/Zv3DSysDefs.h"


#include <windows.h>
#include <new>

//-----------------------------------------------------------------------------

struct ZvdAppHandleImpl
{
    ZvdAppHandleImpl()
    : hInstance_(kZVD_NULL)
    {

    }
    void Set(void* p)
    {
        hInstance_ = static_cast<HINSTANCE>(p);
    }
    void* Get()
    {
        return static_cast<void*>(hInstance_);
    }
private:
    HINSTANCE hInstance_;
};


//-----------------------------------------------------------------------------
ZvdAppHandle::ZvdAppHandle() :
    pImpl_(new(&data_[0]) ZvdAppHandleImpl())
{

}

//-----------------------------------------------------------------------------
void ZvdAppHandle::Set(void* p)
{
    ZVD_ASSERT_HIGH_NOMSG(p);
    pImpl_->Set(p);
}

//-----------------------------------------------------------------------------
void* ZvdAppHandle::Get()
{
    return pImpl_->Get();
}

//-----------------------------------------------------------------------------
ZvdAppHandle::ZvdAppHandle(const ZvdAppHandle& oth) :
    pImpl_(new(&data_[0]) ZvdAppHandleImpl())
{
    pImpl_->Set(oth.pImpl_->Get());
}

//-----------------------------------------------------------------------------
ZvdAppHandle& ZvdAppHandle::operator=(const ZvdAppHandle& oth)
{
    if (this != &oth)
    {
        pImpl_->Set(oth.pImpl_->Get());
    }
    return *this;
}
#endif // -- } CPP BODY END

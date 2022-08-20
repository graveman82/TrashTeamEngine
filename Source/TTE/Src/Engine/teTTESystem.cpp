/*
-----------------
 Persistent info
-----------------
(C) 2014-2022 Trash team engine project.

.........
License:
.........

is in the "LICENSE" file.

......
 Web:
......
 + http://www.stepever.com/Trashteam/index.html
 + http://www.trashteam.ru
 + https://gamedev.ru/community/trash_team
 + https://gamedev.ru/community/trash_team/forum/?id=192020 (for questions and help)

------
 Desc
------
Purpose: tte system implementation.

----------------------
 for developers notes
----------------------

*/

#include "Engine/teTTESystem.h"
#include "Zavod3D/Platform/Zv3DTypes.h"
#include "Zavod3D/Debug/Zv3DAssert.h"

//=============================================================================
// Access to engine
static teTTESystem* spTTESystem = kZVD_NULL;

//-----------------------------------------------------------------------------

teTTESystem* teGetEngine()
{
    return spTTESystem;
}

//=============================================================================
// Engine initialization-termination

//-----------------------------------------------------------------------------
//
#ifndef TTE_EDITOR
eZvdErrorCode teTTESystem::Init(ZvdAppHandle& appHandle, const char* szCmdLine)
{
    ZVD_ASSERT_HIGH_NOMSG(appHandle.Get());
    ZVD_ASSERT_HIGH1(!appHandle_.Get(), ZVD_DEBUG_TEXT("double initialization detected! prev hinstance: %p"), appHandle_.Get());
    appHandle_ = appHandle;

    return kZVD_ERRC_OK;
}
#else
eZvdErrorCode teTTESystem::Init()
{

}
#endif // TTE_EDITOR

//-----------------------------------------------------------------------------
eZvdErrorCode teTTESystem::Terminate()
{
    return kZVD_ERRC_OK;
}

//-----------------------------------------------------------------------------
eZvdErrorCode teTTESystem::Tick(bool fInactive)
{
    return kZVD_ERRC_OK;
}
//=============================================================================
// Error handling
void __stdcall teTTESystem::NotEnoughMemoryHandler(const ZvdErrorDesc& desc)
{
    ZVD_ASSERT_HIGH_NOMSG(teGetEngine());

    teGetEngine()->FixNotEnoughMemoryCase(desc);
}

//-----------------------------------------------------------------------------
void teTTESystem::FixNotEnoughMemoryCase(const ZvdErrorDesc& desc)
{
    ZVD_ASSERT_HIGH1(fatalErrorDesc_.ErrorCode() == kZVD_ERRC_OK, ZVD_DEBUG_TEXT("we already have fatal with code: %u"), fatalErrorDesc_.ErrorCode());
    fatalErrorDesc_ = desc;
}

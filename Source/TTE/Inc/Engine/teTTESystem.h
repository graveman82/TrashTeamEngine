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
Purpose: tte system definition.

----------------------
 for developers notes
----------------------

*/

#ifndef TTE_ENGINE_TTESYSTEM_H
#define TTE_ENGINE_TTESYSTEM_H

#include "Zavod3D/Debug/Zv3DDebugDefs.h"
#include "Zavod3D/Platform/Zv3DSysDefs.h"

//-----------------------------------------------------------------------------
// Trash Team Engine class definition.
class teTTESystem
{
public:
    enum eState
    {
        kSTATE_INITIALIZATION,
        kSTATE_RUNNING,
        kSTATE_TERMINATION,
    };
    //+++++++++++++++++++++++++++++++++++++
    // Engine initialization-termination (public methods)
    teTTESystem();
#ifndef TTE_EDITOR
    eZvdErrorCode Init(ZvdAppHandle& appHandle, const char* szCmdLine = "");
#else //
    eZvdErrorCode Init();
#endif // TTE_EDITOR

    eZvdErrorCode Terminate();
    eZvdErrorCode Tick(bool fInactive = false);

    //+++++++++++++++++++++++++++++++++++++
    // Error handling (public methods)
    static void __stdcall NotEnoughMemoryHandler(const ZvdErrorDesc& desc);
private:

    //+++++++++++++++++++++++++++++++++++++
    // Error handling (private methods)
    void FixNotEnoughMemoryCase(const ZvdErrorDesc& desc);

    //+++++++++++++++++++++++++++++++++++++
    // Error handling (vars)

    ZvdErrorDesc fatalErrorDesc_;

    //+++++++++++++++++++++++++++++++++++++
    // Engine initialization-termination (vars)
#ifndef TTE_EDITOR
    ZvdAppHandle& appHandle_;

#else

#endif // TTE_EDITOR

};

// Access to engine instance.
teTTESystem* teGetEngine();

#endif // TTE_ENGINE_TTESYSTEM_H

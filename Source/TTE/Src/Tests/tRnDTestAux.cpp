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
Purpose: вспомогательные классы и методы для тестирования (реалзация).

----------------------
 for developers notes
----------------------

*/

#include "Tests/tRnDTestAux.h"
#include <stdio.h>
#include <string.h>


//-----------------------------------------------------------------------------
void tTestDummy::Print(const char* methodName,
                       bool fName,
                       bool fIVar,
                       bool fFVar,
                       bool fPVar)
{
    const char* ident = "  ";
    printf("%stTestDummy [%p]: %s\n", ident, this, methodName);
    if (fName)
    {
        printf("%s%sname_: %s\n", ident, ident, name_);
    }
    if (fIVar)
    {
        printf("%s%siVar_: %i\n", ident, ident, iVar_);
    }
    if (fFVar)
    {
        printf("%s%sfVar_: %f\n", ident, ident, fVar_);
    }
    if (fPVar)
    {
        printf("%s%spVar_: %p\n", ident, ident, pVar_);
    }
}


//-----------------------------------------------------------------------------
void tTestDummy::CopyName(const char* name)
{
    const char* p = name;
    if (p)
    {
        for (int i = 0; i < kBUF_SIZE; ++i)
        {
            name_[i] = *p;
            if ('\0' == name_[i])
            {
                break;
            }
            else
            {
                ++p;
            }
        }
    }
    name_[kBUF_SIZE - 1] = '\0';
}
//-----------------------------------------------------------------------------
tTestDummy::tTestDummy(const char* name, int iVar, float fVar, void* pVar)
    : iVar_(iVar)
    , fVar_(fVar)
    , pVar_(pVar)
{
    CopyName(name);
    Print("ctor()");
}

//-----------------------------------------------------------------------------

tTestDummy::tTestDummy(const tTestDummy& oth)
    : iVar_(oth.iVar_)
    , fVar_(oth.fVar_)
    , pVar_(oth.pVar_)
{
    CopyName(oth.name_);
    Print("copy ctor()");
}

//-----------------------------------------------------------------------------

tTestDummy::~tTestDummy()
{
    Print("~tTestDummy()");
}

//-----------------------------------------------------------------------------

tTestDummy& tTestDummy::operator=(const tTestDummy& oth)
{
    if (this != &oth)
    {
        CopyName(oth.name_);
        iVar_ = oth.iVar_;
        fVar_ = oth.fVar_;
        pVar_ = oth.pVar_;
    }
    Print("=operator()");
    return *this;
}


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
Purpose: вспомогательные классы и методы для тестирования.

----------------------
 for developers notes
----------------------

*/

#ifndef TTE_TESTS_RNDTESTAUX_H
#define TTE_TESTS_RNDTESTAUX_H


//-----------------------------------------------------------------------------
#define TTE_TESTDUMMY_NAME_BUFSIZE 16
class tTestDummy
{
public:
    enum { kBUF_SIZE = TTE_TESTDUMMY_NAME_BUFSIZE};

    tTestDummy(const char* name = "", int iVar = 0, float fVar = 0.0f, void* pVar = nullptr);
    tTestDummy(const tTestDummy&);
    ~tTestDummy();

    tTestDummy& operator=(const tTestDummy&);

    void Print(const char* methodName,
               bool fName = true,
               bool fIVar = true,
               bool fFVar = false,
               bool fPVar = false);
    void CopyName(const char* name);

    char name_[kBUF_SIZE];
    int iVar_;
    float fVar_;
    void* pVar_;
};

#endif // TTE_TESTS_RNDTESTAUX_H

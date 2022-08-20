#include <stdio.h>
#include <iostream>

#include "Debug/Zv3DAssert.h"

void WaitKeyAndQuit()
{
    std::string q;
    std::cout << "Press any key followed Enter to quit..." << std::endl;
    std::cin >> q;
}

int main()
{
    ZVD_ASSERT_HIGH(2*2==5,"fuck");
    WaitKeyAndQuit();
}

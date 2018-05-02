#include <iostream>
#include "BaseApplication.h"

using namespace JoyPix;

namespace JoyPix {
    extern BaseApplication* g_pApp;
}

int main(int argc, char** args)
{
    auto ret = g_pApp->Initialize();
    if (ret) {
        std::cout << "Some unexpected errors have occurred"
                 << std::endl;
        std::cout << "Preparing to quit..." << std::endl;

        return ret;
    }

    while (!g_pApp->isQuit()) {
        g_pApp->Tick();
    }

    g_pApp->Dead();

    return 0;
}
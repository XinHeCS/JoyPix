#include "BaseApplication.h"
#include <iostream>

int JoyPix::BaseApplication::Initialize()
{
    _Quit = false;

    return 0;
}

void JoyPix::BaseApplication::Dead()
{

}

void JoyPix::BaseApplication::Tick()
{
#ifdef DEBUG
    std::cout << "Application running..." << std::endl;
#endif
}

bool JoyPix::BaseApplication::isQuit()
{
    return _Quit;
}
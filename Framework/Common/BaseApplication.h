#pragma once

#include "IApplication.h"

#define DEBUG

namespace JoyPix {
    class BaseApplication : implement IApplication
    {
    public:
        virtual int Initialize();
        virtual void Dead();
        virtual void Tick();
        virtual bool isQuit();

    protected:
        // Flag of the quit status
        bool _Quit;
    };
}
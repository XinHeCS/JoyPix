#pragma once

#include "Interface.h"
#include "IRuntimeModule.h"

namespace JoyPix {
    Interface IApplication: implement IRuntimeModule
    {
    public:
        virtual ~IApplication() {}

        // Inherited interfaces
        virtual int Initialize() = 0;
        virtual void Dead() = 0;
        virtual void Tick() = 0;

        // Return the status whether to quit the 
        // application or not
        virtual bool isQuit() = 0;
    };
}
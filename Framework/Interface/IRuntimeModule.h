#pragma once

#include "Interface.h"

namespace JoyPix {
    Interface IRuntimeModule {
    public:
        virtual ~IRuntimeModule() {}
        // Finish some inital work when this module is 
        // loaded in the memory
        virtual int Initialize() = 0;
        // Do dome clean up work before it's 
        // deconstruct
        virtual void Dead() = 0;
        // The interface whoich will call in every cycle
        virtual void Tick() = 0;
    };
}
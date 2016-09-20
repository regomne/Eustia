#ifndef GLOBALVARS_H_H_
#define GLOBALVARS_H_H_

#include "src/common.h"

#include <windows.h>

class GlobalVars
{
public:
    static Eustia::wchar* ModulePath;
    static HANDLE DllHandle;
    static bool NeedDelayCheck;
    static Eustia::intptr CheckProcessId;
};


#endif
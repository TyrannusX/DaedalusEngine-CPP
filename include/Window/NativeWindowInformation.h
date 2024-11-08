//
// Created by daedalus on 5/6/24.
//

#ifndef DAEDALUSENGINE_NATIVEWINDOWINFORMATION_H
#define DAEDALUSENGINE_NATIVEWINDOWINFORMATION_H


#include <windows.h>

namespace DaedalusEngine {
    struct NativeWindowInformation{
        HWND win32Window;
        uint32_t width;
        uint32_t height;
    };
}

#endif //DAEDALUSENGINE_NATIVEWINDOWINFORMATION_H

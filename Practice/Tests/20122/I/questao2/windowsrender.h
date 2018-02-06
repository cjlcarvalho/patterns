#ifndef WINDOWSRENDER_H
#define WINDOWSRENDER_H

#include "irender.h"

class WindowsRender : public IRender
{
public:
    WindowsRender();
    void renderize();
};

#endif // WINDOWSRENDER_H

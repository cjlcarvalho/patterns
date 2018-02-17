#ifndef WINDOWSGAMEFRAMEWORK_H
#define WINDOWSGAMEFRAMEWORK_H

#include "igameframework.h"

class IRender;
class ICommunicationSubsystem;

class WindowsGameFramework : public IGameFramework
{
public:
    WindowsGameFramework();
    IRender *createRender();
    ICommunicationSubsystem *createSubsystem();
};

#endif // WINDOWSGAMEFRAMEWORK_H

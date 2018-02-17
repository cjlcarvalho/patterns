#ifndef WINDOWSCOMMUNICATIONSUBSYSTEM_H
#define WINDOWSCOMMUNICATIONSUBSYSTEM_H

#include "icommunicationsubsystem.h"

class WindowsCommunicationSubsystem : public ICommunicationSubsystem
{
public:
    WindowsCommunicationSubsystem();
    void communicate();
};

#endif // WINDOWSCOMMUNICATIONSUBSYSTEM_H

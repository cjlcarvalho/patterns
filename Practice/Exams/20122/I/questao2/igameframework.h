#ifndef IGAMEFRAMEWORK_H
#define IGAMEFRAMEWORK_H

class IRender;
class ICommunicationSubsystem;

class IGameFramework
{
public:
    virtual IRender *createRender() = 0;
    virtual ICommunicationSubsystem *createSubsystem() = 0;
};

#endif // IGAMEFRAMEWORK_H

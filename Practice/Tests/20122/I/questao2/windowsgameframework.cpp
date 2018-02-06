#include "windowsgameframework.h"
#include "irender.h"
#include "icommunicationsubsystem.h"
#include "windowsrender.h"
#include "windowscommunicationsubsystem.h"

WindowsGameFramework::WindowsGameFramework() 
{

}

IRender *WindowsGameFramework::createRender()
{
    return new WindowsRender;
}

ICommunicationSubsystem *WindowsGameFramework::createSubsystem()
{
    return new WindowsCommunicationSubsystem;
}

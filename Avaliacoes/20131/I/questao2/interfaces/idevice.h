#ifndef IDEVICE_H
#define IDEVICE_H

#include "iengine.h"
#include "isoundtrack.h"
#include "iinputbackend.h"

class IDevice {
public:
    virtual IEngine* createEngine() = 0;
    virtual ISoundTrack* createSoundTrack() = 0;
    virtual IInputBackend* createInputBackend() = 0;
};

#endif // IDEVICE_H

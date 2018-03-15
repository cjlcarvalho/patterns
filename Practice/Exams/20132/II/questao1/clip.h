#ifndef CLIP_H
#define CLIP_H

#include "component.h"

class Clip : public Component
{
public:
    Clip();
    void play() override;
};

#endif // CLIP_H

#ifndef ANIMATIONAFTER_H
#define ANIMATIONAFTER_H

#include "animationdecorator.h"

class Animation;

class AnimationAfter : public AnimationDecorator
{
public:
    AnimationAfter(Animation *animation);
    void animate() override;
};

#endif // ANIMATIONAFTER_H

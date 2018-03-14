#ifndef ANIMATIONBEFORE_H
#define ANIMATIONBEFORE_H

#include "animationdecorator.h"

class Animation;

class AnimationBefore : public AnimationDecorator
{
public:
    AnimationBefore(Animation *animation);
    void animate() override;
};

#endif // ANIMATIONBEFORE_H

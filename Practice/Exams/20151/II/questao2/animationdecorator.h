#ifndef ANIMATIONDECORATOR_H
#define ANIMATIONDECORATOR_H

#include "animation.h"

class AnimationDecorator : public Animation
{
public:
    virtual void animate();

protected:
    AnimationDecorator(Animation *animation);

private:
    Animation *m_animation;
};

#endif // ANIMATIONDECORATOR_H

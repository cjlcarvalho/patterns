#ifndef BASICANIMATION_H
#define BASICANIMATION_H

#include "animation.h"

class BasicAnimation : public Animation
{
public:
    BasicAnimation();
    void animate() override;
};

#endif // BASICANIMATION_H

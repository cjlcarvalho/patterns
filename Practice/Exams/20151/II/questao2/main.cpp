#include "animation.h"
#include "basicanimation.h"
#include "animationafter.h"
#include "animationbefore.h"

int main()
{
    Animation *animation = new AnimationAfter(new AnimationBefore(new BasicAnimation));

    animation->animate();

    return 0;
}

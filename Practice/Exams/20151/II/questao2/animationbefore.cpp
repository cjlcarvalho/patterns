#include "animationbefore.h"
#include "animation.h"

#include <iostream>

using namespace std;

AnimationBefore::AnimationBefore(Animation *animation) :
    AnimationDecorator(animation)
{

}

void AnimationBefore::animate()
{
    cout << "DO SOMETHING BEFORE!!!" << endl;
    AnimationDecorator::animate();
}

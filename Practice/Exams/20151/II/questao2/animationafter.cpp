#include "animationafter.h"
#include "animation.h"

#include <iostream>

using namespace std;

AnimationAfter::AnimationAfter(Animation *animation) :
    AnimationDecorator(animation)
{

}

void AnimationAfter::animate()
{
    AnimationDecorator::animate();
    cout << "DO SOMETHING AFTER!!!" << endl;
}

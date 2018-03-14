#include "animationdecorator.h"

AnimationDecorator::AnimationDecorator(Animation *animation) :
    m_animation(animation)
{

}

void AnimationDecorator::animate()
{
    m_animation->animate();
}

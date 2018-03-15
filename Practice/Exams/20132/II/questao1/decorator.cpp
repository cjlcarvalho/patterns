#include "decorator.h"

Decorator::Decorator(Component *component) :
    m_component(component)
{

}

void Decorator::play()
{
    m_component->play();
}

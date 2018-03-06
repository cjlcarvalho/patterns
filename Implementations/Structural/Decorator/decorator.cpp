#include "decorator.h"

Decorator::Decorator(Component *component) :
    m_component(component)
{
    
}

void Decorator::operation()
{
    m_component->operation();
}

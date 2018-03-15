#include "decorator.h"

Decorator::Decorator(Component *component) :
    m_component(component)
{

}

void Decorator::show()
{
    m_component->show();
}

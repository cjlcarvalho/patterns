#include "idecorator.h"

IDecorator::IDecorator(IComponent *decorated) :
    m_decorated(decorated)
{
}

void IDecorator::play()
{
    m_decorated->play();
}

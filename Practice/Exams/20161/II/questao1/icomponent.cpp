#include "icomponent.h"
#include "decorator.h"

#include <QtGlobal>

bool IComponent::addChild(IComponent *child)
{
    Q_UNUSED(child);
    return false;
}

bool IComponent::removeChild(IComponent *child)
{
    Q_UNUSED(child);
    return false;
}

void IComponent::setDecorator(Decorator *decorator)
{
    Q_UNUSED(decorator);
}

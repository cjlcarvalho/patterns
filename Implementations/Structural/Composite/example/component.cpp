#include "component.h"

Component::~Component()
{
}

bool Component::addChild(Component *child)
{
    return false;
}

bool Component::removeChild(Component *child)
{
    return false;
}

Component *Component::getChild(unsigned int index) const
{
    return nullptr;
}

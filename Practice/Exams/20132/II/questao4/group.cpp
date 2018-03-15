#include "group.h"

Group::Group()
{

}

bool Group::addChild(Component *component)
{
    m_children.push_back(component);
    return true;
}

void Group::notify()
{
    for (Component *component : m_children)
        component->notify();
}

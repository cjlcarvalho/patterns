#include "composite.h"

#include "icomponent.h"

#include "decorator.h"

bool Composite::addChild(IComponent *child)
{
    m_children << child;
    return true;
}

bool Composite::removeChild(IComponent *child)
{
    m_children.removeAll(child);
    return true;
}

void Composite::aumentarPreco(double percentual)
{
    foreach(IComponent *child, m_children)
        child->aumentarPreco(percentual);
}

void Composite::setDecorator(Decorator *decorator)
{
    for (IComponent *child : m_children)
        child = decorator->clone()->setDecorated(child);
}

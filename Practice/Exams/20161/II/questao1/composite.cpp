#include "composite.h"

#include "icomponent.h"

#include "decorator.h"

Composite::Composite()
{

}

bool Composite::addChild(IComponent *child)
{
    if (dynamic_cast<Decorator *>(child))
        return false;

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
    for(IComponent *child : m_children) {
        if (!dynamic_cast<Composite *>(child)) {
            m_decorator->setDecorated(child);
            m_decorator->aumentarPreco(percentual);
            m_decorator->setDecorated(nullptr);
        }
	else
	    child->aumentarPreco(percentual);

        // caso for folha, não vai conseguir setar o decorator
        // caso setar o decorator, chame o aumentarPreco dele (ou seja, é composite)
    }
}

void Composite::setDecorator(Decorator *decorator)
{
    for (IComponent *child : m_children)
        child->setDecorator(decorator);

    m_decorator = decorator;
}

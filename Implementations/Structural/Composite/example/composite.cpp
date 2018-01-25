#include "composite.h"

Composite::Composite()
{
}

Composite::~Composite()
{
    for (Component *child : m_children)
        delete child;
    m_children.clear();
}

void Composite::operation()
{
    for (Component *child : m_children)
        child->operation();
}

bool Composite::addChild(Component *child)
{
    m_children.push_back(child);
    return true;
}

bool Composite::removeChild(Component *child)
{
    for (unsigned int i = 0; i < m_children.size(); i++)
        if (child == m_children[i]) {
            delete m_children[i];
            m_children.erase(m_children.begin() + i);
            return true;
        }
    return false;
}

Component *Composite::getChild(unsigned int index) const
{
    if (index < m_children.size())
        return m_children[index];
    return nullptr;
}

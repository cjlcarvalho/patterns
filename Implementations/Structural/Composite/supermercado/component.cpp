#include "component.h"

Component::Component(int id, std::string nome) :
    m_id(id),
    m_nome(nome)
{
}

Component::~Component()
{
    for (Component *child : m_children)
        delete child;
    m_children.clear();
}

bool Component::addChild(Component *child)
{
    return false;
}

bool Component::removeChild(Component *child)
{
    return false;
}

std::vector<Component *> Component::children() const
{
    return m_children;
}

#include "component.h"

Component::Component(int id, std::string nome) :
    m_id(id),
    m_nome(nome)
{
}

Component *Component::addChild(Component *child)
{
    return nullptr;
}

Component *Component::removeChild(Component *child)
{
    return nullptr;
}

bool Component::operator==(Component *other)
{
    return m_id == other->m_id;
}

std::vector<Component *> Component::children() const
{
    return m_children;
}

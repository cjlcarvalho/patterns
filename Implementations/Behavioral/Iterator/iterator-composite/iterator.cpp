#include "iterator.h"
#include "component.h"

Iterator::Iterator(Component *component) :
    m_component(component),
    m_top(0)
{

}

void Iterator::first()
{
    m_top = 0;
}

void Iterator::next()
{
    if (hasNext())
        m_top++;
}

bool Iterator::hasNext() const
{
    return m_top < m_component->components().size();
}

Component *Iterator::current() const
{
    if (hasNext())
        return m_component->components()[m_top];
    return nullptr;
}

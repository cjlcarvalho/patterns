#include "marketcomposite.h"

#include <algorithm>

MarketComposite::MarketComposite()
{
}

MarketComposite::~MarketComposite()
{
    for (Component *child : m_children)
        delete child;
    m_children.clear();
}

void MarketComposite::mostrar() const
{
    for (Component *child : m_children)
        child->mostrar();
}

void MarketComposite::aumentarPreco(double valor)
{
    for (Component *child : m_children)
        child->aumentarPreco(valor);
}

bool MarketComposite::addChild(Component *child)
{
    m_children.push_back(child);
    return true;
}

bool MarketComposite::removeChild(Component *child)
{
    return m_children.erase(std::remove(m_children.begin(), m_children.end(), child), m_children.end()) != m_children.end();
}

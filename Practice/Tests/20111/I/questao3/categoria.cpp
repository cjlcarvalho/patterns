#include "categoria.h"

#include <algorithm>

Categoria::Categoria()
{
}

Categoria::~Categoria()
{
    for (Component *child : m_children)
        delete child;
    m_children.clear();
}

bool Categoria::addChild(Component *child)
{
    m_children.push_back(child);
    return true;
}

bool Categoria::descartePorValidade(Component *child)
{
    return m_children.erase(remove(m_children.begin(), m_children.end(), child), m_children.end()) != m_children.end();
}

void Categoria::modificarPreco(double escala)
{
    for (Component *child : m_children)
        child->modificarPreco(escala);
}

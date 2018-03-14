#include "categoria.h"

Categoria::Categoria()
{
    m_children.clear();
}

bool Categoria::addChild(Component *child)
{
    m_children.push_back(child);
    return true;
}

void Categoria::aumentarPreco(double porcentagem)
{
    for (Component *child : m_children)
        child->aumentarPreco(porcentagem);
}

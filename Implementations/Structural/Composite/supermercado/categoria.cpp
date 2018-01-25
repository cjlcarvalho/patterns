#include "categoria.h"

Categoria::Categoria(int id, std::string nome) :
    Component(id, nome)
{
}

void Categoria::mostrar()
{
    for (Component *child : m_children)
        child->mostrar();
}

void Categoria::aumentarPreco(double valor)
{
    for (Component *child : m_children)
        child->aumentarPreco(valor);
}

bool Categoria::addChild(Component *child)
{
    m_children.push_back(child);
    return true;
}

bool Categoria::removeChild(Component *child)
{
    for (unsigned int i = 0; i < m_children.size(); i++)
        if (child == m_children[i]) {
            delete m_children[i];
            m_children.erase(m_children.begin() + i);
            return true;
        }

    return false;
}

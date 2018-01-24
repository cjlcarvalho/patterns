#include "component.h"
#include "supermercado.h"

Supermercado::Supermercado(int id, std::string nome) :
    Component(id, nome)
{

}

void Supermercado::mostrar()
{
    for (Component *child : m_children)
        child->mostrar();
}

void Supermercado::aumentarPreco(double valor)
{
    for (Component *child : m_children)
        child->aumentarPreco(valor);
}

Component *Supermercado::addChild(Component *child)
{
    m_children.push_back(child);
    return child;
}

Component *Supermercado::removeChild(Component *child)
{
    for (unsigned int i = 0; i < m_children.size(); i++)
        if (m_children[i] == child) {
            m_children.erase(m_children.begin() + i);
            return child;
        }

    return nullptr;
}

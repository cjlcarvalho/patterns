#include "category.h"

Category::Category()
{

}

bool Category::addChild(Component *child)
{
    m_children.push_back(child);
    return true;
}

void Category::aumentarPreco(double porcentagem)
{
    for (Component *child : m_children)
        child->aumentarPreco(porcentagem);
}

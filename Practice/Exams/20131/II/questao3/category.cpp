#include "category.h"

Category::Category()
{

}

bool Category::addComponent(BlogComponent *component)
{
    m_components.push_back(component);
    return true;
}

void Category::update()
{
    for (BlogComponent *component : m_components)
        component->update();
}

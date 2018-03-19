#include "group.h"

Group::Group()
{

}

bool Group::addComponent(Component *component)
{
    m_components.push_back(component);
    return true;
}

void Group::addGrade(double grade)
{
    for (Component *component : m_components)
        component->addGrade(grade);
}

void Group::showGrade()
{
    for (Component *component : m_components)
        component->showGrade();
}

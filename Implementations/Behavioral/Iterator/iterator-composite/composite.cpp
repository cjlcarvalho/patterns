#include "composite.h"

#include <algorithm>

using namespace std;

Composite::Composite()
{

}

vector<Component *> Composite::components() const
{
    return m_components;
}

bool Composite::addComponent(Component *component)
{
    m_components.push_back(component);
    return true;
}

bool Composite::removeComponent(Component *component)
{
    auto it = find(m_components.begin(), m_components.end(), component);

    if (it != m_components.end()) {
        m_components.erase(it);
        return true;
    }

    return false;
}

void Composite::operation()
{
    for (Component *component : m_components)
        component->operation();
}

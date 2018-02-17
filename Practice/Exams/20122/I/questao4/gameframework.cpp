#include "gameframework.h"
#include "igamecomponent.h"

GameFramework::GameFramework()
{

}

GameFramework::~GameFramework()
{
    for (auto it = m_components.begin(); it != m_components.end(); it++)
        delete (*it).second;
    m_components.clear();
}

bool GameFramework::registerComponent(string name, IGameComponent *component)
{
    if (!m_components.count(name)) {
        m_components[name] = component;
        return true;
    }
    return false;
}

IGameComponent *GameFramework::retrieveComponent(string name)
{
    if (m_components.count(name))
        return m_components[name]->clone();
    return nullptr;
}

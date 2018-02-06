#include "itransmissor.h"
#include "icomponent.h"

ITransmissor::ITransmissor()
{

}

ITransmissor::~ITransmissor()
{
    for (auto it = m_components.begin(); it != m_components.end(); it++)
        delete (*it).second;
    m_components.clear();
}

bool ITransmissor::registerComponent(string name, IComponent *component)
{
    if (!m_components.count(name)) {
        m_components[name] = component;
        return true;
    }
    return false;
}

IComponent *ITransmissor::retrieveComponent(string name)
{
    if (m_components.count(name))
        return m_components[name]->clone();
    return nullptr;
}

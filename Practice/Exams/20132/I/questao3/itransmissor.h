#ifndef ITRANSMISSOR_H
#define ITRANSMISSOR_H

#include <string>
#include <map>

class IComponent;

using namespace std;

class ITransmissor
{
public:
    ITransmissor();
    ~ITransmissor();
    bool registerComponent(string name, IComponent *component);
    IComponent *retrieveComponent(string name);

private:
    map<string, IComponent *> m_components;
};

#endif // ITRANSMISSOR_H

#ifndef COMPONENT_H
#define COMPONENT_H

#include <vector>

using namespace std;

class Component
{
public:
    virtual vector<Component *> components() const;
    virtual bool addComponent(Component *component);
    virtual bool removeComponent(Component *component);
    virtual void operation() = 0;
};

#endif // COMPONENT_H

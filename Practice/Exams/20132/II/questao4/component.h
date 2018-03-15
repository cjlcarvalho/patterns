#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
    virtual bool addChild(Component *component);
    virtual void notify() = 0;
};

#endif // COMPONENT_H

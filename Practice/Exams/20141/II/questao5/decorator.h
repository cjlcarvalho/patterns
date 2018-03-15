#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class Decorator : public Component
{
public:
    virtual void show() override;

protected:
    Decorator(Component *component);

private:
    Component *m_component;
};

#endif // DECORATOR_H

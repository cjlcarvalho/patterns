#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class Decorator : public Component
{
public:
    Decorator(Component *component);
    virtual void operation();  
    
private:
    Component *m_component;
};

#endif // DECORATOR_H

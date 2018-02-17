#ifndef CONCRETEDECORATORB_H
#define CONCRETEDECORATORB_H

#include "decorator.h"

class Component;

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(Component *component);
    void operation();
    
private:
    void someMethod();
};

#endif // CONCRETEDECORATORB_H

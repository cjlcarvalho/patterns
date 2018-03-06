#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "decorator.h"

class Component;

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(Component *component);
    void operation();
private:
    void addedBehavior();
};

#endif // CONCRETEDECORATORA_H

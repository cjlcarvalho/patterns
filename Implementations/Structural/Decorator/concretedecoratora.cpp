#include "concretedecoratora.h"
#include "decorator.h"
#include "component.h"

#include <iostream>

using namespace std;

ConcreteDecoratorA::ConcreteDecoratorA(Component *component) :
    Decorator(component)
{
    
}

void ConcreteDecoratorA::operation()
{
    Decorator::operation();
    addedBehavior();
}

void ConcreteDecoratorA::addedBehavior()
{
    cout << "ConcreteDecoratorA addedBehavior" << endl;
}

#include "concretedecoratorb.h"
#include "decorator.h"
#include "component.h"

#include <iostream>

using namespace std;

ConcreteDecoratorB::ConcreteDecoratorB(Component *component) :
    Decorator(component)
{
    
}

void ConcreteDecoratorB::operation()
{
    someMethod();
    Decorator::operation();
}

void ConcreteDecoratorB::someMethod()
{
    cout << "ConcreteDecoratorB someMethod" << endl;
}

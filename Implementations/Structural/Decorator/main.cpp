#include "component.h"
#include "concretecomponent.h"
#include "concretedecoratora.h"
#include "concretedecoratorb.h"

int main() 
{
    Component *component = new ConcreteDecoratorB(new ConcreteDecoratorA(new ConcreteComponent));
    
    component->operation();
    
    Component *otherComponent = new ConcreteDecoratorA(new ConcreteDecoratorB(new ConcreteComponent));
    
    otherComponent->operation();
    
    return 0;
}

#include "abstraction.h"
#include "implementor.h"
#include "concreteimplementora.h"
#include "concreteimplementorb.h"

int main()
{
    Abstraction *abstraction = new Abstraction;
    
    abstraction->setImplementor(new ConcreteImplementorA);
    abstraction->operation();

    abstraction->setImplementor(new ConcreteImplementorB);
    abstraction->operation();

    return 0;
}

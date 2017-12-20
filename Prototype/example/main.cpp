#include "interfaces/IPrototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

int main(){
    IPrototype* p1 = new ConcretePrototype1(1);
    IPrototype* p2 = p1->clone();
    p1->talk();
    p2->talk();
    delete p2;
    p2 = new ConcretePrototype1(2);
    p2->talk();
    IPrototype* p3 = new ConcretePrototype2(3);
    IPrototype* p4 = p3->clone();
    p3->talk();
    p4->talk();
    return 0;
}

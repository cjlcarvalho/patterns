#include "concreteelementb.h"
#include "visitor.h"

#include <iostream>

using namespace std;

ConcreteElementB::ConcreteElementB()
{

}

void ConcreteElementB::accept(Visitor *visitor)
{
    visitor->visitConcreteElementB(this);
}

void ConcreteElementB::operationB()
{
    cout << "ConcreteElementB::operationB" << endl;
}

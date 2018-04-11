#include "concreteelementa.h"
#include "visitor.h"

#include <iostream>

using namespace std;

ConcreteElementA::ConcreteElementA()
{

}

void ConcreteElementA::accept(Visitor *visitor)
{
    visitor->visitConcreteElementA(this);
}

void ConcreteElementA::operationA()
{
    cout << "ConcreteElementA::operationA" << endl;
}

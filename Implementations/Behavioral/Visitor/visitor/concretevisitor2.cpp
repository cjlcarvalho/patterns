#include "concretevisitor2.h"
#include "concreteelementa.h"
#include "concreteelementb.h"

#include <iostream>

using namespace std;

ConcreteVisitor2::ConcreteVisitor2()
{

}

void ConcreteVisitor2::visitConcreteElementA(ConcreteElementA *element)
{

}

void ConcreteVisitor2::visitConcreteElementB(ConcreteElementB *element)
{
    cout << "ConcreteVisitor2: visiting ConcreteElementB instance" << endl;

    element->operationB();
}

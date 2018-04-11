#include "concretevisitor1.h"
#include "concreteelementa.h"
#include "concreteelementb.h"

#include <iostream>

using namespace std;

ConcreteVisitor1::ConcreteVisitor1()
{

}

void ConcreteVisitor1::visitConcreteElementA(ConcreteElementA *element)
{
    cout << "ConcreteVisitor1: visiting ConcreteElementA instance" << endl;

    element->operationA();
}

void ConcreteVisitor1::visitConcreteElementB(ConcreteElementB *element)
{

}

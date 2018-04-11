#ifndef CONCRETEVISITOR1_H
#define CONCRETEVISITOR1_H

#include "visitor.h"

class ConcreteElementA;
class ConcreteElementB;

class ConcreteVisitor1 : public Visitor
{
public:
    ConcreteVisitor1();
    void visitConcreteElementA(ConcreteElementA *element) override;
    void visitConcreteElementB(ConcreteElementB *element) override;
};

#endif // CONCRETEVISITOR1_H

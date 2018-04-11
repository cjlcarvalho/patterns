#ifndef CONCRETEVISITOR2_H
#define CONCRETEVISITOR2_H

#include "visitor.h"

class ConcreteElementA;
class ConcreteElementB;

class ConcreteVisitor2 : public Visitor
{
public:
    ConcreteVisitor2();
    void visitConcreteElementA(ConcreteElementA *element) override;
    void visitConcreteElementB(ConcreteElementB *element) override;
};

#endif // CONCRETEVISITOR2_H

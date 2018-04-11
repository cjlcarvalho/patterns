#ifndef VISITOR_H
#define VISITOR_H

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
    virtual void visitConcreteElementA(ConcreteElementA *element) = 0;
    virtual void visitConcreteElementB(ConcreteElementB *element) = 0;
};

#endif // VISITOR_H

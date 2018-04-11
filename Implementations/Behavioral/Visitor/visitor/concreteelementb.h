#ifndef CONCRETEELEMENTB_H
#define CONCRETEELEMENTB_H

#include "element.h"

class Visitor;

class ConcreteElementB : public Element
{
public:
    ConcreteElementB();
    void accept(Visitor *visitor) override;
    void operationB();
};

#endif // CONCRETEELEMENTB_H

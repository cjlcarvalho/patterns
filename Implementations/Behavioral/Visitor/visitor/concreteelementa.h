#ifndef CONCRETEELEMENTA_H
#define CONCRETEELEMENTA_H

#include "element.h"

class Visitor;

class ConcreteElementA : public Element
{
public:
    ConcreteElementA();
    void accept(Visitor *visitor) override;
    void operationA();
};

#endif // CONCRETEELEMENTA_H

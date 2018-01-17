#ifndef CONCRETEBUILDER2_H
#define CONCRETEBUILDER2_H

#include "builder.h"

class Product;

class ConcreteBuilder2 : public Builder
{
public:
    ConcreteBuilder2();
    void buildPart();
    Product *getResult() const;

private:
    Product *m_result;
};

#endif // CONCRETEBUILDER2_H

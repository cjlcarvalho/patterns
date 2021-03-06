#ifndef CONCRETEBUILDER1_H
#define CONCRETEBUILDER1_H

#include "builder.h"

class Product;

class ConcreteBuilder1 : public Builder
{
public:
    ConcreteBuilder1();
    void buildPart() override;
    Product *getResult() const override;

private:
    Product *m_result;
};

#endif // CONCRETEBUILDER1_H

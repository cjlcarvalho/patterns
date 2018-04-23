#ifndef MEAT_H
#define MEAT_H

#include "product.h"

class Visitor;

class Meat : public Product
{
public:
    Meat(double price);
    void accept(Visitor *v) override;

private:
    double m_price;
};

#endif // MEAT_H

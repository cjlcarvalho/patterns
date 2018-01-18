#ifndef PRODUCT2_H
#define PRODUCT2_H

#include "product.h"

class Product2 : public Product
{
public:
    Product2();
    void doSomething() override;
};

#endif // PRODUCT2_H

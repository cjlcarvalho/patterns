#ifndef PRODUCT1_H
#define PRODUCT1_H

#include "product.h"

class Product1 : public Product
{
public:
    Product1();
    void doSomething() override;
};

#endif // PRODUCT1_H

#ifndef PRODUCT_H
#define PRODUCT_H

class Visitor;

class Product
{
public:
    virtual void accept(Visitor *visitor) = 0;
};

#endif // PRODUCT_H

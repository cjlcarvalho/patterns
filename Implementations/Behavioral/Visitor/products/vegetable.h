#ifndef VEGETABLE_H
#define VEGETABLE_H

#include "product.h"

class Visitor;

class Vegetable : public Product
{
public:
    Vegetable(double price);
    void accept(Visitor *v) override;
    void increasePrice(double percent);
    double price() const;

private:
    double m_price;
};

#endif // VEGETABLE_H

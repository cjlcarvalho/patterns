#include "vegetable.h"
#include "visitor.h"

Vegetable::Vegetable(double price) :
    m_price(price)
{
}

void Vegetable::accept(Visitor *v)
{
    v->visitVegetable(this);
}

void Vegetable::increasePrice(double percent)
{
    m_price += m_price * percent;
}

double Vegetable::price() const
{
    return m_price;
}

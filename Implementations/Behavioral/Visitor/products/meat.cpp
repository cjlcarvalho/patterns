#include "meat.h"
#include "visitor.h"

Meat::Meat(double price) :
    m_price(price)
{
}

void Meat::accept(Visitor *v)
{
    v->visitMeat(this);
}

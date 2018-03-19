#ifndef STATISTICALCOMPONENT_H
#define STATISTICALCOMPONENT_H

#include "itemdecorator.h"

class Item;

class StatisticalComponent : public ItemDecorator
{
public:
    StatisticalComponent(Item *item);
    void clean() override;

private:
    void restartStatisticalComponent();
};

#endif // STATISTICALCOMPONENT_H

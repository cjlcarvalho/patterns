#ifndef ITEMDECORATOR_H
#define ITEMDECORATOR_H

#include "item.h"

class ItemDecorator : public Item
{
public:
    ItemDecorator(Item *item);
    virtual bool addItem(Item *item) override;
    virtual void clone() override;
    virtual void clean() override;

private:
    Item *m_item;
};

#endif // ITEMDECORATOR_H

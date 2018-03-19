#ifndef ITEM_H
#define ITEM_H

class Item
{
public:
    virtual bool addItem(Item *item);
    virtual void clone() = 0;
    virtual void clean() = 0;
};

#endif // ITEM_H

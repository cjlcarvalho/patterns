#include "itemdecorator.h"

ItemDecorator::ItemDecorator(Item *item) :
    m_item(item)
{

}

bool ItemDecorator::addItem(Item *item)
{
    return m_item->addItem(item);
}

void ItemDecorator::clean()
{
    m_item->clean();
}

void ItemDecorator::clone()
{
    m_item->clone();
}

#ifndef ITEM_H
#define ITEM_H

#include "component.h"

class Item : public Component
{
public:
    Item(double preco);
    double preco() const;
    void aumentarPreco(double porcentagem) override;

private:
    double m_preco;
};

#endif // ITEM_H

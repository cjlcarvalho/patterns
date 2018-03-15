#include "item.h"

Item::Item(double preco) :
    m_preco(preco)
{

}

double Item::preco() const
{
    return m_preco;
}

void Item::aumentarPreco(double porcentagem)
{
    m_preco += (m_preco * (porcentagem / 100));
}

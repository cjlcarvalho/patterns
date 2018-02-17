#include "produto.h"

Produto::Produto(double preco) :
    m_preco(preco)
{

}

bool Produto::addChild(Component *child)
{
    return false;
}

bool Produto::descartePorValidade(Component *child)
{
    return false;
}

void Produto::modificarPreco(double escala)
{
    m_preco += m_preco * (escala / 100);
}

#include "produto.h"

Produto::Produto(double preco) :
    m_preco(preco)
{

}

void Produto::aumentarPreco(double porcentagem)
{
    m_preco += (m_preco * (porcentagem / 100));
}

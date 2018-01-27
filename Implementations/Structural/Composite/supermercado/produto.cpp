#include "produto.h"

#include <iostream>

Produto::Produto(double preco) :
    m_preco(preco)
{
}

void Produto::aumentarPreco(double valor)
{
    m_preco += (m_preco * valor);
}

void Produto::mostrar() const
{
    std::cout << m_preco << std::endl;
}

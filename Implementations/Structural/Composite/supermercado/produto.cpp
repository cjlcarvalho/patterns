#include "produto.h"

#include <iostream>

Produto::Produto(int id, std::string nome, double preco) :
    Component(id, nome),
    m_preco(preco)
{
}

void Produto::aumentarPreco(double valor)
{
    m_preco += (m_preco * valor);
}

void Produto::mostrar()
{
    std::cout << m_preco << std::endl;
}

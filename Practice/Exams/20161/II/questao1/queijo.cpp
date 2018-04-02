#include "queijo.h"

#include <QDebug>

Queijo::Queijo(double preco) : m_preco(preco)
{
}

void Queijo::aumentarPreco(double percentual)
{
    qDebug() << "Aumentando o preco do queijo para " << m_preco + m_preco * percentual;
}

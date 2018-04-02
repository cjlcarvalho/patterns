#include "arroz.h"

#include <QDebug>

Arroz::Arroz(double preco) : m_preco(preco)
{

}

void Arroz::aumentarPreco(double percentual)
{
    qDebug() << "Aumentando o preco do arroz para " << m_preco + m_preco * percentual;
}

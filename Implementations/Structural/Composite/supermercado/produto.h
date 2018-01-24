#ifndef PRODUTO_H
#define PRODUTO_H

#include "component.h"

class Produto : public Component
{
public:
    Produto(int id, std::string nome, double preco);
    void aumentarPreco(double valor) override;
    void mostrar();

private:
    double m_preco;
};

#endif // PRODUTO_H

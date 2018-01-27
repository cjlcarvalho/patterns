#ifndef PRODUTO_H
#define PRODUTO_H

#include "component.h"

class Produto : public Component
{
public:
    Produto(double preco);
    void aumentarPreco(double valor) override;
    void mostrar() const override;

private:
    double m_preco;
};

#endif // PRODUTO_H

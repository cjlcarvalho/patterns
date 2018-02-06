#ifndef PRODUTO_H
#define PRODUTO_H

#include "component.h"

class Produto : public Component
{
public:
    Produto(double preco);
    bool addChild(Component *child);
    bool descartePorValidade(Component *child);
    void modificarPreco(double escala);

private:
    double m_preco;
};

#endif // PRODUTO_H

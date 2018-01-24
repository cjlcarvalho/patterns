#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

#include "component.h"

class Supermercado : public Component
{
public:
    Supermercado(int id, std::string nome);
    void aumentarPreco(double valor) override;
    Component *addChild(Component *child) override;
    Component *removeChild(Component *child) override;
    void mostrar();
};

#endif // SUPERMERCADO_H

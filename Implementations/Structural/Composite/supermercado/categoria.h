#ifndef CATEGORIA_H
#define CATEGORIA_H

#include "component.h"

class Categoria : public Component
{
public:
    Categoria(int id, std::string nome);
    void aumentarPreco(double valor) override;
    Component *addChild(Component *child) override;
    Component *removeChild(Component *child) override;
    void mostrar();
};

#endif // CATEGORIA_H

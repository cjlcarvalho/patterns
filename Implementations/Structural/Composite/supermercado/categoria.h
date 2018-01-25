#ifndef CATEGORIA_H
#define CATEGORIA_H

#include "component.h"

class Categoria : public Component
{
public:
    Categoria(int id, std::string nome);
    void aumentarPreco(double valor) override;
    bool addChild(Component *child) override;
    bool removeChild(Component *child) override;
    void mostrar() override;
};

#endif // CATEGORIA_H

#ifndef CATEGORIA_H
#define CATEGORIA_H

#include "component.h"

#include <vector>

using namespace std;

class Categoria : public Component
{
public:
    Categoria();
    bool addChild(Component *child) override;
    void aumentarPreco(double porcentagem) override;

private:
    vector<Component *> m_children;
};

#endif // CATEGORIA_H

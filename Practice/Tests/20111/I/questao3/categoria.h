#ifndef CATEGORIA_H
#define CATEGORIA_H

#include "component.h"

#include <vector>

using namespace std;

class Categoria : public Component
{
public:
    Categoria();
    ~Categoria();
    bool addChild(Component *child);
    bool descartePorValidade(Component *child);
    void modificarPreco(double escala);

private:
    vector<Component *> m_children;
};

#endif // CATEGORIA_H

#ifndef QUEIJO_H
#define QUEIJO_H

#include "icomponent.h"

class Queijo : public IComponent
{
public:
    Queijo(double preco);
    virtual void aumentarPreco(double percentual);
private:
    double m_preco;
};

#endif // QUEIJO_H

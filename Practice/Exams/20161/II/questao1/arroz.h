#ifndef LEITE_H
#define LEITE_H

#include "icomponent.h"

class Arroz : public IComponent
{
public:
    Arroz(double preco);
    virtual void aumentarPreco(double percentual);

private:
    double m_preco;
};

#endif // LEITE_H

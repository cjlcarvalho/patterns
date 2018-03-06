#ifndef DECORATOR_H
#define DECORATOR_H

#include "icomponent.h"

class Decorator : public IComponent
{
public:
    void aumentarPreco(double percentual);
    virtual Decorator *clone() = 0;

protected:
    Decorator(IComponent *decorated = 0);

private:
    IComponent *m_decorated;
};

#endif // DECORATOR_H

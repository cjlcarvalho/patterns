#ifndef IDECORATOR_H
#define IDECORATOR_H

#include "icomponent.h"

class IDecorator : public IComponent
{
public:
    virtual void play();

protected:
    IDecorator(IComponent *decorated);

private:
    IComponent *m_decorated;
};

#endif // IDECORATOR_H

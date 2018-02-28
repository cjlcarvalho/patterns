#ifndef PROPAGANDAANTES_H
#define PROPAGANDAANTES_H

#include "idecorator.h"

class IComponent;

class PropagandaAntes : public IDecorator
{
public:
    PropagandaAntes(IComponent *decorated);
    void play();
};

#endif // PROPAGANDAANTES_H

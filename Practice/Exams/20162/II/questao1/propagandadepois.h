#ifndef PROPAGANDADEPOIS_H
#define PROPAGANDADEPOIS_H

#include "idecorator.h"
#include "icomponent.h"

class PropagandaDepois : public IDecorator
{
public:
    PropagandaDepois(IComponent *decorated);
    void play();
};

#endif // PROPAGANDADEPOIS_H

#ifndef CONCRETEPNEU_H
#define CONCRETEPNEU_H

#include "ipneu.h"
#include "iprototype.h"

class ConcretePneu : public IPneu, public IPrototype
{
public:
    ConcretePneu();
    void roll();
    IPrototype *clone();
};

#endif // CONCRETEPNEU_H

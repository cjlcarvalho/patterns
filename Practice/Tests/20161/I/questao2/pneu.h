#ifndef PNEU_H
#define PNEU_H

#include "iprototype.h"

class Pneu : public IPrototype {
public:
    Pneu();
    IPrototype* clone();
};

#endif // PNEU_H

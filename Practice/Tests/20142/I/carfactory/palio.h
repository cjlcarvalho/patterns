#ifndef PALIO_H
#define PALIO_H

#include "../interfaces/iprototype.h"

class Palio : public IPrototype {
public:
    Palio();
    IPrototype* clone();
};

#endif // PALIO_H

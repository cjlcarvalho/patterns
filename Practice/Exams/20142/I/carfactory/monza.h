#ifndef MONZA_H
#define MONZA_H

#include "../interfaces/iprototype.h"

class Monza : public IPrototype {
public:
    Monza();
    IPrototype* clone();
};

#endif // MONZA_H

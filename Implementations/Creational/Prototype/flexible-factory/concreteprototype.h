#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "iprototype.h"

class ConcretePrototype : public IPrototype {
    private:
        int id;
    public:
        ConcretePrototype(int);
        IPrototype* clone();
};

#endif

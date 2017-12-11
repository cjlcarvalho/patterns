#ifndef CONCRETEPROTOTYPE1_H
#define CONCRETEPROTOTYPE1_H

#include "interfaces/IPrototype.h"

class ConcretePrototype1 : public IPrototype {
    public:
        ConcretePrototype1(int);
        ConcretePrototype1(const ConcretePrototype1*);
        IPrototype* clone();
    private:
        int _id;
};

#endif // CONCRETEPROTOTYPE1_H

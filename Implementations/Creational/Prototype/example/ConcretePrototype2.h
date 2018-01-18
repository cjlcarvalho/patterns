#ifndef CONCRETEPROTOTYPE2_H
#define CONCRETEPROTOTYPE2_H

#include "interfaces/IPrototype.h"

class ConcretePrototype2 : public IPrototype {
    public:
        ConcretePrototype2(int);
        ConcretePrototype2(const ConcretePrototype2*);
        IPrototype* clone();
        void talk();
    private:
        int _id;
};

#endif // CONCRETEPROTOTYPE2_H

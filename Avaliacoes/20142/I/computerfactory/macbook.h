#ifndef MACBOOK_H
#define MACBOOK_H

#include "../interfaces/iprototype.h"

class Macbook : public IPrototype {
public:
    Macbook();
    IPrototype* clone();
};

#endif // MACBOOK_H

#ifndef DESKTOP_H
#define DESKTOP_H

#include "../interfaces/iprototype.h"

class Desktop : public IPrototype {
public:
    Desktop();
    IPrototype* clone();
};

#endif // DESKTOP_H

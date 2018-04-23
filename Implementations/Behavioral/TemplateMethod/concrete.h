#ifndef CONCRETE_H
#define CONCRETE_H

#include "abstraction.h"

class Concrete : public Abstraction
{
public:
    Concrete();
    void changeable1() override;
    void changeable2() override;
};

#endif // CONCRETE_H

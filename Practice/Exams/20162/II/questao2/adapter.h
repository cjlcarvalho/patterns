#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

class Adapter : public Target, public Adaptee
{
public:
    Adapter(int x, int y);
    void mover(int x, int y);
};

#endif // ADAPTER_H

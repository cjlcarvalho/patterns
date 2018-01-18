#ifndef TARGET_H
#define TARGET_H

#include "adaptee.h"

class Target
{
public:
    virtual void request() = 0;
    virtual void setAdaptee(Adaptee *adaptee) = 0;
};

#endif // TARGET_H

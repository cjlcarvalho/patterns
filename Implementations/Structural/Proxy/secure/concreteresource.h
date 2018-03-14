#ifndef CONCRETERESOURCE_H
#define CONCRETERESOURCE_H

#include "resource.h"

class ConcreteResource : public Resource
{
public:
    ConcreteResource();
    void doSomething() override;
};

#endif // CONCRETERESOURCE_H

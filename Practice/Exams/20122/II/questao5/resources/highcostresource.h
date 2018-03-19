#ifndef HIGHCOSTRESOURCE_H
#define HIGHCOSTRESOURCE_H

#include "resource.h"

class HighCostResource : public Resource
{
public:
    HighCostResource();
    void doSomething() override;
};

#endif // HIGHCOSTRESOURCE_H

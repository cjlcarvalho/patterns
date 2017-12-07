#ifndef IFACTORY_H
#define IFACTORY_H

#include "iproduct1.h"
#include "iproduct2.h"

class IFactory
{
public:
    //IFactory();
    virtual IProduct1* createProduct1() = 0;
    virtual IProduct2* createProduct2() = 0;
};

#endif // IFACTORY_H

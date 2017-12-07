#ifndef FACTORY1_H
#define FACTORY1_H

#include "../interfaces/iproduct1.h"
#include "../interfaces/iproduct2.h"
#include "../interfaces/ifactory.h"

class Factory1 : public IFactory
{
public:
    Factory1();
    IProduct1* createProduct1();
    IProduct2* createProduct2();
};

#endif // FACTORY1_H

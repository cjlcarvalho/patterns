#ifndef FACTORY2_H
#define FACTORY2_H

#include "../interfaces/ifactory.h"
#include "../interfaces/iproduct1.h"
#include "../interfaces/iproduct2.h"

class Factory2 : public IFactory {
public:
	Factory2();
	IProduct1* createProduct1();
	IProduct2* createProduct2();
};

#endif

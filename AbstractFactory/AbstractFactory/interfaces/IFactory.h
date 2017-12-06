#ifndef IFACTORY_H
#define IFACTORY_H

class IFactory {
	public:
		virtual IProduct1* createProduct1() = 0;
		virtual IProduct2* createProduct2() = 0;
};


#endif

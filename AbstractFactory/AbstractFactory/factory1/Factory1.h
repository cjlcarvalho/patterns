#ifndef FACTORY1_H
#define FACTORY1_H

class Factory1 : IFactory public {
	public:
		IProduct1* createProduct1();
	       	IProduct2* createProduct2();	
};

IProduct1* Factory1::createProduct1(){
	return new Product11;
}

IProduct2* Factory1::createProduct2(){
	return new Product21;
}

#endif 

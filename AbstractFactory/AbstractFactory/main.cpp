#include <iostream>
#include "interfaces/IProduct1.h"
#include "interfaces/IProduct2.h"
#include "interfaces/IFactory.h"
#include "factory1/Product11.h"
#include "factory1/Product21.h"
#include "factory1/Factory1.h"

using namespace std;

int main(){
	int opt;
	while(true){
		IFactory* factory = NULL;
		cout << "1 - Factory1" << endl;
		cout << "2 - Factory2" << endl;
		cin >> opt;
		if(opt == 1)
			factory = new Factory1;
		else if(opt == 2)
			cout << "Not implemented" << endl;
		else
			break;
		if(factory){
			IProduct1* product1 = factory->createProduct1();
			IProduct2* product2 = factory->createProduct2();
			product1->talk();
			product2->sayHi();
		}
	}
	return 0;
}

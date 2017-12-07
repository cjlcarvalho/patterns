#include <iostream>
#include "interfaces/ifactory.h"
#include "factory1/factory1.h"
#include "factory2/factory2.h"

using namespace std;

int main()
{
    int opt;
    IFactory* factory;
    IProduct1* product1;
    IProduct2* product2;
    do{
        factory = NULL;
        cout << "1 - Factory1" << endl;
        cout << "2 - Factory2" << endl;
        cout << "Digite: ";
        cin >> opt;
        cout << opt << endl;
        if(opt == 1)
            factory = new Factory1;
	else if(opt == 2)
	    factory = new Factory2;
        if(factory){
            product1 = factory->createProduct1();
            product2 = factory->createProduct2();
            product1->sayHi();
            product2->sayHello();
        }
    } while(opt);
    return 0;
}

#include <iostream>
#include "interfaces/IPrototype.h"
#include "ConcretePrototype1.h"

using namespace std;

ConcretePrototype1::ConcretePrototype1(int id) : _id(id){
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1* other){
    this->_id = other->_id;
}

IPrototype* ConcretePrototype1::clone(){
    return new ConcretePrototype1(this);
}

void ConcretePrototype1::talk(){
    cout << "ConcretePrototype1::id = " << this->_id << endl;
}

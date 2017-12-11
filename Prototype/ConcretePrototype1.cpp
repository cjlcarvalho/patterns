#include "interfaces/IPrototype.h"
#include "ConcretePrototype1.h"

ConcretePrototype1::ConcretePrototype1(int id) : _id(int){
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1* other){
    this->_id = other->_id;
}

IPrototype* ConcretePrototype1::clone(){
    return new ConcretePrototype1(this);
}

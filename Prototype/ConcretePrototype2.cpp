#include "interfaces/IPrototype.h"
#include "ConcretePrototype2.h"

ConcretePrototype2::ConcretePrototype2(int id) : _id(id){
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2* other){
    this->_id = other->_id;
}

IPrototype* ConcretePrototype2::clone(){
    return new ConcretePrototype2(this);
}

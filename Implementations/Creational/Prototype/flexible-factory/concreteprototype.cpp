#include "concreteprototype.h"
#include "iprototype.h"

ConcretePrototype::ConcretePrototype(int id){
    this->id = id;
}

IPrototype* ConcretePrototype::clone(){
    return new ConcretePrototype(id);
}

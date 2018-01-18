#include "flexiblefactory.h"
#include "iprototype.h"

using namespace std;

FlexibleFactory::FlexibleFactory(){

}

void FlexibleFactory::addPrototype(string name, IPrototype* prototype){
    if(!_prototypes.count(name))
        _prototypes[name] = prototype;
}

IPrototype* FlexibleFactory::create(string name){
    if(_prototypes.count(name))
        return _prototypes[name]->clone();
    return nullptr;
}

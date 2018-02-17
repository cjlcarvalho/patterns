#include "../interfaces/iprototype.h"
#include "carfactory.h"

using namespace std;

CarFactory* CarFactory::_instance = nullptr;

CarFactory::CarFactory(){
}

CarFactory* CarFactory::instance(){
    if(!_instance)
        _instance = new CarFactory;
    return _instance;
}

void CarFactory::registerPrototype(string name, IPrototype* prototype){
    if(!_prototypes.count(name))
        _prototypes[name] = prototype;
}

void CarFactory::unregisterPrototype(string name){
    if(_prototypes.count(name))
        _prototypes.erase(_prototypes.find(name));
}

IPrototype* CarFactory::create(string name){
    if(_prototypes.count(name))
        return _prototypes[name]->clone();
    return nullptr;
}

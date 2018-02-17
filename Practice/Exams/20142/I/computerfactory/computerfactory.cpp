#include "computerfactory.h"
#include "../interfaces/iprototype.h"

using namespace std;

ComputerFactory* ComputerFactory::_instance = nullptr;

ComputerFactory::ComputerFactory(){
}

ComputerFactory* ComputerFactory::instance(){
    if(!_instance)
        _instance = new ComputerFactory;
    return _instance;
}

void ComputerFactory::registerPrototype(string name, IPrototype* prototype){
    if(!_prototypes.count(name))
        _prototypes[name] = prototype;
}

void ComputerFactory::unregisterPrototype(string name){
    if(_prototypes.count(name))
        _prototypes.erase(_prototypes.find(name));
}

IPrototype* ComputerFactory::create(string name){
    if(_prototypes.count(name))
        return _prototypes[name]->clone();
    return nullptr;
}

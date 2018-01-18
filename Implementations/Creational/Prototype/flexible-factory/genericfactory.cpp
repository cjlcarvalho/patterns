#include "genericfactory.h"
#include "iprototype.h"

using namespace std;

GenericFactory::GenericFactory(){
}

bool GenericFactory::registerPrototype(IPrototype* prototype, string name){
    if(!_prototypes.count(name)){
        _prototypes[name] = prototype;
        return true;
    }
    return false;
}

bool GenericFactory::unregisterPrototype(string name){
    if(_prototypes.count(name)){
        _prototypes.erase(_prototypes.find(name));
        return true;
    }
    return false;
}

vector<string> GenericFactory::prototypeNames(){
    vector<string> names;
    for(auto it = _prototypes.begin(); it != _prototypes.end(); ++it)
        names.push_back(it->first);
    return names;
}

void GenericFactory::clear(){
    _prototypes.clear();
}

IPrototype* GenericFactory::create(string name){
    if(_prototypes.count(name))
        return _prototypes[name]->clone();
    return nullptr;
}

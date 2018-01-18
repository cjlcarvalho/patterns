#include "nton.h"

vector<Nton*> Nton::_instances;
int Nton::_qtdInstances = 0;
int Nton::_cntInstances = 0;

Nton::Nton(){
}

void Nton::initialize(int instances){
    if(_qtdInstances)
        return;
    _qtdInstances = instances;
}

Nton* Nton::getInstance(){
    if(_cntInstances < _qtdInstances)
        _instances.push_back(new Nton);
    return _instances[_cntInstances++ % _qtdInstances];
}

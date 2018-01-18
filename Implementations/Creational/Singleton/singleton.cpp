#include <iostream>
#include "singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton(){
}

Singleton* Singleton::Instance(){
    if(!_instance)
        _instance = new Singleton;
    return _instance;
}

void Singleton::doSomething(){
    std::cout << "singleton doSomething" << std::endl;
}

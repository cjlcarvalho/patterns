#ifndef IEXTENSIBLEFACTORY_H
#define IEXTENSIBLEFACTORY_H

#include <string>
#include "iprototype.h"

using namespace std;

class IExtensibleFactory {
public:
    virtual void registerPrototype(string name, IPrototype* prototype) = 0;
    virtual void unregisterPrototype(string name) = 0;
    virtual IPrototype* create(string name) = 0;
};

#endif // IEXTENSIBLEFACTORY_H

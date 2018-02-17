#ifndef COMPUTERFACTORY_H
#define COMPUTERFACTORY_H

#include "../interfaces/iextensiblefactory.h"
#include "../interfaces/iprototype.h"
#include <map>

using namespace std;

class ComputerFactory : public IExtensibleFactory {
public:
    void registerPrototype(string name, IPrototype* prototype);
    void unregisterPrototype(string name);
    IPrototype* create(string name);
    static ComputerFactory* instance();
private:
    ComputerFactory();
    map<string, IPrototype*> _prototypes;
    static ComputerFactory* _instance;
};

#endif // COMPUTERFACTORY_H

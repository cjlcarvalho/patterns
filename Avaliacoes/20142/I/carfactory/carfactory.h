#ifndef CARFACTORY_H
#define CARFACTORY_H

#include "../interfaces/iextensiblefactory.h"
#include "../interfaces/iprototype.h"
#include <map>

using namespace std;

class CarFactory : public IExtensibleFactory {
public:
    void registerPrototype(string name, IPrototype* prototype);
    void unregisterPrototype(string name);
    IPrototype* create(string name);
    static CarFactory* instance();
private:
    CarFactory();
    map<string, IPrototype*> _prototypes;
    static CarFactory* _instance;
};

#endif // CARFACTORY_H

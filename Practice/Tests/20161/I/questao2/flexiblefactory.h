#ifndef FLEXIBLEFACTORY_H
#define FLEXIBLEFACTORY_H

#include <map>
#include "iprototype.h"

using namespace std;

class FlexibleFactory {
public:
    FlexibleFactory();
    void addPrototype(string name, IPrototype* prototype);
    IPrototype* create(string name);
private:
    map< string, IPrototype* > _prototypes;
};

#endif // FLEXIBLEFACTORY_H

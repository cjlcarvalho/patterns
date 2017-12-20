#ifndef GENERICFACTORY_H
#define GENERICFACTORY_H

#include <map>
#include <vector>
#include "iprototype.h"

using namespace std;

class GenericFactory {
    public:
        GenericFactory();
        bool registerPrototype(IPrototype*, string);
        bool unregisterPrototype(string);
        vector<string> prototypeNames() const;
        void clear();
        IPrototype* create(string) const;
    private:
        map<string, IPrototype*> _prototypes;
};

#endif


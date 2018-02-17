#ifndef MYFACTORY_H
#define MYFACTORY_H

#include <map>
#include <vector>
#include <string>

class IPrototype;

using namespace std;

class MyFactory
{
public:
    bool addPrototype(string name, IPrototype *prototype, unsigned int quantity);
    IPrototype *create(string name);
    static MyFactory *instance();

private:
    MyFactory();

private:
    static MyFactory *m_instance;
    map<string, unsigned int> m_counts;
    map<string, unsigned int> m_quantities;
    map<string, IPrototype*> m_prototype;
    map<string, vector<IPrototype*> > m_prototypes;
};

#endif // MYFACTORY_H

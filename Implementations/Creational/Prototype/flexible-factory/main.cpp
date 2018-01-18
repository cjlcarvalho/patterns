#include <iostream>
#include <vector>
#include "iprototype.h"
#include "genericfactory.h"
#include "concreteprototype.h"

using namespace std;

int main(){
    GenericFactory* factory = new GenericFactory;
    factory->registerPrototype(new ConcretePrototype(1), "um");
    factory->registerPrototype(new ConcretePrototype(2), "dois");
    vector<string> nomes = factory->prototypeNames();
    for(string nome : nomes)
        cout << nome << endl;
    if(!factory->unregisterPrototype("um"))
        cout << "prototipo inexistente" << endl;
    else
        cout << "um excluido" << endl;
    factory->registerPrototype(new ConcretePrototype(5), "cinco");
    nomes = factory->prototypeNames();
    for(string nome : nomes)
        cout << nome << endl;
    factory->clear();
    nomes = factory->prototypeNames();
    if(nomes.empty()) cout << "factory vazia" << endl;
    return 0;
}

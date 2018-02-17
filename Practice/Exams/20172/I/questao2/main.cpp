#include "adaptee.h"
#include "adapter.h"
#include "target.h"

#include <iostream>

using namespace std;

int main()
{
    Adapter *adapter = new Adapter;
    
    adapter->setAdaptee(new Adaptee);
    
    if (!adapter->play("Sucessos do Carnaval 2018", 10))
        cout << "Não foi possível tocar o arquivo" << endl;
    
    if (!adapter->play("Rock pesadão!!!", 1000))
        cout << "Não foi possível tocar o arquivo" << endl;

    adapter->setAdaptee(nullptr);

    if (!adapter->play("Jazz Hits", 20))
        cout << "Não foi possível tocar o arquivo" << endl;

    return 0;
}

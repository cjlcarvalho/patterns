#include "concrete.h"

#include <iostream>

using namespace std;

Concrete::Concrete()
{
}

void Concrete::changeable1()
{
    cout << "Concrete::changeable1 called" << endl;
}

void Concrete::changeable2()
{
    cout << "Concrete::changeable2 called" << endl;
}

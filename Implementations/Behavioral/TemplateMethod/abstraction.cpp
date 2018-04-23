#include "abstraction.h"

#include <iostream>

using namespace std;

void Abstraction::templateMethod()
{
    changeable1();
    unchangeable();
    changeable2();
}

void Abstraction::unchangeable()
{
    cout << "Abstraction::unchangeable called" << endl;
}

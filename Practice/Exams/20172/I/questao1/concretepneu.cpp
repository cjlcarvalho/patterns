#include "concretepneu.h"

#include <iostream>

using namespace std;

ConcretePneu::ConcretePneu()
{
}

void ConcretePneu::roll()
{
    cout << "ConcretePneu roll" << endl;
}

IPrototype *ConcretePneu::clone()
{
    return new ConcretePneu;
}

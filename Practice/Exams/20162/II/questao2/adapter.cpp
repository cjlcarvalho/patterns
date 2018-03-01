#include "adapter.h"

#include <iostream>

using namespace std;

Adapter::Adapter(int x, int y) :
    Adaptee(x, y)
{

}

void Adapter::mover(int x, int y)
{
    cout << "Adapter mover" << endl;
    Adaptee::mover(x, y);
}

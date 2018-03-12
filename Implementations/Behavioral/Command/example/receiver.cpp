#include "receiver.h"

#include <iostream>

using namespace std;

Receiver::Receiver()
{

}

void Receiver::executeAction(int parameter)
{
    cout << "Receiver executeAction with parameter: " << parameter << endl;
}

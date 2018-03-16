#include "dumbpointer.h"

#include <iostream>

using namespace std;

DumbPointer::DumbPointer()
{

}

DumbPointer::~DumbPointer()
{
    cout << "DumbPointer destructor called" << endl;
}

void DumbPointer::doSomething()
{
    cout << "DumbPointer doSomething" << endl;
}

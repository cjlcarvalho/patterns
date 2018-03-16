#include "dumbpointer.h"
#include "smartpointer.h"

#include <iostream>

using namespace std;

void leak()
{
    DumbPointer *dumb = new DumbPointer;
    dumb->doSomething();

    cout << "DumbPointer not destroyed" << endl;
}

void safe()
{
    SmartPointer smart(new DumbPointer);
    smart->doSomething();
}

int main()
{
    leak();
    safe();
    return 0;
}

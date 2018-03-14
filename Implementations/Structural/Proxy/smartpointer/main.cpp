#include "pointer.h"
#include "smartpointer.h"

void leak()
{
    // memory leak
    Pointer *dumbPointer = new Pointer;
    dumbPointer->doSomething();
}

void safe()
{
    // safe delete through smartpointer
    SmartPointer smart(new Pointer);
    smart->doSomething();
}

int main()
{
    leak();
    safe();

    return 0;
}

#include "abstraction.h"
#include "concrete.h"

int main()
{
    Abstraction *a = new Concrete;

    a->templateMethod();

    return 0;
}

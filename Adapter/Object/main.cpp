#include "target.h"
#include "adaptee.h"
#include "adapter.h"

int main()
{
    Target *target = new Adapter;

    target->setAdaptee(new Adaptee);

    target->request();

    return 0;
}

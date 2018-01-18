#include "target.h"
#include "adapter.h"

#include <iostream>

int main()
{
    Target *target = new Adapter;

    target->request();

    return 0;
}

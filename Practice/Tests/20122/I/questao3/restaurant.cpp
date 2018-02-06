#include "restaurant.h"
#include "chef.h"

void Restaurant::makeFood()
{
    Chef *chef = createChef();

    if (chef)
        chef->cook();
}

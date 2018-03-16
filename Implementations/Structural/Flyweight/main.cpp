#include "coffeeshop.h"
#include "coffee.h"
#include "coffeemaker.h"

int main()
{
    CoffeeShop *shop = new CoffeeShop(new CoffeeMaker);

    shop->takeOrder("less sugar", "1");
    shop->takeOrder("more milk", "2");
    shop->takeOrder("without sugar", "5");

    shop->serve();

    return 0;
}

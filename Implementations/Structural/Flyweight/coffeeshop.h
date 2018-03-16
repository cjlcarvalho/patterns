#ifndef COFFEESHOP_H
#define COFFEESHOP_H

#include <map>
#include <string>

using namespace std;

class CoffeeMaker;
class Coffee;

class CoffeeShop
{
public:
    CoffeeShop(CoffeeMaker *coffeeMaker);
    void takeOrder(string coffeeType, string table);
    void serve();

private:
    CoffeeMaker *m_coffeeMaker;
    map<string, Coffee *> m_orders;
};

#endif // COFFEESHOP_H

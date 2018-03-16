#include "coffeeshop.h"
#include "coffee.h"
#include "coffeemaker.h"

#include <iostream>

using namespace std;

CoffeeShop::CoffeeShop(CoffeeMaker *coffeeMaker) :
    m_coffeeMaker(coffeeMaker)
{

}

void CoffeeShop::takeOrder(string coffeeType, string table)
{
    // storing orders by table
    m_orders[table] = m_coffeeMaker->make(coffeeType);
}

void CoffeeShop::serve()
{
    for (auto &table : m_orders)
        cout << "Serving coffee to table " << table.first << endl;
}

#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H

#include <map>
#include <string>

using namespace std;

class Coffee;

class CoffeeMaker
{
public:
    CoffeeMaker();
    Coffee *make(string preference);

private:
    map<string, Coffee *> m_availableCoffee;
};

#endif // COFFEEMAKER_H

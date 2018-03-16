#include "coffeemaker.h"
#include "coffee.h"

CoffeeMaker::CoffeeMaker()
{

}

Coffee *CoffeeMaker::make(string preference)
{
    // if someone asks for some type of coffee
    // we need to instanciate it and store it
    // because if there is another call with the same preference
    // we can return the same type of coffee that was stored before

    if (!m_availableCoffee.count(preference))
        m_availableCoffee[preference] = new Coffee;

    return m_availableCoffee[preference];
}

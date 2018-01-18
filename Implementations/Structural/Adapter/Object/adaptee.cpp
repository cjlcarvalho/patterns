#include "adaptee.h"

#include <iostream>

Adaptee::Adaptee()
{

}

void Adaptee::specificRequest()
{
    std::cout << "specificRequest called" << std::endl;
}

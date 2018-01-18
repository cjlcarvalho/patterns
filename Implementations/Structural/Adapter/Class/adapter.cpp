#include "adapter.h"

#include <iostream>

Adapter::Adapter()
{

}

void Adapter::request()
{
    specificRequest();
    std::cout << "request called" << std::endl;
}

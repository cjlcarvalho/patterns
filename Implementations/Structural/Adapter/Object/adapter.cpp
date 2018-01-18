#include "adaptee.h"
#include "adapter.h"

#include <iostream>

Adapter::Adapter() :
    m_Adaptee(nullptr)
{

}

void Adapter::request()
{
    if(m_Adaptee)
        m_Adaptee->specificRequest();
    std::cout << "request called" << std::endl;
}

void Adapter::setAdaptee(Adaptee *adaptee)
{
    m_Adaptee = adaptee;
}

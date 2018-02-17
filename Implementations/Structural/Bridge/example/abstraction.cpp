#include "abstraction.h"
#include "implementor.h"

Abstraction::Abstraction() :
    m_implementor(nullptr)
{

}

void Abstraction::setImplementor(Implementor *implementor)
{
    m_implementor = implementor;
}

void Abstraction::operation()
{
    if (m_implementor)
        m_implementor->operation();
}

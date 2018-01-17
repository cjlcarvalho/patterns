#include "product.h"
#include "concretebuilder2.h"
#include "product2.h"

ConcreteBuilder2::ConcreteBuilder2() :
    m_result(nullptr)
{

}

void ConcreteBuilder2::buildPart()
{
    m_result = new Product2;
}

Product *ConcreteBuilder2::getResult()
{
    return m_result;
}

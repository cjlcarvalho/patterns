#include "product.h"
#include "concretebuilder1.h"
#include "product1.h"

ConcreteBuilder1::ConcreteBuilder1() :
    m_result(nullptr)
{

}

void ConcreteBuilder1::buildPart()
{
    m_result = new Product1;
}

Product *ConcreteBuilder1::getResult()
{
    return m_result;
}

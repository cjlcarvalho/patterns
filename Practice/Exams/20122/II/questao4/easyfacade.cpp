#include "easyfacade.h"
#include "complexapi.h"

EasyFacade::EasyFacade(ComplexAPI *complexObj) :
    m_complexObj(complexObj)
{

}

void EasyFacade::doEasier()
{
    m_complexObj->doFirst();
    m_complexObj->doSecond();
    m_complexObj->doThird();
}

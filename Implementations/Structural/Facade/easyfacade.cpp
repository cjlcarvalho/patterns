#include "easyfacade.h"
#include "complexapi.h"

/* 
   Imagine that you want to make some API easier to use...
   In this case, it's ComplexAPI.
   So, EasyFacade will receive a ComplexAPI instance and
   make the process of build and destruction easier than calling it directly from
   the ComplexAPI normal interface.
*/

EasyFacade::EasyFacade(ComplexAPI *instance) :
    m_complexInstance(instance)
{

}

void EasyFacade::buildOperation()
{
    m_complexInstance->init();
    m_complexInstance->prepareThings();
    m_complexInstance->showThings();
    m_complexInstance->runThings();
}

void EasyFacade::destructionOperation()
{
    m_complexInstance->update();
    m_complexInstance->predelete();
    m_complexInstance->destroyEverything();
}

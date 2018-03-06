#include "complexapi.h"
#include "easyfacade.h"

int main()
{
    EasyFacade facade(new ComplexAPI);
    facade.buildOperation();
    facade.destructionOperation();
    return 0;
}

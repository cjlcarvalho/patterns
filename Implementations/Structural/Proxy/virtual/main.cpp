#include "resource.h"
#include "highcostresource.h"
#include "resourceproxy.h"

int main()
{
    Resource *resource = new ResourceProxy;
    resource->doSomething();

    return 0;
}

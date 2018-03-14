#include "resource.h"
#include "concreteresource.h"
#include "resourceproxy.h"

int main()
{
    Resource *untrusted = new ResourceProxy(111);
    untrusted->doSomething();

    Resource *trusted = new ResourceProxy(34);
    trusted->doSomething();

    return 0;
}

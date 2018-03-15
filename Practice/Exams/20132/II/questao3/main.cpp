#include "resource.h"
#include "lazyloader.h"

int main()
{
    Resource *lazy = new LazyLoader;

    lazy->doSomething();

    return 0;
}

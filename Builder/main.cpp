#include "product.h"
#include "concretebuilder1.h"
#include "concretebuilder2.h"
#include "director.h"

int main()
{
    Director director;
    director.addBuilder(new ConcreteBuilder1);
    director.addBuilder(new ConcreteBuilder2);

    director.construct();

    std::vector<Product*> products = director.products();

    for (Product* product : products)
        product->doSomething();

    return 0;
}

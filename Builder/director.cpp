#include "product.h"
#include "builder.h"
#include "director.h"

#include <vector>

Director::Director()
{
}

void Director::addBuilder(Builder *builder)
{
    m_builders.push_back(builder);
}

void Director::construct() const
{
    for (Builder *builder : m_builders) {
        if (builder)
            builder->buildPart();
    }
}

std::vector<Product*> Director::products()
{
    std::vector<Product*> productsVec;

    for (Builder *builder : m_builders) {
        if (builder)
            productsVec.push_back(builder->getResult());
    }

    return productsVec;
}

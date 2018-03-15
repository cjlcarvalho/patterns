#include "lazyloader.h"
#include "concreteresource.h"

LazyLoader::LazyLoader() :
    m_resource(nullptr)
{

}

void LazyLoader::doSomething()
{
    if (!m_resource)
        m_resource = new ConcreteResource;
    m_resource->doSomething();
}

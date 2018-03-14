#include "resourceproxy.h"
#include "highcostresource.h"

ResourceProxy::ResourceProxy() :
    m_resource(nullptr)
{

}

ResourceProxy::~ResourceProxy()
{
    delete m_resource;
}

void ResourceProxy::doSomething()
{
    if (!m_resource)
        m_resource = new HighCostResource;
    m_resource->doSomething();
}

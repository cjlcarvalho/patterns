#include "resourcesaver.h"
#include "highcostresource.h"

ResourceSaver::ResourceSaver() :
    m_resource(nullptr)
{

}

void ResourceSaver::doSomething()
{
    if (!m_resource)
        m_resource = new HighCostResource;
    m_resource->doSomething();
}

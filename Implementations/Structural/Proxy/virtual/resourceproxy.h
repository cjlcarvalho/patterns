#ifndef RESOURCEPROXY_H
#define RESOURCEPROXY_H

#include "resource.h"

class ResourceProxy : public Resource
{
public:
    ResourceProxy();
    ~ResourceProxy();
    void doSomething() override;

private:
    Resource *m_resource;
};

#endif // RESOURCEPROXY_H

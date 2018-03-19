#ifndef RESOURCESAVER_H
#define RESOURCESAVER_H

#include "resource.h"

class ResourceSaver : public Resource
{
public:
    ResourceSaver();
    void doSomething() override;

private:
    Resource *m_resource;
};

#endif // RESOURCESAVER_H

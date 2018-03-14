#ifndef RESOURCEPROXY_H
#define RESOURCEPROXY_H

#include "resource.h"

class ResourceProxy : public Resource
{
public:
    ResourceProxy(int userID);
    void doSomething() override;

private:
    int m_userID;
    Resource *m_resource;
};

#endif // RESOURCEPROXY_H

#ifndef LAZYLOADER_H
#define LAZYLOADER_H

#include "resource.h"

class LazyLoader : public Resource
{
public:
    LazyLoader();
    void doSomething() override;

private:
    Resource *m_resource;
};

#endif // LAZYLOADER_H

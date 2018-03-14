#ifndef RESOURCE_H
#define RESOURCE_H

class Resource
{
public:
    virtual ~Resource();
    virtual void doSomething() = 0;
};

#endif // RESOURCE_H

#ifndef FACADE_H
#define FACADE_H

class Facade
{
public:
    virtual void manipulateThread() = 0;
    virtual void checkMutualExclusion() = 0;
    virtual void startIO() = 0;
};

#endif // FACADE_H

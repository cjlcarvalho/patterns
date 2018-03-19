#ifndef MUTUALEXCLUSION_H
#define MUTUALEXCLUSION_H

class MutualExclusion
{
public:
    virtual bool check() = 0;
    virtual void load() = 0;
    virtual void create() = 0;
    virtual void remove() = 0;
};

#endif // MUTUALEXCLUSION_H

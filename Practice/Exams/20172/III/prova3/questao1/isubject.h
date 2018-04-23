#ifndef ISUBJECT_H
#define ISUBJECT_H

#include <vector>

using namespace std;

class IObserver;

class ISubject
{
public:
    void addObserver(IObserver *o);
    virtual void notify();

private:
    vector<IObserver *> m_observers;
};

#endif // ISUBJECT_H

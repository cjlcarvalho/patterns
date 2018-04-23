#include "isubject.h"
#include "iobserver.h"

void ISubject::addObserver(IObserver *o)
{
    m_observers.push_back(o);
}

void ISubject::notify()
{
    for (IObserver *o : m_observers)
        o->update(this);
}

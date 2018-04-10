#ifndef OBSERVERITERATOR_H
#define OBSERVERITERATOR_H

#include "observer.h"

class Subject;

class ObserverIterator : public Observer
{
public:
    void update(Subject *subject) override;

private:
    int m_current;
};

#endif // OBSERVERITERATOR_H

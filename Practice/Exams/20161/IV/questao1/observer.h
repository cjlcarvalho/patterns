#ifndef OBSERVER_H
#define OBSERVER_H

#include "subject.h"

#include <string>

using namespace std;

class Observer
{
public:
    virtual void update(Subject *subject, string stateName) = 0;
};

#endif // OBSERVER_H

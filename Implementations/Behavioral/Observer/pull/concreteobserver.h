#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "observer.h"

#include <string>

using namespace std;

class Subject;

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver();
    void update(Subject *subject) override;

private:
    string m_observerState;
};

#endif // CONCRETEOBSERVER_H

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
    void update(Subject *subject, const string &subjectState) override;

private:
    string m_firstState;
    string m_secondState;
};

#endif // CONCRETEOBSERVER_H

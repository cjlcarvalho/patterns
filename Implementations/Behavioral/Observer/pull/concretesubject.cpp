#include "concretesubject.h"

ConcreteSubject::ConcreteSubject()
{

}

string ConcreteSubject::state() const
{
    return m_subjectState;
}

void ConcreteSubject::setState(const string &subjectState)
{
    m_subjectState = subjectState;

    notify();
}

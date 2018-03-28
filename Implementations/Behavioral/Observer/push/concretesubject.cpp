#include "concretesubject.h"

ConcreteSubject::ConcreteSubject()
{

}

string ConcreteSubject::firstState() const
{
    return m_stateFirst;
}

string ConcreteSubject::secondState() const
{
    return m_stateSecond;
}

void ConcreteSubject::setFirstState(const string &subjectState)
{
    m_stateFirst = subjectState;

    notify("first");
}

void ConcreteSubject::setSecondState(const string &subjectState)
{
    m_stateSecond = subjectState;
    
    notify("second");
}

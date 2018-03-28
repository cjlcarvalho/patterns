#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "subject.h"

#include <string>

using namespace std;

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    string firstState() const;
    string secondState() const;
    void setFirstState(const string &subjectState);
    void setSecondState(const string &subjectState);

private:
    string m_stateFirst;
    string m_stateSecond;
};

#endif // CONCRETESUBJECT_H

#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "subject.h"

#include <string>

using namespace std;

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();
    string state() const;
    void setState(const string &subjectState);

private:
    string m_subjectState;
};

#endif // CONCRETESUBJECT_H

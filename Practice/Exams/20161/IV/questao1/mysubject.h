#ifndef MYSUBJECT_H
#define MYSUBJECT_H

#include "subject.h"

#include <string>

using namespace std;

class MySubject : public Subject
{
public:
    MySubject(string name);
    void changeState(string state);
    string state() const;

protected:
    string m_state;
};

#endif // MYSUBJECT_H

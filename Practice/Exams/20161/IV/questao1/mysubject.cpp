#include "mysubject.h"

MySubject::MySubject(string name) :
    Subject(name)
{
}

void MySubject::changeState(string state)
{
    m_state = state;

    notify("estado");
}

string MySubject::state() const
{
    return m_state;
}

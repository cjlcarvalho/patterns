#include "repository.h"

Repository::Repository(string state) :
    m_state(state)
{
}

void Repository::changeState(string s)
{
    m_state = s;
    notify();
}

string Repository::state() const
{
    return m_state;
}

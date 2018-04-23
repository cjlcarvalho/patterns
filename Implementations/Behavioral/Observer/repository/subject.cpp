#include "subject.h"
#include "observer.h"

#include <algorithm>

using namespace std;

void Subject::attach(Observer *o)
{
    m_observers.push_back(o);
}

void Subject::dettach(Observer *o)
{
    auto it = find(m_observers.begin(), m_observers.end(), o);

    if (it != m_observers.end())
        m_observers.erase(it);
}

void Subject::notify()
{
    for (Observer *o : m_observers)
        o->update(this);
}

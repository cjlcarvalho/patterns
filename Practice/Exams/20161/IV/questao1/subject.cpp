#include "subject.h"
#include "observer.h"

#include <algorithm>

using namespace std;

Subject::Subject(string name) :
    m_name(name)
{
}

void Subject::notify(string stateName)
{
    for (Observer *observer : m_observers)
        observer->update(this, stateName);
}

void Subject::attach(Observer *observer)
{
    m_observers.push_back(observer);
}

void Subject::dettach(Observer *observer)
{
    auto it = find(m_observers.begin(), m_observers.end(), observer);

    if (it != m_observers.end())
        m_observers.erase(it);
}

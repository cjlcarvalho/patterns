#include "subject.h"
#include "observer.h"

#include <algorithm>

using namespace std;

void Subject::attach(Observer *observer)
{
    m_observers.push_back(observer);
}

void Subject::detach(Observer *observer)
{
    auto it = find(m_observers.begin(), m_observers.end(), observer);

    if (it != m_observers.end())
        m_observers.erase(it);
}

void Subject::notify()
{
    for (Observer *observer : m_observers)
        observer->update(this);
}

#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

using namespace std;

class Observer;

class Subject
{
public:
    virtual void attach(Observer *observer);
    virtual void detach(Observer *observer);

protected:
    void notify();

private:
    vector<Observer *> m_observers;
};

#endif // SUBJECT_H

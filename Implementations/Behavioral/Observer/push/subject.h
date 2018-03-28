#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
#include <vector>

using namespace std;

class Observer;

class Subject
{
public:
    virtual void attach(Observer *observer);
    virtual void detach(Observer *observer);

protected:
    void notify(const string &subjectState);

private:
    vector<Observer *> m_observers;
};

#endif // SUBJECT_H

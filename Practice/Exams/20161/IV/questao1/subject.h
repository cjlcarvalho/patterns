#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <string>

using namespace std;

class Observer;

class Subject
{
public:
    void notify(string stateName);
    virtual void attach(Observer *observer);
    virtual void dettach(Observer *observer);
    string name() const;

protected:
    Subject(string name);

private:
    string m_name;
    vector<Observer *> m_observers;
};

#endif // SUBJECT_H

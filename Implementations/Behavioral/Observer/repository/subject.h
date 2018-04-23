#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

using namespace std;

class Observer;

class Subject
{
public:
    void attach(Observer *o);
    void dettach(Observer *o);
    virtual void notify();
        
protected:
    vector<Observer *> m_observers;
};

#endif // SUBJECT_H

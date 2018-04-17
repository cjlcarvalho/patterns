#ifndef MYSUBJECTOBSERVER_H
#define MYSUBJECTOBSERVER_H

#include "observer.h"
#include "mysubject.h"

#include <string>

using namespace std;

class MySubjectObserver : public MySubject, public Observer
{
public:
    MySubjectObserver(string name);
    void update(Subject *subject, string stateName) override;
};

#endif // MYSUBJECTOBSERVER_H

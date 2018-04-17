#include "mysubjectobserver.h"

#include <iostream>

using namespace std;

MySubjectObserver::MySubjectObserver(string name) :
    MySubject(name)
{

}

void update(Subject *subject, string stateName)
{
    MySubject *m = dynamic_cast<MySubject *>(subject);

    if (m) {
        cout << m->name() << " mudou " << stateName << " para " << m->state() << " estou mudando o meu também para " << m->state() << endl;

        if (stateName == "estado")
            changeState(m->state());
    }
}

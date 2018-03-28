#include "concreteobserver.h"
#include "subject.h"
#include "concretesubject.h"

#include <iostream>

using namespace std;

ConcreteObserver::ConcreteObserver()
{

}

void ConcreteObserver::update(Subject *subject)
{
    if (subject) {
        m_observerState = dynamic_cast<ConcreteSubject *>(subject)->state();

	cout << "Changing ConcreteObserver state to " << m_observerState << endl;
    }
}

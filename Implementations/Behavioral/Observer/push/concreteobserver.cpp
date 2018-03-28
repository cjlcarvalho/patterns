#include "concreteobserver.h"
#include "subject.h"
#include "concretesubject.h"

#include <iostream>

using namespace std;

ConcreteObserver::ConcreteObserver()
{

}

void ConcreteObserver::update(Subject *subject, const string &subjectState)
{
    if (subject) {
	ConcreteSubject *conSubject = dynamic_cast<ConcreteSubject *>(subject);

	if (conSubject) {
	    cout << "Changing ConcreteObserver " << subjectState << " to ";
	    
	    if (subjectState == "first") {
	        m_firstState = conSubject->firstState();
		cout << m_firstState << endl;
	    }
	    else if (subjectState == "second") {
		m_secondState = conSubject->secondState();
		cout << m_secondState << endl;
	    }
	}
    }
}

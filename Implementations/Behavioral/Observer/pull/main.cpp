#include "subject.h"
#include "concretesubject.h"
#include "observer.h"
#include "concreteobserver.h"

int main()
{
    ConcreteSubject *sandro = new ConcreteSubject;
    ConcreteSubject *manoel = new ConcreteSubject;   

    Observer *a1 = new ConcreteObserver;
    Observer *a2 = new ConcreteObserver;
    Observer *a3 = new ConcreteObserver;

    sandro->attach(a1);
    sandro->attach(a3);

    manoel->attach(a2);
    manoel->attach(a3);

    sandro->setState("Aula padrões");
    manoel->setState("Aula programação web");

    return 0;
}

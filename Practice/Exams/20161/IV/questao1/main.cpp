#include "subject.h"
#include "mysubject.h"
#include "observer.h"
#include "mysubjectobserver.h"

int main()
{
    MySubject *s1 = new MySubject("s1");
    
    MySubjectObserver *so1 = new MySubjectObserver("so1");
    MySubjectObserver *so2 = new MySubjectObserver("so2");
    
    s1->attach(so1);
    
    so1->attach(so2);

    s1->changeState("X");

    return 0;
}

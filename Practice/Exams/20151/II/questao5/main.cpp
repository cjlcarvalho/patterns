#include "component.h"
#include "student.h"
#include "group.h"

int main()
{
    Component *programming = new Group;

    Component *caio = new Student(10);
    Component *sobral = new Student(10);
    Component *milena = new Student(10);
    
    programming->addComponent(caio);
    programming->addComponent(sobral);
    programming->addComponent(milena);

    Component *psychology = new Group;

    Component *dri = new Student(10);

    psychology->addComponent(dri);

    Component *ifba = new Group;

    ifba->addComponent(programming);
    ifba->addComponent(psychology);

    psychology->addGrade(2);
    programming->addGrade(3);

    ifba->addGrade(5);

    ifba->showGrade();

    return 0;
}

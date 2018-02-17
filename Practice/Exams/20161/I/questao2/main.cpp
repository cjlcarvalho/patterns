#include <iostream>
#include "flexiblefactory.h"
#include "motor.h"
#include "pneu.h"

using namespace std;

int main(){
    FlexibleFactory* ff = new FlexibleFactory;
    ff->addPrototype("Pneu", new Pneu);
    ff->addPrototype("Motor", new Motor);
    Pneu* p = dynamic_cast<Pneu*>(ff->create("Pneu"));
    Motor* m = dynamic_cast<Motor*>(ff->create("Motor"));
    if(!ff->create("Chassi"))
        cout << "NULL" << endl;
    return 0;
}

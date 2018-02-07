#include "myfactory.h"
#include "ipneu.h"
#include "concretepneu.h"

#include <iostream>

using namespace std;

int main()
{
    MyFactory *f = MyFactory::instance();
    f->addPrototype("Pneu", new ConcretePneu, 2);

    IPneu *m1 = (IPneu *)f->create("Pneu");
    IPneu *m2 = (IPneu *)f->create("Pneu");
    IPneu *m3 = (IPneu *)f->create("Pneu");
    IPneu *m4 = (IPneu *)f->create("Pneu");

    if (m1 == m2) cout << "M1 M2 IGUAIS" << endl;
    else cout << "M1 M2 DIFERENTES" << endl;

    if (m1 == m3) cout << "M1 M3 IGUAIS" << endl;
    else cout << "M1 M3 DIFERENTES" << endl;

    if (m2 == m4) cout << "M2 M4 IGUAIS" << endl;
    else cout << "M2 M4 DIFERENTES" << endl;

    IPneu *m5 = (IPneu *)f->create("Pneu");

    if (m1 == m5) cout << "M1 M5 IGUAIS" << endl;

    if (m1 == m4) cout << "M1 M4 IGUAIS" << endl;
    else cout << "M1 M4 DIFERENTES" << endl;

    if (!f->create("Motor"))
        cout << "Motor não existe" << endl;

    return 0;
}

#include <iostream>
#include "nton.h"

using namespace std;

int main(){
    Nton::initialize(3);
    Nton* i1 = Nton::getInstance();
    Nton* i2 = Nton::getInstance();
    Nton* i3 = Nton::getInstance();
    Nton* i4 = Nton::getInstance();
    if(i4 == i1) cout << "OK" << endl;
    Nton* i5 = Nton::getInstance();
    if(i5 == i2) cout << "OK" << endl;
    cout << ((i1 == i3) ? "OK" : "NO") << endl;
    return 0;
}

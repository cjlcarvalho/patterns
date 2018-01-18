#include <iostream>
#include "Nton.h"

using namespace std;

int main(){
	Nton::initialize(3, 5);
	Nton* i1 = Nton::getInstance();
	Nton* i2 = Nton::getInstance();
	Nton* i3 = Nton::getInstance();
	Nton* i4 = Nton::getInstance();
	Nton* i5 = Nton::getInstance();
	Nton* i6 = Nton::getInstance();
	if(i6 == i1) cout << "OK" << endl;
	Nton* i7 = Nton::getInstance();
	if(i7 == i2) cout << "OK" << endl;
	cout << ((i1 == i3) ? "OK" : "NO" ) << endl;
	return 0;
}

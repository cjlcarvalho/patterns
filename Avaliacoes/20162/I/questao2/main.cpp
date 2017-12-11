#include <iostream>
#include "FlexibleFactory.h"
#include "Pneu.h"
#include "Motor.h"

using namespace std;

int main(){
	FlexibleFactory* ff = new FlexibleFactory;
	ff->addPrototype("Mergeable", "Pneu", new Pneu);
	ff->addPrototype("Serializable", "Motor", new Motor);
	Pneu* p = dynamic_cast<Pneu*>(ff->createMergeable("Pneu"));
	Motor* m = dynamic_cast<Motor*>(ff->createSerializable("Motor"));
	if(p) cout << "Pneu criado" << endl;
	else cout << "Pneu não criado" << endl;
	if(m) cout << "Motor criado" << endl;
	else cout << "Motor não criado" << endl;
	return 0;
}

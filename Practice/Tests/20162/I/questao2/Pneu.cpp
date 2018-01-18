#include "Pneu.h"
#include "interfaces/IPrototype.h"

Pneu::Pneu(){
}

IPrototype* Pneu::clone(){
	return new Pneu;
}

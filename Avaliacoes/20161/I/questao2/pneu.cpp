#include "pneu.h"
#include "iprototype.h"

Pneu::Pneu(){
}

IPrototype* Pneu::clone(){
    return new Pneu;
}

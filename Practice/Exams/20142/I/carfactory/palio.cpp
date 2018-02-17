#include "palio.h"
#include "../interfaces/iprototype.h"

Palio::Palio(){
}

IPrototype* Palio::clone(){
    return new Palio;
}

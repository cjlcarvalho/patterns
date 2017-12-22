#include "monza.h"
#include "../interfaces/iprototype.h"

Monza::Monza(){
}

IPrototype* Monza::clone(){
    return new Monza;
}

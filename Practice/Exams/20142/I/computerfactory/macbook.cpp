#include "macbook.h"
#include "../interfaces/iprototype.h"

Macbook::Macbook(){
}

IPrototype* Macbook::clone(){
    return new Macbook;
}

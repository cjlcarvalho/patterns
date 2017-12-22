#include "desktop.h"
#include "../interfaces/iprototype.h"

Desktop::Desktop(){
}

IPrototype* Desktop::clone(){
    return new Desktop;
}

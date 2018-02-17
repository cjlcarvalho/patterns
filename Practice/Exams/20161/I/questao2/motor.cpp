#include "motor.h"
#include "iprototype.h"

Motor::Motor(){
}

IPrototype* Motor::clone(){
    return new Motor;
}

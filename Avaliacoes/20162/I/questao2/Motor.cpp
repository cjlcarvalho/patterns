#include "interfaces/IPrototype.h"
#include "Motor.h"

Motor::Motor(){
}

IPrototype* Motor::clone(){
	return new Motor;
}

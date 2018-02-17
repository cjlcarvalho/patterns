#ifndef MOTOR_H
#define MOTOR_H

#include "interfaces/IPrototype.h"
#include "interfaces/ISerializable.h"

class Motor : public ISerializable {
	public:
		Motor();
		IPrototype* clone();
};

#endif // MOTOR_H

#ifndef ICARFACTORY_H
#define ICARFACTORY_H

#include "IPneu.h"
#include "IMotor.h"
#include "IChassi.h"

class ICarFactory {
	public:
		virtual IPneu* createPneu() = 0;
		virtual IMotor* createMotor() = 0;
		virtual IChassi* createChassi() = 0;

};

#endif // ICARFACTORY_H

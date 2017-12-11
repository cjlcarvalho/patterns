#ifndef PNEU_H
#define PNEU_H

#include "interfaces/IMergeable.h"
#include "interfaces/IPrototype.h"

class Pneu : public IMergeable {
	public:
		Pneu();
		IPrototype* clone();
};

#endif // PNEU_H

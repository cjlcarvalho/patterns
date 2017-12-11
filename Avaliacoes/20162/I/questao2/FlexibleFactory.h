#ifndef FLEXIBLEFACTORY_H
#define FLEXIBLEFACTORY_H

#include <map>
#include "interfaces/IPrototype.h"
#include "interfaces/IMergeable.h"
#include "interfaces/ISerializable.h"

using namespace std;

class FlexibleFactory {
	private:
		map<string, IMergeable*> _mergeables;
		map<string, ISerializable*> _serializables;
	public:
		FlexibleFactory();
		void addPrototype(string, string, IPrototype*);
		IMergeable* createMergeable(string);
		ISerializable* createSerializable(string);
};

#endif // FLEXIBLEFACTORY_H

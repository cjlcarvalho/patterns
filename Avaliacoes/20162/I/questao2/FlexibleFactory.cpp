#include "FlexibleFactory.h"
#include "interfaces/IMergeable.h"
#include "interfaces/ISerializable.h"

using namespace std;

FlexibleFactory::FlexibleFactory(){
}

void FlexibleFactory::addPrototype(string type, string name, IPrototype* prototype){
	if(type == "Mergeable")
		this->_mergeables[name] = dynamic_cast<IMergeable*>(prototype);
	else if(type == "Serializable")
		this->_serializables[name] = dynamic_cast<ISerializable*>(prototype);
}

IMergeable* FlexibleFactory::createMergeable(string name){
	if(this->_mergeables.count(name))
		return dynamic_cast<IMergeable*>(this->_mergeables[name]->clone());
	return nullptr;
}

ISerializable* FlexibleFactory::createSerializable(string name){
	if(this->_serializables.count(name))
		return dynamic_cast<ISerializable*>(this->_serializables[name]->clone());
	return nullptr;
}


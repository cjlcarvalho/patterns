#include "MyFactory.h"
#include "interfaces/IPneu.h"
#include "interfaces/IChassi.h"
#include "interfaces/IMotor.h"
#include "ConcretePneu.h"
#include "ConcreteChassi.h"
#include "ConcreteMotor.h"

MyFactory* MyFactory::_instance = nullptr;

MyFactory::MyFactory(int pneu, int chassi, int motor) : _pneu(pneu), _chassi(chassi), _motor(motor){
	_pneuCont = 0;
	_chassiCont = 0;
	_motorCont = 0;
}

MyFactory* MyFactory::getInstance(int pneu, int chassi, int motor){
	if(!MyFactory::_instance)
		MyFactory::_instance = new MyFactory(pneu, chassi, motor);
	return MyFactory::_instance;
}

IPneu* MyFactory::createPneu(){
	if(_pneuCont < _pneu)
		_pneus.push_back(new ConcretePneu);
	return _pneus[_pneuCont++ % _pneu];
}

IChassi* MyFactory::createChassi(){
	if(_chassiCont < _chassi)
		_chassis.push_back(new ConcreteChassi);
	return _chassis[_chassiCont++ % _chassi];
}

IMotor* MyFactory::createMotor(){
	if(_motorCont < _motor)
		_motores.push_back(new ConcreteMotor);
	return _motores[_motorCont++ % _motor];
}

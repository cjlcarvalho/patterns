#include <iostream>
#include "MyFactory.h"
#include "interfaces/IPneu.h"
#include "interfaces/IChassi.h"
#include "interfaces/IMotor.h"
#include "ConcretePneu.h"
#include "ConcreteChassi.h"
#include "ConcreteMotor.h"

MyFactory* MyFactory::_instance = nullptr;

MyFactory::MyFactory(int pneu, int chassi, int motor) : _pneu(pneu), _chassi(chassi), _motor(motor){
	this->_pneuCont = 0;
	this->_chassiCont = 0;
	this->_motorCont = 0;
}

MyFactory* MyFactory::getInstance(int pneu, int chassi, int motor){
	if(!MyFactory::_instance)
		MyFactory::_instance = new MyFactory(pneu, chassi, motor);
	return MyFactory::_instance;
}

IPneu* MyFactory::createPneu(){
	if(this->_pneuCont < this->_pneu){
		std::cout << this->_pneuCont + 1 << "a instancia de pneu criada" << std::endl;
		this->_pneus.push_back(new ConcretePneu);
	}
	std::cout << this->_pneuCont % this->_pneu + 1 << "o pneu" << std::endl;
	return this->_pneus[this->_pneuCont++ % this->_pneu];
}

IChassi* MyFactory::createChassi(){
	if(this->_chassiCont < this->_chassi){
		std::cout << this->_chassiCont + 1 << "a instancia de chassi criada" << std::endl;
		this->_chassis.push_back(new ConcreteChassi);
	}
	std::cout << this->_chassiCont % this->_chassi + 1 << "o motor" << std::endl;
	return this->_chassis[this->_chassiCont++ % this->_chassi];
}

IMotor* MyFactory::createMotor(){
	if(this->_motorCont < this->_motor){
		std::cout << this->_motorCont + 1 << "a instancia de motor criada" << std::endl;
		this->_motores.push_back(new ConcreteMotor);
	}
	std::cout << this->_motorCont % this->_motor  + 1 << "o motor" << std::endl;
	return this->_motores[this->_motorCont++ % this->_motor];
}

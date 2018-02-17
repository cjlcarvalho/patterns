#ifndef MYFACTORY_H
#define MYFACTORY_H

#include <vector>
#include "interfaces/ICarFactory.h"
#include "interfaces/IPneu.h"
#include "interfaces/IChassi.h"
#include "interfaces/IMotor.h"

class MyFactory : public ICarFactory {
    public:
        static MyFactory* getInstance(int pneu, int chassi, int motor);
        IPneu* createPneu();
        IChassi* createChassi();
        IMotor* createMotor();
    private:
		MyFactory(int pneu, int chassi, int motor);
        int _pneu;
		int _chassi;
		int _motor;
		int _pneuCont;
		int _chassiCont;
		int _motorCont;
		std::vector<IPneu*> _pneus;
		std::vector<IChassi*> _chassis;
		std::vector<IMotor*> _motores;
		static MyFactory* _instance;
};

#endif // MYFACTORY_H

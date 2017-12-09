#include "MyFactory.h"
#include "interfaces/IPneu.h"
#include "interfaces/IChassi.h"
#include "interfaces/IMotor.h"

int main(){
	MyFactory* f = MyFactory::getInstance(4, 3, 2);
	IMotor* m1 = f->createMotor();
	IMotor* m2 = f->createMotor();
	IMotor* m3 = f->createMotor();
	IMotor* m4 = f->createMotor();
	return 0;
}

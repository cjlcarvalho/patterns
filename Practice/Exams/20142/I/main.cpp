#include <iostream>
#include "interfaces/iextensiblefactory.h"
#include "carfactory/carfactory.h"
#include "computerfactory/computerfactory.h"
#include "carfactory/palio.h"
#include "carfactory/monza.h"
#include "computerfactory/macbook.h"
#include "computerfactory/desktop.h"

int main(){
    IExtensibleFactory* carFactory = CarFactory::instance();
    IExtensibleFactory* computerFactory = ComputerFactory::instance();
    carFactory->registerPrototype("Monza", new Monza);
    carFactory->registerPrototype("Palio", new Palio);
    if(!carFactory->create("Uno")) cout << "Uno não registrado" << endl;
    carFactory->unregisterPrototype("Monza");
    if(!carFactory->create("Monza")) cout << "Monza não registrado" << endl;
    if(carFactory->create("Palio")) cout << "Palio registrado" << endl;
    return 0;
}

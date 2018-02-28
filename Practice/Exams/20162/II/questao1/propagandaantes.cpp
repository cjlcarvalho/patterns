#include "propagandaantes.h"
#include "idecorator.h"
#include "icomponent.h"

#include <iostream>

using namespace std;

PropagandaAntes::PropagandaAntes(IComponent *decorated) :
    IDecorator(decorated)
{

}

void PropagandaAntes::play()
{
    cout << "PropagandaAntes" << endl;
    
    IDecorator::play();
}

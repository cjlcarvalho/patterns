#include "propagandadepois.h"

#include <iostream>

using namespace std;

PropagandaDepois::PropagandaDepois(IComponent *decorated) :
    IDecorator(decorated)
{

}

void PropagandaDepois::play()
{
    IDecorator::play();

    cout << "PropagandaDepois" << endl;
}

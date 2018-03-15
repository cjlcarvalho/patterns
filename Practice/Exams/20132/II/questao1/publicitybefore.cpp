#include "publicitybefore.h"
#include "component.h"

#include <iostream>

using namespace std;

PublicityBefore::PublicityBefore(Component *component) :
    Decorator(component)
{

}

void PublicityBefore::play()
{
    cout << "PublicityBefore play" << endl;
    Decorator::play();
}

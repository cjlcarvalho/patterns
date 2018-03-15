#include "publicityafter.h"
#include "component.h"

#include <iostream>

using namespace std;

PublicityAfter::PublicityAfter(Component *component) :
    Decorator(component)
{

}

void PublicityAfter::play()
{
    Decorator::play();
    cout << "PublicityAfter play" << endl;
}

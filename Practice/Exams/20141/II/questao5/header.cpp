#include "header.h"
#include "component.h"

#include <iostream>

using namespace std;

Header::Header(Component *component) :
    Decorator(component)
{

}

void Header::show()
{
    cout << "Header show" << endl;
    Decorator::show();
}

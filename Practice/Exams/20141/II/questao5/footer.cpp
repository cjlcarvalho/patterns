#include "footer.h"
#include "component.h"

#include <iostream>

using namespace std;

Footer::Footer(Component *component) :
    Decorator(component)
{

}

void Footer::show()
{
    Decorator::show();
    cout << "Footer show" << endl;
}

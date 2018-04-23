#include "component.h"
#include "composite.h"
#include "leaf.h"
#include "iterator.h"

#include <iostream>

using namespace std;

int main()
{
    Component *c = new Composite;
    c->addComponent(new Leaf(2));
    c->addComponent(new Leaf(3));
    c->addComponent(new Leaf(5));

    for (Iterator it(c); it.hasNext(); it.next())
        cout << "1" << endl;

    for (Iterator it(new Leaf(2)); it.hasNext(); it.next())
        cout << "2" << endl;

    return 0;
}

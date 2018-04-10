#include "subject.h"
#include "basiciterator.h"
#include "observer.h"
#include "observeriterator.h"

#include <iostream>

using namespace std;

int main()
{
    vector<int> v({6, 5, 4, 3, 2, 1});

    BasicIterator *it = new BasicIterator(v);

    Observer *obs = new ObserverIterator;

    it->attach(obs);

    for (it->begin(); it->hasNext(); it->next())
        cout << "main: current > " << it->current() << endl;

    return 0;
}

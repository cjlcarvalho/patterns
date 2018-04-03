#include "iterator.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);

    Iterator<vector, int> it(v);

    for (it.begin(); it.hasNext(); it.next())
        cout << *it.current() << endl;

    if (!it.current())
        cout << "nullptr" << endl;

    return 0;
}

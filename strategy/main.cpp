#include "sort.h"
#include "bubble.h"
#include "merge.h"
#include "client.h"

#include <iostream>

using namespace std;

int main()
{
    Client *client = new Client;
    client->setSorter(new Bubble);

    vector<int> *v = new vector<int>({6, 7, 8, 5, 4, 3});

    client->sort(v);

    cout << "bubble" << endl;
    for (int i : v)
        cout << i << endl;

    vector<int> *v2 = new vector<int>({100, 9, 5, 101, 2});

    client->setSorter(new Merge);
    client->sort(v2);

    cout << "merge" << endl;
    for (int i : v2)
        cout << i << endl;

    return 0;
}

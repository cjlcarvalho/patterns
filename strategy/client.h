#ifndef CLIENT_H
#define CLIENT_H

#include <vector>

using namespace std;

class Sort;

class Client
{
public:
    void setSorter(Sort *sorter);
    void sort(vector<int> *v);

private:
    Sort *m_sorter;
};

#endif // CLIENT_H

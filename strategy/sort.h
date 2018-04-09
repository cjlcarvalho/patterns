#ifndef SORT_H
#define SORT_H

#include <vector>

using namespace std;

class Sort
{
public:
    vector<int> vect() const;
    void setVector(vector<int> *v);
    virtual void algorithm() = 0;

protected:
    vector<int> *m_v;
};

#endif // SORT_H

#ifndef BASICITERATOR_H
#define BASICITERATOR_H

#include "subject.h"

#include <vector>

using namespace std;

class BasicIterator : public Subject
{
public:
    BasicIterator(const vector<int> &v);
    void begin();
    bool hasNext();
    void next();
    int current() const;

private:
    vector<int> m_vector;
    unsigned int m_top;
};

#endif // BASICITERATOR_H

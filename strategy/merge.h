#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class Merge : public Sort
{
public:
    void algorithm() override;

private:
    void merge(int begin, int mid, int end);
    void mergesort(int begin, int end);
};

#endif // MERGE_H

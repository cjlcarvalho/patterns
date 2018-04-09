#include "merge.h"

#include <vector>

using namespace std;

void Merge::algorithm()
{
    mergesort(0, m_v.size());
}

void Merge::mergesort(int begin, int end)
{
    if (begin < end) {
        int mid = (begin + end) / 2;

        mergesort(begin, mid);
        mergesort(mid + 1, end);

        merge(begin, mid, end);
    }
}

void Merge::merge(int begin, int mid, int end)
{
    int b1 = begin, b2 = mid + 1;

    vector<int> aux;

    while (b1 <= mid && b2 <= end) {
        if (m_v[b1] < m_v[b2])
            aux.push_back(m_v[b1++]);
        else
            aux.push_back(m_v[b2++]);
    }

    while (b1 <= mid)
        aux.push_back(m_v[b1++]);

    while (b2 <= end)
        aux.push_back(m_v[b2++]);

    for (int i = begin, j = 0; i <= end; i++, j++)
        m_v[i] = aux[j];
}

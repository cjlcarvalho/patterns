#include "client.h"
#include "sort.h"

void Client::setSorter(Sort *sorter)
{
    m_sorter = sorter;
}

void Client::sort(vector<int> *v)
{
    if (m_sorter) {
        m_sorter->setVector(v);
        m_sorter->algorithm();
    }
}

#include "bubble.h"

void Bubble::algorithm()
{
    for (unsigned int i = m_v.size() - 1; i > 0; i--)
        for (unsigned int j = 0; j < i; j++)
            if (m_v[j] > m_v[j+1])
                swap(m_v[j], m_v[j+1]);
}

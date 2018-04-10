#include "basiciterator.h"

BasicIterator::BasicIterator(const vector<int> &v) :
    m_vector(v),
    m_top(0)
{

}

void BasicIterator::begin()
{
    m_top = 0;
    notify();
}

bool BasicIterator::hasNext()
{
    return m_top < m_vector.size();
}

void BasicIterator::next()
{
    if (hasNext()) {
    	m_top++;
	notify();
    }
}

int BasicIterator::current() const
{
    if (m_top < m_vector.size())
        return m_vector[m_top];
    return -1;
}

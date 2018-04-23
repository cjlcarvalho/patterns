#include "leaf.h"

Leaf::Leaf(int value) :
    m_value(value)
{
}

void Leaf::operation()
{
    m_value *= 2;
}

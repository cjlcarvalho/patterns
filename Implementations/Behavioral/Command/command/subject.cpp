#include "subject.h"

Subject::Subject(int value) :
    m_value(value)
{

}

void Subject::add(int value)
{
    m_value += value;
}

int Subject::value() const
{
    return m_value;
}

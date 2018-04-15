#include "receiver.h"

Receiver::Receiver(double value) :
    m_value(value)
{

}

double Receiver::value() const
{
    return m_value;
}

void Receiver::add(double value)
{
    m_value += value;
}

void Receiver::multiply(double value)
{
    m_value *= value;
}

#include "square.h"

Square::Square() :
    m_x(0),
    m_y(0)
{

}

void Square::setX(int deltaX)
{
    m_x = deltaX;
}

int Square::x() const
{
    return m_x;
}

void Square::setY(int deltaY)
{
    m_y = deltaY;
}

int Square::y() const
{
    return m_y;
}

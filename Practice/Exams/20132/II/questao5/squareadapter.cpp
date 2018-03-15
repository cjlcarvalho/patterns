#include "squareadapter.h"
#include "square.h"

SquareAdapter::SquareAdapter(Square *square) :
    m_square(square)
{

}

void SquareAdapter::moveXY(int deltaX, int deltaY)
{
    m_square->setX(deltaX);
    m_square->setY(deltaY);
}

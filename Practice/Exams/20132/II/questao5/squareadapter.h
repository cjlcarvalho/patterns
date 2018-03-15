#ifndef SQUAREADAPTER_H
#define SQUAREADAPTER_H

#include "ishape.h"

class Square;

class SquareAdapter : public IShape
{
public:
    SquareAdapter(Square *square);
    void moveXY(int deltaX, int deltaY) override;

private:
    Square *m_square;
};

#endif // SQUAREADAPTER_H

#ifndef ISHAPE_H
#define ISHAPE_H

class IShape
{
public:
    virtual void moveXY(int deltaX, int deltaY) = 0;
};

#endif // ISHAPE_H

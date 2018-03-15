#ifndef SQUARE_H
#define SQUARE_H

class Square
{
public:
    Square();
    void setX(int deltaX);
    int x() const;
    void setY(int deltaY);
    int y() const;

private:
    int m_x;
    int m_y;
};

#endif // SQUARE_H

#ifndef ADAPTEE_H
#define ADAPTEE_H

class Adaptee
{
public:
    Adaptee(int x, int y);
    virtual void mover(int deltaX, int deltaY);
    int x();
    int y();

private:
    int m_x;
    int m_y;
};

#endif // ADAPTEE_H

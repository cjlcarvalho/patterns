#include "adaptee.h"

#include <iostream>

using namespace std;

Adaptee::Adaptee(int x, int y) :
    m_x(x),
    m_y(y)
{
}

void Adaptee::mover(int deltaX, int deltaY)
{
    cout << "Adaptee mover" << endl;
    m_x = deltaX;
    m_y = deltaY;
}

int Adaptee::x()
{
    return m_x;
}

int Adaptee::y()
{
    return m_y;
}

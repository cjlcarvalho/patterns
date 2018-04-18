#include "tanque.h"
#include "attackstrategy.h"

#include <iostream>

using namespace std;

Tanque::Tanque(int x, int y) :
    m_x(x),
    m_y(y),
    m_attack(nullptr)
{

}

void Tanque::setX(int x)
{
    m_x = x;
    notify();
}

void Tanque::setY(int y)
{
    m_y = y;
    notify();
}

int Tanque::x() const
{
    return m_x;
}

int Tanque::y() const
{
    return m_y;
}

void Tanque::setAttackStrategy(AttackStrategy *attack)
{
    m_attack = attack;
}

void Tanque::attack()
{
    if (m_attack)
        m_attack->attack();
    else
        cout << "No AttackStrategy defined" << endl;
}

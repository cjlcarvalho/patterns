#ifndef TANQUE_H
#define TANQUE_H

#include "subject.h"

class AttackStrategy;

class Tanque : public Subject
{
public:
    Tanque(int x, int y);
    void setAttackStrategy(AttackStrategy *attack);
    void setX(int x);
    void setY(int y);
    int x() const;
    int y() const;
    void attack();

private:
    int m_x;
    int m_y;
    AttackStrategy *m_attack;
};

#endif // TANQUE_H

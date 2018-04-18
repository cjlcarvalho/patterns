#ifndef HARDATTACK_H
#define HARDATTACK_H

#include "attackstrategy.h"

class HardAttack : public AttackStrategy
{
public:
    HardAttack();
    void attack() override;
};

#endif // HARDATTACK_H

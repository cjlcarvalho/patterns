#ifndef SOFTATTACK_H
#define SOFTATTACK_H

#include "attackstrategy.h"

class SoftAttack : public AttackStrategy
{
public:
    SoftAttack();
    void attack() override;
};

#endif // SOFTATTACK_H

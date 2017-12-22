#ifndef MOTOR_H
#define MOTOR_H

#include "iprototype.h"

class Motor : public IPrototype {
public:
    Motor();
    IPrototype* clone();
};

#endif // MOTOR_H

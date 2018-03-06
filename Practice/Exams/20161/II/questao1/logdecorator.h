#ifndef LOGDECORATOR_H
#define LOGDECORATOR_H

#include "decorator.h"

class IComponent;

class LogDecorator :  public Decorator
{
public:
    LogDecorator(IComponent *decorated = 0);
    void aumentarPreco(double percentual);
};

#endif // LOGDECORATOR_H

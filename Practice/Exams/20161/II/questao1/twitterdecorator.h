#ifndef TWITTERDECORATOR_H
#define TWITTERDECORATOR_H

#include "decorator.h"

class IComponent;

class TwitterDecorator : public Decorator
{
public:
    TwitterDecorator(IComponent *decorated = 0);
    void aumentarPreco(double percentual);
};

#endif // TWITTERDECORATOR_H

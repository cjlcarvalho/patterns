#ifndef PUBLICITYAFTER_H
#define PUBLICITYAFTER_H

#include "decorator.h"

class Component;

class PublicityAfter : public Decorator
{
public:
    PublicityAfter(Component *component);
    void play() override;
};

#endif // PUBLICITYAFTER_H

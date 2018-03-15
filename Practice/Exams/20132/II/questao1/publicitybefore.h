#ifndef PUBLICITYBEFORE_H
#define PUBLICITYBEFORE_H

#include "decorator.h"

class Component;

class PublicityBefore : public Decorator
{
public:
    PublicityBefore(Component *component);
    void play() override;
};

#endif // PUBLICITYBEFORE_H

#ifndef HEADER_H
#define HEADER_H

#include "decorator.h"

class Component;

class Header : public Decorator
{
public:
    Header(Component *component);
    void show() override;
};

#endif // HEADER_H

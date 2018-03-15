#ifndef FOOTER_H
#define FOOTER_H

#include "decorator.h"

class Component;

class Footer : public Decorator
{
public:
    Footer(Component *component);
    void show() override;
};

#endif // FOOTER_H

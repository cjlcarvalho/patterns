#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
    virtual bool addChild(Component *child);
    virtual void aumentarPreco(double porcentagem) = 0;
};

#endif // COMPONENT_H

#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
    virtual ~Component();
    virtual bool addChild(Component *child) = 0;
    virtual bool descartePorValidade(Component *child) = 0;
    virtual void modificarPreco(double escala) = 0;
};

#endif // COMPONENT_H

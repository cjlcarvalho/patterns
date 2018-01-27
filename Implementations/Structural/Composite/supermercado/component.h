#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
    Component();
    virtual ~Component();
    virtual void aumentarPreco(double valor) = 0;
    virtual bool addChild(Component *child);
    virtual bool removeChild(Component *child);
    virtual void mostrar() const = 0;
};

#endif // COMPONENT_H

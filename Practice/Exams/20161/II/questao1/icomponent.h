#ifndef ICOMPONENT_H
#define ICOMPONENT_H

class Decorator;

class IComponent
{
public:
    virtual void aumentarPreco(double percentual) = 0;
    virtual bool addChild(IComponent *child);
    virtual bool removeChild(IComponent *child);
    virtual void setDecorator(Decorator *decorator);
};

#endif // ICOMPONENT_H

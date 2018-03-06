#ifndef ICOMPONENT_H
#define ICOMPONENT_H

class Decorator;

class IComponent
{
public:
    virtual void aumentarPreco(double percentual) = 0;
    bool addChild(IComponent *child);
    bool removeChild(IComponent *child);
    virtual void setDecorator(Decorator *decorator) = 0;
};

#endif // ICOMPONENT_H

#ifndef OBSERVER_H
#define OBSERVER_H

class ICliente;

class Observer
{
public:
    virtual void update(ICliente *cliente) = 0;
};

#endif // OBSERVER_H

#ifndef ICOMPONENT_H
#define ICOMPONENT_H

class IComponent
{
public:
    virtual ~IComponent();
    virtual IComponent *clone() = 0;
};

#endif // ICOMPONENT_H

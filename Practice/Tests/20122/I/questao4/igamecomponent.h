#ifndef IGAMECOMPONENT_H
#define IGAMECOMPONENT_H

class IGameComponent
{
public:
    virtual ~IGameComponent();
    virtual IGameComponent *clone() = 0;
};

#endif // IGAMECOMPONENT_H

#ifndef FRIEND_H
#define FRIEND_H

#include "component.h"

class Friend : public Component
{
public:
    Friend();
    void notify() override;
};

#endif // FRIEND_H

#ifndef GROUP_H
#define GROUP_H

#include "component.h"

#include <vector>

using namespace std;

class Group : public Component 
{
public:
    Group();
    bool addChild(Component *component) override;
    void notify() override;

private:
    vector<Component *> m_children;
};

#endif // GROUP_H

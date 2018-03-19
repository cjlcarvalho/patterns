#ifndef GROUP_H
#define GROUP_H

#include "component.h"

#include <vector>

using namespace std;

class Group : public Component
{
public:
    Group();
    bool addComponent(Component *component) override;
    void addGrade(double grade) override;
    void showGrade() override;

private:
    vector<Component *> m_components;
};

#endif // GROUP_H

#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"

#include <vector>

using namespace std;

class Composite : public Component
{
public:
    Composite();
    vector<Component *> components() const override;
    bool addComponent(Component *component) override;
    bool removeComponent(Component *component) override;
    void operation() override;

private:
    vector<Component *> m_components;
};

#endif // COMPOSITE_H

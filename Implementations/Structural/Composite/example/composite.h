#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"

#include <vector>

class Composite : public Component
{
public:
    Composite();
    ~Composite();
    void operation();
    bool addChild(Component *child);
    bool removeChild(Component *child);
    Component *getChild(unsigned int index) const;

private:
    std::vector<Component *> m_children;
};

#endif // COMPOSITE_H

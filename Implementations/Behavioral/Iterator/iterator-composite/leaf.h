#ifndef LEAF_H
#define LEAF_H

#include "component.h"

#include <vector>

using namespace std;

class Leaf : public Component
{
public:
    Leaf(int value);
    void operation() override;

private:
    int m_value;
};

#endif // LEAF_H

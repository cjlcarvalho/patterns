#ifndef CATEGORY_H
#define CATEGORY_H

#include "component.h"

#include <vector>

using namespace std;

class Category : public Component
{
public:
    Category();
    bool addChild(Component *child) override;
    void aumentarPreco(double porcentagem) override;

private:
    vector<Component *> m_children;
};


#endif // CATEGORY_H

#ifndef CATEGORY_H
#define CATEGORY_H

#include "blogcomponent.h"

#include <vector>

using namespace std;

class Category : public BlogComponent
{
public:
    Category();
    bool addComponent(BlogComponent *component) override;
    void update() override;

private:
    vector<BlogComponent *> m_components;
};

#endif // CATEGORY_H

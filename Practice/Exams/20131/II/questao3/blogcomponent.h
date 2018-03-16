#ifndef BLOGCOMPONENT_H
#define BLOGCOMPONENT_H

class BlogComponent
{
public:
    virtual bool addComponent(BlogComponent *component);
    virtual void update() = 0;
};

#endif // BLOGCOMPONENT_H

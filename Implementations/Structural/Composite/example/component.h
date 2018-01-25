#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
    virtual ~Component();
    virtual bool addChild(Component *child);
    virtual bool removeChild(Component *child);
    virtual Component *getChild(unsigned int index) const;

    virtual void operation() = 0;
};

#endif // COMPONENT_H

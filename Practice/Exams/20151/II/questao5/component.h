#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
    virtual bool addComponent(Component *component);
    virtual void addGrade(double grade) = 0;
    virtual void showGrade() = 0;
};

#endif // COMPONENT_H

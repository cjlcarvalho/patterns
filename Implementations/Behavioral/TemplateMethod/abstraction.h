#ifndef ABSTRACTION_H
#define ABSTRACTION_H

class Abstraction
{
public:
    void templateMethod();

protected:
    virtual void changeable1() = 0;
    virtual void changeable2() = 0;
    void unchangeable();
};

#endif // ABSTRACTION_H

#ifndef RESTAURANT_H
#define RESTAURANT_H

class Chef;

class Restaurant
{
public:
    virtual Chef *createChef() = 0;
    void makeFood();
};

#endif // RESTAURANT_H

#ifndef VISITOR_H
#define VISITOR_H

class Vegetable;
class Meat;

class Visitor
{
public:
    virtual void visitVegetable(Vegetable *v) = 0;
    virtual void visitMeat(Meat *m) = 0;
};

#endif // VISITOR_H

#ifndef VEGETABLEVISITOR_H
#define VEGETABLEVISITOR_H

#include "visitor.h"

class Vegetable;
class Meat;

class VegetableVisitor : public Visitor
{
public:
    VegetableVisitor();
    void visitVegetable(Vegetable *v) override;
    void visitMeat(Meat *m) override;
};

#endif // VEGETABLEVISITOR_H

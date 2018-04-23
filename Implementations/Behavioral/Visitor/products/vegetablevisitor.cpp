#include "vegetablevisitor.h"
#include "meat.h"
#include "vegetable.h"

VegetableVisitor::VegetableVisitor()
{
}

void VegetableVisitor::visitMeat(Meat *m)
{

}

void VegetableVisitor::visitVegetable(Vegetable *v)
{
    v->increasePrice(0.5);
}

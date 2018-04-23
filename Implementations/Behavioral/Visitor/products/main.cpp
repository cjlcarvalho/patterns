#include "product.h"
#include "meat.h"
#include "vegetable.h"
#include "visitor.h"
#include "vegetablevisitor.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Visitor *v = new VegetableVisitor;

    Vegetable *t1 = new Vegetable(1.0);
    Vegetable *t2 = new Vegetable(5.7);
    Meat *m1 = new Meat(9.8);

    vector<Product *> vec({ m1, t1, t2 });
    
    for (Product *p : vec)
        p->accept(v);

    cout << t1->price() << endl;
    cout << t2->price() << endl;

    return 0;
}

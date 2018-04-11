#include "element.h"
#include "concreteelementa.h"
#include "concreteelementb.h"
#include "visitor.h"
#include "concretevisitor1.h"
#include "concretevisitor2.h"

#include <vector>

using namespace std;

int main()
{
    vector<Element *> elements({ new ConcreteElementA,
		                 new ConcreteElementB,
				 new ConcreteElementA,
				 new ConcreteElementA });

    vector<Visitor *> visitors({ new ConcreteVisitor1, new ConcreteVisitor2 });

    for (Element *element : elements)
        for (Visitor *visitor : visitors)
	    element->accept(visitor);

    return 0;
}

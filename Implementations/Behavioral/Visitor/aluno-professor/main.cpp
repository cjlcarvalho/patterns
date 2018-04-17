#include "element.h"
#include "visitor.h"
#include "aluno.h"
#include "professor.h"
#include "visitoraltura.h"
#include "visitormedia.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Element *> elements;
    vector<Visitor *> visitors;

    elements.push_back(new Aluno(1.90, 10));
    elements.push_back(new Professor(1.65, 31));
    elements.push_back(new Professor(1.80, 29));
    elements.push_back(new Professor(1.78, 23));
    elements.push_back(new Aluno(1.55, 8.5));

    visitors.push_back(new VisitorAltura);
    visitors.push_back(new VisitorMedia);

    for (Element *element : elements)
        for (Visitor *visitor : visitors)
            element->accept(visitor);

    cout << "Altura média: " << static_cast<VisitorAltura *>(visitors[0])->alturaMedia() << endl;
    cout << "Score médio: " << static_cast<VisitorMedia *>(visitors[1])->scoreMedio() << endl;

    return 0;
}

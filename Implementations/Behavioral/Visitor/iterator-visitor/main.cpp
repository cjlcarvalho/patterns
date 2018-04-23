#include "iterator.h"
#include "element.h"
#include "pdffile.h"
#include "sourcecode.h"
#include "visitor.h"
#include "visitorsource.h"
#include "visitorpdf.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Element *> elements({ new SourceCode("cpp", 100),
                                 new SourceCode("py", 30),
                                 new SourceCode("cpp", 89),
                                 new PDFFile("Design Patterns", "Gamma"),
                                 new PDFFile("C++ Programming", "Caio") });

    Iterator<vector> it(elements);

    VisitorSource *v = new VisitorSource;

    it.doVisit(v);

    cout << v->avgCppFiles() << endl;

    v->restart();

    VisitorPDF *v2 = new VisitorPDF;

    it.doVisit(v2);

    cout << v2->avgAuthorCaio() << endl;

    v2->restart();

    return 0;
}

#include "item.h"
#include "directory.h"
#include "file.h"
#include "logger.h"
#include "statisticalcomponent.h"

#include <iostream>

using namespace std;

int main()
{
    Item *dir1 = new Logger(new Directory("testeDir"));

    Item *arq1 = new StatisticalComponent(new File("meuarquivo.txt"));

    Item *arq2 = new File("arquivosimples.txt");

    dir1->addItem(arq1);
    dir1->addItem(arq2);

    Item *dir2 = new StatisticalComponent(new Directory("outroDir"));

    Item *arq3 = new StatisticalComponent(new Logger(new File("arquivotop.cpp")));

    dir2->addItem(arq3);

    Item *dir3 = new Directory("master");

    dir3->addItem(dir2);
    dir3->addItem(dir1);

    dir3->clone();

    cout << endl;

    dir3->clean();

    return 0;
}

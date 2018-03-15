#include "component.h"
#include "category.h"
#include "item.h"

#include <iostream>

using namespace std;

int main()
{
    Component *site = new Category;
    Component *books = new Category;
    Component *eletronics = new Category;

    Item *harryPotter = new Item(45);
    Item *hobbit = new Item(50);

    Item *macbook = new Item(4000);
    Item *tv = new Item(1500);

    site->addChild(books);
    site->addChild(eletronics);

    books->addChild(harryPotter);
    books->addChild(hobbit);

    eletronics->addChild(macbook);
    eletronics->addChild(tv);

    books->aumentarPreco(10);
    eletronics->aumentarPreco(50);

    site->aumentarPreco(10);

    cout << harryPotter->preco() << endl;
    cout << hobbit->preco() << endl;

    cout << macbook->preco() << endl;
    cout << tv->preco() << endl;

    return 0;
}

#include "directory.h"

#include <iostream>

using namespace std;

Directory::Directory(const string &name) :
    m_name(name)
{

}

bool Directory::addItem(Item *item)
{
    m_items.push_back(item);

    return true;
}

void Directory::clone()
{
    cout << "Clone " << m_name << endl;
    for (Item *item : m_items)
        item->clone();
}

void Directory::clean()
{
    cout << "Clean " << m_name << endl;
    for (Item *item : m_items)
        item->clean();
}

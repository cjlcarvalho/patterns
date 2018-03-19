#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "item.h"

#include <string>
#include <vector>

using namespace std;

class Directory : public Item
{
public:
    Directory(const string &name);
    bool addItem(Item *item) override;
    void clone() override;
    void clean() override;

private:
    vector<Item *> m_items;
    string m_name;
};

#endif // DIRECTORY_H

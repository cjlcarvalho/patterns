#ifndef FILE_H
#define FILE_H

#include "item.h"

#include <string>

using namespace std;

class File : public Item
{
public:
    File(const string &name);
    void clone() override;
    void clean() override;

private:
    string m_name;
};

#endif // FILE_H

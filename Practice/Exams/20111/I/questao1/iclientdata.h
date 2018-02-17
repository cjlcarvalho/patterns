#ifndef ICLIENTDATA_H
#define ICLIENTDATA_H

#include <string>

using namespace std;

class IClientData
{
public:
    virtual string name() const = 0;
    virtual long id() const = 0;
};

#endif // ICLIENTDATA_H

#ifndef IODEVICE_H
#define IODEVICE_H

#include <string>

using namespace std;

class IODevice
{
public:
    virtual void output(string str) = 0;
    virtual void clearBuffer() = 0;
    virtual string input() = 0;
};

#endif // IODEVICE_H

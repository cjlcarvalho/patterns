#ifndef IMONITOR_H
#define IMONITOR_H

#include <string>

class IMonitor
{
public:
    virtual void exibirInterface(std::string nomeInterface) = 0;
};

#endif // IMONITOR_H

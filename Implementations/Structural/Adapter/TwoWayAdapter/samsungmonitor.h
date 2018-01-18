#ifndef SAMSUNGMONITOR_H
#define SAMSUNGMONITOR_H

#include <string>

#include "imonitor.h"

class SamsungMonitor : public IMonitor
{
public:
    SamsungMonitor();
    void exibirInterface(std::string nomeInterface) override;
};

#endif // SAMSUNGMONITOR_H

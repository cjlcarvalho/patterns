#ifndef ADAPTERTVMONITOR_H
#define ADAPTERTVMONITOR_H

#include <string>

#include "itelevisao.h"
#include "imonitor.h"

class AdapterTVMonitor : public ITelevisao, public IMonitor
{
public:
    AdapterTVMonitor(ITelevisao *tv);
    AdapterTVMonitor(IMonitor *monitor);
    void apresentarProgramas(std::string nomePrograma) override;
    void exibirInterface(std::string nomeInterface) override;
    void setTV(ITelevisao *tv);
    void setMonitor(IMonitor *monitor);

private:
    ITelevisao *m_tv;
    IMonitor *m_monitor;
};

#endif // ADAPTERTVMONITOR_H

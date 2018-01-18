#ifndef ADAPTERTVMONITOR_H
#define ADAPTERTVMONITOR_H

#include "itelevisao.h"
#include "imonitor.h"
#include "sonytv.h"
#include "samsungmonitor.h"

class AdapterTVMonitor : public ITelevisao, public IMonitor
{
public:
    AdapterTVMonitor(const SonyTV& tv);
    AdapterTVMonitor(const SamsungMonitor& monitor);
    void apresentarProgramas() override;
    void exibirInterface() override;

private:
    SonyTV m_tv;
    SamsungMonitor m_monitor;
};

#endif // ADAPTERTVMONITOR_H

#include "adaptertvmonitor.h"
#include "sonytv.h"
#include "samsungmonitor.h"

AdapterTVMonitor::AdapterTVMonitor(const SonyTV& tv) :
    m_tv(tv)
{
}

AdapterTVMonitor::AdapterTVMonitor(const SamsungMonitor& monitor) :
    m_monitor(monitor)
{
}

void AdapterTVMonitor::apresentarProgramas()
{
    m_monitor.exibirInterface();
}

void AdapterTVMonitor::exibirInterface()
{
    m_tv.apresentarProgramas();
}

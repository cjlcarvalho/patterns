#include "adaptertvmonitor.h"
#include "itelevisao.h"
#include "imonitor.h"
#include "samsungmonitor.h"
#include "sonytv.h"

AdapterTVMonitor::AdapterTVMonitor(ITelevisao *tv) :
    m_tv(tv),
    m_monitor(new SamsungMonitor)
{
}

AdapterTVMonitor::AdapterTVMonitor(IMonitor *monitor) :
    m_monitor(monitor),
    m_tv(new SonyTV)
{
}

void AdapterTVMonitor::setTV(ITelevisao *tv)
{
    m_tv = tv;
}

void AdapterTVMonitor::setMonitor(IMonitor *monitor)
{
    m_monitor = monitor;
}

void AdapterTVMonitor::apresentarProgramas(std::string nomePrograma)
{
    m_monitor->exibirInterface(nomePrograma);
}

void AdapterTVMonitor::exibirInterface(std::string nomeInterface)
{
    m_tv->apresentarProgramas(nomeInterface);
}

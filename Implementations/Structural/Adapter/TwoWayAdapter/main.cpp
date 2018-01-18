#include "sonytv.h"
#include "adaptertvmonitor.h"
#include "samsungmonitor.h"

int main()
{
    AdapterTVMonitor tvToMonitor(new SonyTV);
    AdapterTVMonitor monitorToTv(new SamsungMonitor);

    tvToMonitor.exibirInterface("KDE Plasma");

    monitorToTv.apresentarProgramas("Jornal Nacional");

    return 0;
}

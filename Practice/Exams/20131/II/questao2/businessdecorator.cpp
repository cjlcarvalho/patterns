#include "businessdecorator.h"

BusinessDecorator::BusinessDecorator(IBusinessProcess *process) :
    m_process(process)
{

}

void BusinessDecorator::finalizeProcess()
{
    m_process->finalizeProcess();
}

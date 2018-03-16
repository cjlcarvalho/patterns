#ifndef BUSINESSDECORATOR_H
#define BUSINESSDECORATOR_H

#include "ibusinessprocess.h"

class BusinessDecorator : public IBusinessProcess
{
public:
    virtual void finalizeProcess() override;

protected:
    BusinessDecorator(IBusinessProcess *process);

private:
    IBusinessProcess *m_process;
};

#endif // BUSINESSDECORATOR_H

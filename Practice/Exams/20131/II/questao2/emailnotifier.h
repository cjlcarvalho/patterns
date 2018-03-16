#ifndef EMAILNOTIFIER_H
#define EMAILNOTIFIER_H

#include "businessdecorator.h"

class IBusinessProcess;

class EmailNotifier : public BusinessDecorator
{
public:
    EmailNotifier(IBusinessProcess *process);
    void finalizeProcess() override;
};

#endif // EMAILNOTIFIER_H

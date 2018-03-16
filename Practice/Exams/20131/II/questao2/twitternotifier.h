#ifndef TWITTERNOTIFIER_H
#define TWITTERNOTIFIER_H

#include "businessdecorator.h"

class IBusinessProcess;

class TwitterNotifier : public BusinessDecorator
{
public:
    TwitterNotifier(IBusinessProcess *process);
    void finalizeProcess() override;
};

#endif // TWITTERNOTIFIER_H

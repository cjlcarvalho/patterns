#ifndef BLOGNOTIFIER_H
#define BLOGNOTIFIER_H

#include "businessdecorator.h"

class IBusinessProcess;

class BlogNotifier : public BusinessDecorator
{
public:
    BlogNotifier(IBusinessProcess *process);
    void finalizeProcess() override;
};

#endif // BLOGNOTIFIER_H

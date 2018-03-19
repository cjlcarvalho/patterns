#ifndef FACEBOOKPOST_H
#define FACEBOOKPOST_H

#include "operationdecorator.h"

class Operation;

class FacebookPost : public OperationDecorator
{
public:
    FacebookPost(Operation *operation);
    void doOperation() override;
    void undoOperation() override;
};

#endif // FACEBOOKPOST_H

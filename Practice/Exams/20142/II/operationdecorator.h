#ifndef OPERATIONDECORATOR_H
#define OPERATIONDECORATOR_H

#include "operation.h"

#include <string>

using namespace std;

class OperationDecorator : public Operation
{
public:
    OperationDecorator(Operation *operation);
    virtual void doOperation() override;
    virtual void undoOperation() override;
    string content() const override;

private:
    Operation *m_operation;
};

#endif // OPERATIONDECORATOR_H

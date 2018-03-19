#ifndef OPERATION_H
#define OPERATION_H

#include <string>

using namespace std;

class Operation
{
public:
    virtual ~Operation();
    virtual void doOperation() = 0;
    virtual void undoOperation() = 0;
    virtual string content() const = 0;
};

#endif // OPERATION_H

#ifndef TWITTERPOST_H
#define TWITTERPOST_H

#include "operationdecorator.h"
#include "twitter4j.h"

class Operation;

class TwitterPost : public OperationDecorator
{
public:
    TwitterPost(Operation *operation);
    void doOperation() override;
    void undoOperation() override;

private:
    Twitter4J adaptee4J;
};

#endif // TWITTERPOST_H

#include "twitterpost.h"
#include "operation.h"

#include <iostream>

using namespace std;

TwitterPost::TwitterPost(Operation *operation) :
    OperationDecorator(operation)
{

}

void TwitterPost::doOperation()
{
    OperationDecorator::doOperation();

    adaptee4J.postMessage(content());
}

void TwitterPost::undoOperation()
{
    OperationDecorator::undoOperation();

    adaptee4J.removePost(content());
}

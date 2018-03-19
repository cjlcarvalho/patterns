#include "facebookpost.h"
#include "operation.h"

#include <iostream>

using namespace std;

FacebookPost::FacebookPost(Operation *operation) :
    OperationDecorator(operation)
{

}

void FacebookPost::doOperation()
{
    OperationDecorator::doOperation();

    cout << "FACEBOOK POST: " << content() << endl;
}

void FacebookPost::undoOperation()
{
    OperationDecorator::undoOperation();

    cout << "FACEBOOK REMOVE POST: " << content() << endl;
}

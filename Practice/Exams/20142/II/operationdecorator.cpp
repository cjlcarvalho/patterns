#include "operationdecorator.h"

OperationDecorator::OperationDecorator(Operation *operation) :
    m_operation(operation)
{

}

void OperationDecorator::doOperation()
{
    m_operation->doOperation();
}

void OperationDecorator::undoOperation()
{
    m_operation->undoOperation();
}

string OperationDecorator::content() const
{
    return m_operation->content();
}

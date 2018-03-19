#include "operationhistory.h"
#include "operation.h"

OperationHistory::OperationHistory() :
    m_top(0)
{

}

void OperationHistory::addOperation(Operation *operation)
{
    if (m_top < m_operations.size())
        for (unsigned int i = m_top; i < m_operations.size(); i++)
            delete m_operations[i];

    m_operations.erase(m_operations.begin() + m_top, m_operations.end());

    m_operations.push_back(operation);
    m_top++;
}

bool OperationHistory::redoOperation()
{
    if (m_top < m_operations.size()) {
        m_operations[m_top++]->doOperation();
        return true;
    }

    return false;
}

bool OperationHistory::undoOperation()
{
    if (m_top) {
        m_operations[--m_top]->undoOperation();
        return true;
    }
    
    return false;
}

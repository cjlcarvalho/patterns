#ifndef OPERATIONHISTORY_H
#define OPERATIONHISTORY_H

#include <vector>

using namespace std;

class Operation;

class OperationHistory
{
public:
    OperationHistory();
    void addOperation(Operation *operation);
    bool redoOperation();
    bool undoOperation();

private:
    vector<Operation *> m_operations;
    unsigned int m_top;
};

#endif // OPERATIONHISTORY_H

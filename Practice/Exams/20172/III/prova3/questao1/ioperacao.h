#ifndef IOPERACAO_H
#define IOPERACAO_H

#include "isubject.h"

#include <string>

using namespace std;

class IOperacao : public ISubject
{
public:
    virtual void redo();
    virtual void undo();
    string state() const;
    void setState(string state);

protected:
    IOperacao(string state);
    virtual void operacaoRedo() = 0;
    virtual void operacaoUndo() = 0;

private:
    string m_state;
};

#endif // IOPERACAO_H

#include "ioperacao.h"

IOperacao::IOperacao(string state) :
    m_state(state)
{
}

void IOperacao::redo()
{
    operacaoRedo();
    notify();
}

void IOperacao::undo()
{
    operacaoUndo();
    notify();
}

string IOperacao::state() const
{
    return m_state;
}

void IOperacao::setState(string state)
{
    m_state = state;
}

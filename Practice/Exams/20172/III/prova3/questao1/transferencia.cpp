#include "transferencia.h"

Transferencia::Transferencia(string state) :
    IOperacao(state)
{

}

void Transferencia::operacaoRedo()
{
    setState("DONE");
}

void Transferencia::operacaoUndo()
{
    setState("TODO");
}

#include "isubject.h"
#include "ioperacao.h"
#include "iobserver.h"
#include "transferencia.h"
#include "observeroperacao.h"

int main()
{
    // Explicação:
    // Os métodos redo e undo irão servir como Template Methods
    // Onde o processo chamado pelo notify será realizado sempre
    // E os métodos de operacaoRedo e operacaoUndo (protected em IOperacao)
    // sejam realizados de forma variável, a depender da classe concreta

    IOperacao *operacao = new Transferencia;

    IObserver *observer = new ObserverOperacao;

    operacao->addObserver(observer);

    operacao->redo();
    operacao->undo();

    return 0;
}

#ifndef TRANSFERENCIA_H
#define TRANSFERENCIA_H

#include "ioperacao.h"

#include <string>

using namespace std;

class Transferencia : public IOperacao
{
public:
    Transferencia(string state = "TODO");
    
private:
    void operacaoRedo() override;
    void operacaoUndo() override;
};

#endif // TRANSFERENCIA_H

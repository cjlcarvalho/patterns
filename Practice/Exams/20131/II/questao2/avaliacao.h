#ifndef AVALIACAO_H
#define AVALIACAO_H

#include "ibusinessprocess.h"

#include <string>

using namespace std;

class Avaliacao : public IBusinessProcess
{
public:
    Avaliacao(string disciplina);
    void finalizeProcess() override;

private:
    string m_disciplina;
};

#endif // AVALIACAO_H

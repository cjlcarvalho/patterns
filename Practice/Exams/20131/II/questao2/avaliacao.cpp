#include "avaliacao.h"

#include <iostream>

using namespace std;

Avaliacao::Avaliacao(string disciplina) :
    m_disciplina(disciplina)
{

}

void Avaliacao::finalizeProcess()
{
    cout << "Avaliacao finalizeProcess >> " << m_disciplina << endl;
}

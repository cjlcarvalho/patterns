#ifndef OBSERVERPESSOAFISICA_H
#define OBSERVERPESSOAFISICA_H

#include "observer.h"

#include <string>

using namespace std;

class ICliente;

class ObserverPessoaFisica : public Observer
{
public:
    ObserverPessoaFisica();
    void update(ICliente *cliente) override;

private:
    string m_nome;
    string m_rg;
    string m_endereco;
    string m_telefone;
    string m_cnpj;
};

#endif // OBSERVERPESSOAFISICA_H

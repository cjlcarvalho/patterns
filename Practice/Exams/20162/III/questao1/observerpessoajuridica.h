#ifndef OBSERVERPESSOAJURIDICA_H
#define OBSERVERPESSOAJURIDICA_H

#include "observer.h"

#include <string>

using namespace std;

class ICliente;

class ObserverPessoaJuridica : public Observer
{
public:
    ObserverPessoaJuridica();
    void update(ICliente *cliente) override;

private:
    string m_razaoSocial;
    string m_endereco;
    string m_telefone;
    string m_cnpj;
};

#endif // OBSERVERPESSOAJURIDICA_H

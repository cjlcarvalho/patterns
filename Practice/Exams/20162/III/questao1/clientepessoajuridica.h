#ifndef CLIENTEPESSOAJURIDICA_H
#define CLIENTEPESSOAJURIDICA_H

#include "icliente.h"

#include <string>

using namespace std;

class ClientePessoaJuridica : public ICliente
{
public:
    ClientePessoaJuridica(const string &razaoSocial = string(), const string &endereco = string(), const string &telefone = string(), const string &cnpj = string());
    string razaoSocial() const;

private:
    void saveData() override;

private:
    string m_razaoSocial;
};

#endif // CLIENTEPESSOAJURIDICA_H

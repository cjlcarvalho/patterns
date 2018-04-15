#ifndef CLIENTEPESSOAFISICA_H
#define CLIENTEPESSOAFISICA_H

#include "icliente.h"

#include <string>

using namespace std;

class ClientePessoaFisica : public ICliente
{
public:
    ClientePessoaFisica(const string &nome = string(), const string &rg = string(), const string &endereco = string(), const string &telefone = string(), const string &cnpj = string());
    string nome() const;
    string rg() const;

private:
    void saveData() override;

private:
    string m_nome;
    string m_rg;
};

#endif // CLIENTEPESSOAFISICA_H

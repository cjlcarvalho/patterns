#include "observerpessoajuridica.h"
#include "icliente.h"
#include "clientepessoajuridica.h"

#include <iostream>

using namespace std;

ObserverPessoaJuridica::ObserverPessoaJuridica()
{

}

void ObserverPessoaJuridica::update(ICliente *cliente)
{
    ClientePessoaJuridica *c = dynamic_cast<ClientePessoaJuridica *>(cliente);

    if (!c) {
        cout << "Cliente não é Pessoa Juridica" << endl;
        return;
    }

    m_razaoSocial = c->razaoSocial();
    m_endereco = c->endereco();
    m_telefone = c->telefone();
    m_cnpj = c->cnpj();
}

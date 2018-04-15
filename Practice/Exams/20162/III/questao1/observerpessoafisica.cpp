#include "observerpessoafisica.h"
#include "icliente.h"
#include "clientepessoafisica.h"

#include <iostream>

using namespace std;

ObserverPessoaFisica::ObserverPessoaFisica()
{

}

void ObserverPessoaFisica::update(ICliente *cliente)
{
    ClientePessoaFisica *c = dynamic_cast<ClientePessoaFisica *>(cliente);

    if (!c) {
        cout << "Cliente nao eh uma pessoa fisica" << endl;
        return;
    }

    cout << "Atualizando ObserverPessoaFisica" << endl;

    m_nome = c->nome();
    m_rg = c->rg();
    m_endereco = c->endereco();
    m_telefone = c->telefone();
    m_cnpj = c->cnpj();
}

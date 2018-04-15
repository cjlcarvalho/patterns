#include "clientepessoajuridica.h"

#include <iostream>

using namespace std;

ClientePessoaJuridica::ClientePessoaJuridica(const string &razaoSocial, const string &endereco, const string &telefone, const string &cnpj) :
    ICliente(endereco, telefone, cnpj),
    m_razaoSocial(razaoSocial)
{

}

string ClientePessoaJuridica::razaoSocial() const
{
    return m_razaoSocial;
}

void ClientePessoaJuridica::saveData()
{
    cout << "ClientePessoaJuridica saving data" << endl;
    cout << "Razao Social: " << m_razaoSocial << endl;
    cout << "Endereco: " << endereco() << endl;
    cout << "Telefone: " << telefone() << endl;
    cout << "CNPJ: " << cnpj() << endl;
}

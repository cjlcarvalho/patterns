#include "clientepessoafisica.h"

#include <iostream>

using namespace std;

ClientePessoaFisica::ClientePessoaFisica(const string &nome, const string &rg, const string &endereco, const string &telefone, const string &cnpj) :
    ICliente(endereco, telefone, cnpj),
    m_nome(nome),
    m_rg(rg)
{

}

string ClientePessoaFisica::nome() const
{
    return m_nome;
}

string ClientePessoaFisica::rg() const
{
    return m_rg;
}

void ClientePessoaFisica::saveData()
{
    cout << "ClientePessoaFisica saving data" << endl;
    cout << "Nome: " << m_nome << endl;
    cout << "RG: " << m_rg << endl;
    cout << "Endereco: " << endereco() << endl;
    cout << "Telefone: " << telefone() << endl;
    cout << "CNPJ: " << cnpj() << endl;
}

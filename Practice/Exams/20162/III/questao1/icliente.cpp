#include "icliente.h"
#include "observer.h"

#include <algorithm>
#include <iostream>

using namespace std;

ICliente::ICliente(const string &endereco, const string &telefone, const string &cnpj) :
    m_endereco(endereco),
    m_telefone(telefone),
    m_cnpj(cnpj)
{

}

string ICliente::endereco() const
{
    return m_endereco;
}

string ICliente::telefone() const
{
    return m_telefone;
}

string ICliente::cnpj() const
{
    return m_cnpj;
}

void ICliente::setEndereco(const string &endereco)
{
    m_endereco = endereco;
}

void ICliente::setTelefone(const string &telefone)
{
    m_telefone = telefone;
}

void ICliente::setCNPJ(const string &cnpj)
{
    m_cnpj = cnpj;
}

void ICliente::attach(Observer *observer)
{
    m_observers.push_back(observer);
}

void ICliente::dettach(Observer *observer)
{
    auto it = find(m_observers.begin(), m_observers.end(), observer);

    if (it != m_observers.end())
        m_observers.erase(it);
    else
        cout << "Observer not attached" << endl;
}

void ICliente::save()
{
    saveData();
    notifyObservers();
}

void ICliente::notifyObservers()
{
    for (Observer *observer : m_observers)
        observer->update(this);
}

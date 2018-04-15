#ifndef ICLIENTE_H
#define ICLIENTE_H

#include <string>
#include <vector>

using namespace std;

class Observer;

class ICliente
{
public:
    string endereco() const;
    string telefone() const;
    string cnpj() const;
    void setEndereco(const string &endereco);
    void setTelefone(const string &telefone);
    void setCNPJ(const string &cnpj);
    void attach(Observer *observer);
    void dettach(Observer *observer);
    void save();
    void notifyObservers();

protected:
    ICliente(const string &endereco = string(), const string &telefone = string(), const string &cnpj = string());
    virtual void saveData() = 0;

private:
    vector<Observer *> m_observers;
    string m_endereco;
    string m_telefone;
    string m_cnpj;
};

#endif // ICLIENTE_H

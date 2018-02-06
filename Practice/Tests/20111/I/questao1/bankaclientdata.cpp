#include "bankaclientdata.h"

BankAClientData::BankAClientData(string name, long id) :
    m_name(name),
    m_id(id)
{

}

string BankAClientData::name() const
{
    return m_name;
}

long BankAClientData::id() const
{
    return m_id;
}

IBankInformation *BankAClientData::clone()
{
    return new BankAClientData(m_name, m_id);
}

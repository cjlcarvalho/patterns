#include "ibankinformation.h"
#include "bankfactory.h"

BankFactory::BankFactory()
{

}

BankFactory::~BankFactory()
{
    for (auto it = m_informations.begin(); it != m_informations.end(); it++)
        delete (*it).second;
}

bool BankFactory::registerInformation(string name, IBankInformation *information)
{
    if (!m_informations.count(name)) {
        m_informations[name] = information;
        return true;
    }

    return false;
}

IBankInformation *BankFactory::retrieveInformation(string name) 
{
    if (m_informations.count(name))
        return m_informations[name]->clone();
    return nullptr;
}

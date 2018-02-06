#ifndef BANKACLIENTDATA_H
#define BANKACLIENTDATA_H

#include "iclientdata.h"
#include "ibankinformation.h"

#include <string>

using namespace std;

class BankAClientData : public IClientData, public IBankInformation
{
public:
    BankAClientData(string name, long id);
    string name() const;
    long id() const;
    IBankInformation *clone();

private:
    string m_name;
    long m_id;
};

#endif // BANKACLIENTDATA_H

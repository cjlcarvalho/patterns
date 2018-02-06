#ifndef BANKFACTORY_H
#define BANKFACTORY_H

#include <map>
#include <string>

using namespace std;

class IBankInformation;

class BankFactory
{
public:
    BankFactory();
    ~BankFactory();
    bool registerInformation(string name, IBankInformation *information);
    IBankInformation *retrieveInformation(string name);

protected:
    map<string, IBankInformation *> m_informations;
};

#endif // BANKFACTORY_H

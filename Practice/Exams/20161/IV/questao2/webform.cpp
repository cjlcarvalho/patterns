#include "webform.h"

#include <iostream>

using namespace std;

WebForm::WebForm(string user, string cpf, string date) :
    Form(user),
    m_cpf(cpf),
    m_date(date)
{
}

bool WebForm::validate()
{
    if (m_cpf.size() != 14) return false;

    if (m_date.size() != 10) return false;

    return true;
}

void WebForm::process()
{
    cout << "WebForm::process called" << endl;
    cout << "User: " << user() << endl;
    cout << "CPF: " << m_cpf << endl;
    cout << "Date: " << m_date << endl;
}

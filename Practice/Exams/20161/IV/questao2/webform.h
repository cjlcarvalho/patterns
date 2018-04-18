#ifndef WEBFORM_H
#define WEBFORM_H

#include "form.h"

#include <string>

using namespace std;

class WebForm : public Form
{
public:
    WebForm(string user, string cpf, string date);
    bool validate() override;
    void process() override;

private:
    string m_cpf;
    string m_date;
};

#endif // WEBFORM_H

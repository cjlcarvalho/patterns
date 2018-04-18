#include "form.h"

#include <iostream>

using namespace std;

Form::Form(string user) :
    m_user(user)
{
}

bool Form::processForm()
{
    if (!verifyUser())
        return false;

    if (!validate())
        return false;

    log();
    process();

    return true;
}

bool Form::verifyUser()
{
    return m_user == "caio";
}

void Form::log()
{
    cout << "Form::log called" << endl;
}

string Form::user() const
{
    return m_user;
}

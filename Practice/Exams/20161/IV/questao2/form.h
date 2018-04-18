#ifndef FORM_H
#define FORM_H

#include <string>

using namespace std;

class Form
{
public:
    bool processForm();
    string user() const;

protected:
    Form(string user);
    virtual bool validate() = 0;
    virtual void process() = 0;

private:
    bool verifyUser();
    void log();

private:
    string m_user;
};

#endif // FORM_H

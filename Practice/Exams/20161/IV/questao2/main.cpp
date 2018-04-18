#include "form.h"
#include "webform.h"

#include <iostream>

using namespace std;

int main()
{
    Form *form = new WebForm("caio", "111.111.111-00", "17/04/2018");

    if (form->processForm())
        cout << "Form processed" << endl;
    else
        cout << "Error during form processing" << endl;

    return 0;
}

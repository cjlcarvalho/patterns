#include "emailnotifier.h"
#include "ibusinessprocess.h"

#include <iostream>

using namespace std;

EmailNotifier::EmailNotifier(IBusinessProcess *process) :
    BusinessDecorator(process)
{

}

void EmailNotifier::finalizeProcess()
{
    BusinessDecorator::finalizeProcess();

    cout << "EmailNotifier finalizeProcess" << endl;
}

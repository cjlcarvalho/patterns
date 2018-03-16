#include "twitternotifier.h"
#include "ibusinessprocess.h"

#include <iostream>

using namespace std;

TwitterNotifier::TwitterNotifier(IBusinessProcess *process) :
    BusinessDecorator(process)
{

}

void TwitterNotifier::finalizeProcess()
{
    BusinessDecorator::finalizeProcess();

    cout << "TwitterNotifier finalizeProcess" << endl;
}

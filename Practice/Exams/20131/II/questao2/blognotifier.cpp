#include "blognotifier.h"
#include "ibusinessprocess.h"

#include <iostream>

using namespace std;

BlogNotifier::BlogNotifier(IBusinessProcess *process) :
    BusinessDecorator(process)
{

}

void BlogNotifier::finalizeProcess()
{
    BusinessDecorator::finalizeProcess();

    cout << "BlogNotifier finalizeProcess" << endl;
}

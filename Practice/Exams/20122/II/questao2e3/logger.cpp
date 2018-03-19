#include "logger.h"
#include "item.h"

#include <iostream>

using namespace std;

Logger::Logger(Item *item) :
    ItemDecorator(item)
{

}

void Logger::clone()
{
    ItemDecorator::clone();

    makeDatabaseLog();
    sendSMS();
}

void Logger::makeDatabaseLog()
{
    cout << "Database log" << endl;
}

void Logger::sendSMS()
{
    cout << "SMS sent" << endl;
}

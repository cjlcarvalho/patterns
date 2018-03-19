#ifndef LOGGER_H
#define LOGGER_H

#include "itemdecorator.h"

class Item;

class Logger : public ItemDecorator
{
public:
    Logger(Item *item);
    void clone() override;

private:
    void sendSMS();
    void makeDatabaseLog();
};

#endif // LOGGER_H

#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include "command.h"

class Receiver;

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Receiver *receiver, int parameter);
    void execute();

private:
    Receiver *m_receiver;
    int m_parameter;
};

#endif // CONCRETECOMMAND_H

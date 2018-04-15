#ifndef ADICAOCOMMAND_H
#define ADICAOCOMMAND_H

#include "icommand.h"

class Receiver;

class AdicaoCommand : public ICommand
{
public:
    AdicaoCommand(Receiver *receiver, double value);
    void execute() override;
    void undo() override;

private:
    Receiver *m_receiver;
    double m_value;
};

#endif // ADICAOCOMMAND_H

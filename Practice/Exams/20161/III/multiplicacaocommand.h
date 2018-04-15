#ifndef MULTIPLICACAOCOMMAND_H
#define MULTIPLICACAOCOMMAND_H

#include "icommand.h"

class Receiver;

class MultiplicacaoCommand : public ICommand
{
public:
    MultiplicacaoCommand(Receiver *receiver, double value);
    void execute() override;
    void undo() override;

private:
    Receiver *m_receiver;
    double m_value;
};

#endif // MULTIPLICACAOCOMMAND_H

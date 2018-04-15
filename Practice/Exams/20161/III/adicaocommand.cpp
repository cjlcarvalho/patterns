#include "adicaocommand.h"
#include "receiver.h"

AdicaoCommand::AdicaoCommand(Receiver *receiver, double value) :
    m_receiver(receiver),
    m_value(value)
{
}

void AdicaoCommand::execute()
{
    m_receiver->add(m_value);
}

void AdicaoCommand::undo()
{
    m_receiver->add(-m_value);
}

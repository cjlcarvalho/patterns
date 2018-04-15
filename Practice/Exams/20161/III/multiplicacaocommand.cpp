#include "multiplicacaocommand.h"
#include "receiver.h"

MultiplicacaoCommand::MultiplicacaoCommand(Receiver *receiver, double value) :
    m_receiver(receiver),
    m_value(value)
{

}

void MultiplicacaoCommand::execute()
{
    m_receiver->multiply(m_value);
}

void MultiplicacaoCommand::undo()
{
    m_receiver->multiply(1.0/m_value);
}

#include "concretecommand.h"
#include "receiver.h"

ConcreteCommand::ConcreteCommand(Receiver *receiver, int parameter) :
    m_receiver(receiver),
    m_parameter(parameter)
{

}

void ConcreteCommand::execute()
{
    m_receiver->executeAction(m_parameter);
}

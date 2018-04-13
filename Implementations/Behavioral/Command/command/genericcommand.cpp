#include "genericcommand.h"
#include "subject.h"

GenericCommand::GenericCommand(Subject *subject, int value) :
    m_subject(subject),
    m_value(value)
{

}

void GenericCommand::execute()
{
    m_subject->add(m_value);
}

void GenericCommand::undo()
{
    m_subject->add(-m_value);
}

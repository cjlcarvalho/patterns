#include "removetextcommand.h"
#include "text.h"

RemoveTextCommand::RemoveTextCommand(Text *receiver, const string &substring) :
    m_receiver(receiver),
    m_substring(substring)
{

}

void RemoveTextCommand::undo()
{
    m_receiver->add(m_substring);
}

void RemoveTextCommand::redo()
{
    m_receiver->remove(m_substring);
}

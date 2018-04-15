#include "commandhistory.h"
#include "icommand.h"

CommandHistory::CommandHistory() :
    m_top(0)
{

}

CommandHistory::~CommandHistory()
{
    for (ICommand *command : m_commands)
        delete command;
}

bool CommandHistory::executeCommand()
{
    if (m_top < m_commands.size()) {
        m_commands[m_top++]->execute();
        return true;
    }
    
    return false;
}

bool CommandHistory::undoCommand()
{
    if (m_top > 0) {
        m_commands[--m_top]->undo();
        return true;
    }
    return false;
}

void CommandHistory::addCommand(ICommand *command)
{
    if (m_top < m_commands.size()) {
        for (unsigned int i = m_top; i < m_commands.size(); i++)
            delete m_commands[i];
    
        m_commands.erase(m_commands.begin() + m_top, m_commands.end());

    }
    
    m_commands.push_back(command);

    m_top++;
}



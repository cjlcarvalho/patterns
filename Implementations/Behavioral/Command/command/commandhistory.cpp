#include "commandhistory.h"
#include "command.h"

CommandHistory::CommandHistory() :
    m_top(0)
{
}

void CommandHistory::addCommand(Command *command)
{
    if (m_top < m_commands.size())
        m_commands.erase(m_commands.begin() + m_top, m_commands.end());

    m_commands.push_back(command);
    m_top++;
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

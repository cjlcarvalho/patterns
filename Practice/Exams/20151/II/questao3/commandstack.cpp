#include "commandstack.h"
#include "command.h"

#include <iostream>

using namespace std;

CommandStack::CommandStack() :
    m_top(0)
{

}

void CommandStack::addCommand(Command *command)
{
    m_commands.erase(m_commands.begin() + m_top, m_commands.end());

    m_commands.push_back(command);
    m_top++;
}

bool CommandStack::undoCommand()
{
    if (m_top) {
        m_commands[--m_top]->undo();
        return true;
    }

    return false;
}

bool CommandStack::redoCommand()
{
    if (m_top < m_commands.size()) {
        m_commands[m_top++]->redo();
        return true;
    }
    return false;
}

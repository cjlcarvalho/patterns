#ifndef COMMANDHISTORY_H
#define COMMANDHISTORY_H

#include <vector>

using namespace std;

class Command;

class CommandHistory
{
public:
    CommandHistory();
    void addCommand(Command *command);
    bool redoCommand();
    bool undoCommand();

private:
    vector<Command *> m_commands;
    unsigned int m_top;
};

#endif // COMMANDHISTORY_H

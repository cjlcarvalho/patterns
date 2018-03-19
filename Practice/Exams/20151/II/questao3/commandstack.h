#ifndef COMMANDSTACK_H
#define COMMANDSTACK_H

#include <vector>

using namespace std;

class Command;

class CommandStack
{
public:
    CommandStack();
    void addCommand(Command *command);
    bool undoCommand();
    bool redoCommand();

private:
    vector<Command *> m_commands;
    unsigned int m_top;
};

#endif // COMMANDSTACK_H

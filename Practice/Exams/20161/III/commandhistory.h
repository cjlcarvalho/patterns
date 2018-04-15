#ifndef COMMANDHISTORY_H
#define COMMANDHISTORY_H

#include <vector>

using namespace std;

class ICommand;

class CommandHistory
{
public:
    template <class T> friend class CommandIterator;
    
    CommandHistory();
    ~CommandHistory();
    bool executeCommand();
    bool undoCommand();
    void addCommand(ICommand *command);

private:
    vector<ICommand *> m_commands;
    unsigned int m_top;
};

#endif // COMMANDHISTORY_H

#ifndef COMMANDITERATOR_H
#define COMMANDITERATOR_H

#include "icommand.h"
#include "commandhistory.h"

#include <vector>

using namespace std;

template <class T = ICommand>
class CommandIterator 
{
public:
    CommandIterator(CommandHistory *history);
    bool hasNext() const;
    ICommand *next();

private:
    CommandHistory *m_history;
    vector<ICommand *>::iterator m_it;
};

template <class T>
CommandIterator<T>::CommandIterator(CommandHistory *history) :
    m_history(history),
    m_it(history->m_commands.begin())
{

}

template <class T>
bool CommandIterator<T>::hasNext() const
{
    vector<ICommand *>::iterator tempIt = m_it;

    while (tempIt != m_history->m_commands.end()) {
        if (dynamic_cast<T *>(*tempIt))
            return true;
        tempIt++;
    }

    return false;
}

template <class T>
ICommand *CommandIterator<T>::next()
{
    while (m_it != m_history->m_commands.end()) {
        T *value = dynamic_cast<T *>(*m_it);

        m_it++;
        if (value)
            return value;
    }

    return nullptr;
}

#endif // COMMANDITERATOR_H

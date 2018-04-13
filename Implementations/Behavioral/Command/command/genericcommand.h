#ifndef GENERICCOMMAND_H
#define GENERICCOMMAND_H

#include "command.h"

class Subject;

class GenericCommand : public Command
{
public:
    GenericCommand(Subject *subject, int value);
    void execute() override;
    void undo() override;

private:
    Subject *m_subject;
    int m_value;
};

#endif // GENERICCOMMAND_H

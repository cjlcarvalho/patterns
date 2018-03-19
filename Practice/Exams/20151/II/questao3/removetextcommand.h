#ifndef REMOVETEXTCOMMAND_H
#define REMOVETEXTCOMMAND_H

#include "command.h"

#include <string>

using namespace std;

class Text;

class RemoveTextCommand : public Command
{
public:
    RemoveTextCommand(Text *receiver, const string &substring);
    void undo() override;
    void redo() override;

private:
    Text *m_receiver;
    string m_substring;
};

#endif // REMOVETEXTCOMMAND_H

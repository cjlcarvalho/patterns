#ifndef COMMAND_H
#define COMMAND_H

class Command
{
public:
    virtual void undo() = 0;
    virtual void redo() = 0;
};

#endif // COMMAND_H

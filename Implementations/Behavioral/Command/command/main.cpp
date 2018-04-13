#include "command.h"
#include "genericcommand.h"
#include "subject.h"
#include "commandhistory.h"

#include <iostream>

using namespace std;

int main()
{
    CommandHistory *conHis = new CommandHistory;

    Subject *sub = new Subject(10);

    Command *gen1 = new GenericCommand(sub, 2);
    gen1->execute();

    conHis->addCommand(gen1);

    Command *gen2 = new GenericCommand(sub, 3);
    gen2->execute();

    conHis->addCommand(gen2);

    if (conHis->undoCommand())
        cout << "command undone" << endl;

    cout << sub->value() << endl;

    return 0;
}

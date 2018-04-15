#include "icommand.h"
#include "commandhistory.h"
#include "commanditerator.h"
#include "adicaocommand.h"
#include "multiplicacaocommand.h"
#include "receiver.h"

#include <iostream>

using namespace std;

int main()
{
    Receiver *receiver = new Receiver;
    CommandHistory *history = new CommandHistory;

    ICommand *adicaoCommand = new AdicaoCommand(receiver, 6);
    adicaoCommand->execute();
    history->addCommand(adicaoCommand);

    ICommand *multCommand = new MultiplicacaoCommand(receiver, 3);
    multCommand->execute();
    history->addCommand(multCommand);

    ICommand *adicao2 = new AdicaoCommand(receiver, 7);
    adicao2->execute();
    history->addCommand(adicao2);

    CommandIterator<MultiplicacaoCommand> *i = new CommandIterator<MultiplicacaoCommand>(history);
    
    while (i->hasNext()) {
        ICommand *c = i->next();
        if (c)
            cout << "ACHEI" << endl;
    }

    return 0;
}

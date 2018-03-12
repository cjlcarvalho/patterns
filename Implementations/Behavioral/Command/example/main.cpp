#include "receiver.h"
#include "command.h"
#include "concretecommand.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Command *> vecCommand;
    int parameter;

    while (true) {
        cout << "Enter the parameter value: [0 for exit] ";
        cin >> parameter;

        if (!parameter) break;

        Receiver *receiver = new Receiver;
        Command *command = new ConcreteCommand(receiver, parameter);

        vecCommand.push_back(command);
    }

    for (Command *command : vecCommand)
        command->execute();

    return 0;
}

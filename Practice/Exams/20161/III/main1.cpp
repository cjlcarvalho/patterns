#include "icommand.h"
#include "adicaocommand.h"
#include "multiplicacaocommand.h"
#include "receiver.h"
#include "commandhistory.h"

#include <iostream>

using namespace std;

void menu()
{
    cout << "1 - ADICAO" << endl;
    cout << "2 - SUBTRACAO" << endl;
    cout << "3 - MULTIPLICACAO" << endl;
    cout << "4 - DIVISAO" << endl;
    cout << "5 - REFAZER OPERACAO DESFEITA" << endl;
    cout << "6 - DESFAZER ULTIMA OPERACAO" << endl;
    cout << "0 - SAIR" << endl;
    cout << "ESCOLHA: ";
}

int main()
{
    CommandHistory *history = new CommandHistory;
    Receiver *receiver = new Receiver;
    int opt;
    double value;

    do {
        cout << "VALOR ATUAL: " << receiver->value() << endl;

        menu();

        cin >> opt;

        switch (opt) {
        case 1: {
                    cout << "VALOR: ";
                    cin >> value;
                    ICommand *command = new AdicaoCommand(receiver, value);
                    command->execute();
                    history->addCommand(command);
                    break;
                }
        case 2: {
                    cout << "VALOR: ";
                    cin >> value;
                    ICommand *command = new AdicaoCommand(receiver, -value);
                    command->execute();
                    history->addCommand(command);
                    break;
                }
        case 3: {
                    cout << "VALOR: ";
                    cin >> value;
                    ICommand *command = new MultiplicacaoCommand(receiver, value);
                    command->execute();
                    history->addCommand(command);
                    break;
                }
        case 4: {
                    cout << "VALOR: ";
                    cin >> value;
                    ICommand *command = new MultiplicacaoCommand(receiver, 1.0/value);
                    command->execute();
                    history->addCommand(command);
                    break;
                }
        case 5: {
                    if (history->executeCommand())
                        cout << "OPERACAO REFEITA" << endl;
                    else
                        cout << "NAO EXISTEM OPERACOES PARA SEREM REFEITAS" << endl;
                    break;
                }
        case 6: {
                    if (history->undoCommand())
                        cout << "OPERACAO DESFEITA" << endl;
                    else
                        cout << "NAO EXISTEM OPERACOES PARA SEREM DESFEITAS" << endl;
                    break;
                }
        }


    } while (opt);

    return 0;
}

#include "text.h"
#include "command.h"
#include "removetextcommand.h"
#include "commandstack.h"

#include <string>

int main()
{
    Text *text = new Text("Olá, estou treinando RemoveTextCommand!");
    
    CommandStack *stack = new CommandStack;

    stack->addCommand(new RemoveTextCommand(text, "ao texto!"));
    
    stack->addCommand(new RemoveTextCommand(text, "substring "));
    
    stack->addCommand(new RemoveTextCommand(text, "essa "));
    
    stack->addCommand(new RemoveTextCommand(text, " Adicionei "));

    text->show();

    stack->undoCommand();

    text->show();

    stack->undoCommand();

    text->show();

    stack->undoCommand();

    text->show();

    stack->undoCommand();

    text->show();

    stack->redoCommand();

    text->show();

    stack->redoCommand();

    text->show();

    stack->redoCommand();

    text->show();

    stack->redoCommand();

    text->show();

    stack->undoCommand();

    text->show();

    return 0;
}

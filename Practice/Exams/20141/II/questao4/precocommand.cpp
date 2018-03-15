#include "precocommand.h"
#include "../questao3/component.h"

PrecoCommand::PrecoCommand(Component *component, double porcentagem) :
    m_component(component),
    m_porcentagem(porcentagem)
{

}

void PrecoCommand::undo()
{
    m_component->aumentarPreco(-m_porcentagem);
}

void PrecoCommand::redo()
{
    m_component->aumentarPreco(m_porcentagem);
}

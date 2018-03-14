#include "reajustecommand.h"
#include "../questao1/component.h"

ReajusteCommand::ReajusteCommand(Component *component, double porcentagem) :
    m_component(component),
    m_porcentagem(porcentagem)
{

}

void ReajusteCommand::aumentarPreco()
{
    m_component->aumentarPreco(m_porcentagem);
}

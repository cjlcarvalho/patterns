#ifndef REAJUSTECOMMAND_H
#define REAJUSTECOMMAND_H

class Component;

class ReajusteCommand
{
public:
    ReajusteCommand(Component *component, double porcentagem);
    void aumentarPreco();

private:
    Component *m_component;
    double m_porcentagem;
};

#endif // REAJUSTECOMMAND_H

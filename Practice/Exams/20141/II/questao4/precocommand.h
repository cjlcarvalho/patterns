#ifndef PRECOCOMMAND_H
#define PRECOCOMMAND_H

class Component;

class PrecoCommand
{
public:
    PrecoCommand(Component *component, double porcentagem);
    virtual void undo();
    virtual void redo();

private:
    Component *m_component;
    double m_porcentagem;
};

#endif // PRECOCOMMAND_H

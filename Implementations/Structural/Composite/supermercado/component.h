#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <vector>

class Component
{
public:
    Component(int id, std::string nome);
    virtual void aumentarPreco(double valor) = 0;
    virtual Component *addChild(Component *child);
    virtual Component *removeChild(Component *child);
    virtual std::vector<Component *> children() const;
    virtual void mostrar() = 0;

    bool operator==(Component *other);

protected:
    int m_id;
    std::string m_nome;
    std::vector<Component *> m_children;
};

#endif // COMPONENT_H

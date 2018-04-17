#include "professor.h"
#include "visitor.h"

Professor::Professor(double altura, int idade) :
    m_altura(altura),
    m_idade(idade)
{
}

double Professor::altura() const
{
    return m_altura;
}

int Professor::idade() const
{
    return m_idade;
}

void Professor::accept(Visitor *visitor)
{
    visitor->visitProfessor(this);
}

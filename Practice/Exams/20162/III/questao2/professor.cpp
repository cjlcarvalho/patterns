#include "professor.h"
#include "ivisitor.h"

Professor::Professor(double altura, int numeroDePublicacoes) :
    m_altura(altura),
    m_numeroDePublicacoes(numeroDePublicacoes)
{

}

void Professor::accept(IVisitor *visitor)
{
    visitor->visit(this);
}

double Professor::altura() const
{
    return m_altura;
}

void Professor::setAltura(double altura)
{
    m_altura = altura;
}

int Professor::numeroDePublicacoes() const
{
    return m_numeroDePublicacoes;
}

void Professor::setNumeroDePublicacoes(int numeroDePublicacoes)
{
    m_numeroDePublicacoes = numeroDePublicacoes;
}

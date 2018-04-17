#include "aluno.h"
#include "visitor.h"

Aluno::Aluno(double altura, double score) :
    m_altura(altura),
    m_score(score)
{
}

double Aluno::altura() const
{
    return m_altura;
}

double Aluno::score() const
{
    return m_score;
}

void Aluno::accept(Visitor *visitor)
{
    visitor->visitAluno(this);
}

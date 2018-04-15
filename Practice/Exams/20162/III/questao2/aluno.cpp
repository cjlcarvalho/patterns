#include "aluno.h"
#include "ivisitor.h"

Aluno::Aluno(double score, double altura) :
    m_score(score),
    m_altura(altura)
{

}

void Aluno::accept(IVisitor *visitor)
{
    visitor->visit(this);
}

double Aluno::score() const
{
    return m_score;
}

double Aluno::altura() const
{
    return m_altura;
}

void Aluno::setScore(double score)
{
    m_score = score;
}

void Aluno::setAltura(double altura)
{
    m_altura = altura;
}

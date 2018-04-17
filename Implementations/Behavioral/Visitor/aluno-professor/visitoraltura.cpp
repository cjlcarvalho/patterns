#include "visitoraltura.h"
#include "aluno.h"
#include "professor.h"

VisitorAltura::VisitorAltura() :
    m_alturaSum(0.0),
    m_count(0)
{
}

void VisitorAltura::visitAluno(Aluno *aluno)
{
    m_alturaSum += aluno->altura();
    m_count++;
}

void VisitorAltura::visitProfessor(Professor *professor)
{
    m_alturaSum += professor->altura();
    m_count++;
}

double VisitorAltura::alturaMedia() const
{
    return m_alturaSum / m_count;
}

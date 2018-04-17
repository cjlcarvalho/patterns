#include "visitormedia.h"
#include "aluno.h"
#include "professor.h"

VisitorMedia::VisitorMedia() :
    m_scoreSum(0.0),
    m_count(0)
{
}

void VisitorMedia::visitAluno(Aluno *aluno)
{
    m_scoreSum += aluno->score();
    m_count++;
}

void VisitorMedia::visitProfessor(Professor *professor)
{

}

double VisitorMedia::scoreMedio() const
{
    return m_scoreSum / m_count;
}

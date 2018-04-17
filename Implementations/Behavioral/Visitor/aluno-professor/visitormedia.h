#ifndef VISITORMEDIA_H
#define VISITORMEDIA_H

#include "visitor.h"

class Aluno;
class Professor;

class VisitorMedia : public Visitor
{
public:
    VisitorMedia();
    void visitAluno(Aluno *aluno) override;
    void visitProfessor(Professor *professor) override;
    double scoreMedio() const;

private:
    double m_scoreSum;
    int m_count;
};

#endif // VISITORMEDIA_H

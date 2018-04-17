#ifndef VISITORALTURA_H
#define VISITORALTURA_H

#include "visitor.h"

class Aluno;
class Professor;

class VisitorAltura : public Visitor
{
public:
    VisitorAltura();
    void visitAluno(Aluno *aluno) override;
    void visitProfessor(Professor *professor) override;
    double alturaMedia() const;

private:
    double m_alturaSum;
    int m_count;
};

#endif // VISITORALTURA_H

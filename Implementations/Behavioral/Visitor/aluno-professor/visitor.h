#ifndef VISITOR_H
#define VISITOR_H

class Aluno;
class Professor;

class Visitor
{
public:
    virtual void visitAluno(Aluno *aluno) = 0;
    virtual void visitProfessor(Professor *professor) = 0;
};

#endif // VISITOR_H

#ifndef ALUNO_H
#define ALUNO_H

#include "element.h"

class Visitor;

class Aluno : public Element
{
public:
    Aluno(double altura, double score);
    double altura() const;
    double score() const;
    void accept(Visitor *visitor) override;

private:
    double m_altura;
    double m_score;
};

#endif // ALUNO_H

#ifndef ALUNO_H
#define ALUNO_H

#include "ielement.h"

class IVisitor;

class Aluno : public IElement
{
    Q_OBJECT

    Q_PROPERTY(double score READ score)
    Q_PROPERTY(double altura READ altura)

public:
    Aluno(double score, double altura);
    void accept(IVisitor *visitor) override;
    double score() const;
    void setScore(double score);
    double altura() const;
    void setAltura(double altura);

private:
    double m_score;
    double m_altura;
};

#endif // ALUNO_H

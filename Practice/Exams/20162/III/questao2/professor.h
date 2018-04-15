#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "ielement.h"

class IVisitor;

class Professor : public IElement
{
    Q_OBJECT

    Q_PROPERTY(double altura READ altura)
    Q_PROPERTY(int numeroDePublicacoes READ numeroDePublicacoes)

public:
    Professor(double altura, int numeroDePublicacoes);
    void accept(IVisitor *visitor) override;
    double altura() const;
    void setAltura(double altura);
    int numeroDePublicacoes() const;
    void setNumeroDePublicacoes(int numeroDePublicacoes);

private:
    double m_altura;
    int m_numeroDePublicacoes;
};

#endif // PROFESSOR_H

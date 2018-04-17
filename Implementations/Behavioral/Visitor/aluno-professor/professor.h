#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "element.h"

class Visitor;

class Professor : public Element
{
public:
    Professor(double altura, int idade);
    double altura() const;
    int idade() const;
    void accept(Visitor *visitor) override;

private:
    double m_altura;
    int m_idade;
};

#endif // PROFESSOR_H

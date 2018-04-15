#ifndef VISITORSCOREMEDIO_H
#define VISITORSCOREMEDIO_H

#include "ivisitor.h"

class VisitorScoreMedio : public IVisitor
{
public:
    VisitorScoreMedio();
    void visit(IElement *element) override;
    double scoreMedio() const;

private:
    double m_scoreAcumulado;
    int m_nroDeAlunos;
};

#endif // VISITORSCOREMEDIO_H

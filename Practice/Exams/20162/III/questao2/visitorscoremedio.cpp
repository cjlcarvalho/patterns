#include "visitorscoremedio.h"
#include "ielement.h"

#include <QVariant>

VisitorScoreMedio::VisitorScoreMedio() :
    m_scoreAcumulado(0.0),
    m_nroDeAlunos(0)
{

}

void VisitorScoreMedio::visit(IElement *element)
{
    QVariant score = element->property("score");

    if (score.isValid()) {
        m_nroDeAlunos++;

        m_scoreAcumulado += score.value<double>();
    }
}

double VisitorScoreMedio::scoreMedio() const
{
    return m_scoreAcumulado / m_nroDeAlunos;
}

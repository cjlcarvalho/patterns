#include "visitoralturamedia.h"
#include "ielement.h"

#include <QVariant>

VisitorAlturaMedia::VisitorAlturaMedia() :
    m_alturaAcumulada(0.0),
    m_nroDePessoas(0)
{

}

void VisitorAlturaMedia::visit(IElement *element)
{
    QVariant altura = element->property("altura");

    if (altura.isValid()) {
        m_nroDePessoas++;

        m_alturaAcumulada += altura.value<double>();
    }
}

double VisitorAlturaMedia::alturaMedia() const
{
    return m_alturaAcumulada / m_nroDePessoas;
}

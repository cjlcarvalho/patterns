#ifndef VISITORALTURAMEDIA_H
#define VISITORALTURAMEDIA_H

#include "ivisitor.h"

class VisitorAlturaMedia : public IVisitor
{
public:
    VisitorAlturaMedia();
    void visit(IElement *element) override;
    double alturaMedia() const;

private:
    double m_alturaAcumulada;
    int m_nroDePessoas;
};

#endif // VISITORALTURAMEDIA_H

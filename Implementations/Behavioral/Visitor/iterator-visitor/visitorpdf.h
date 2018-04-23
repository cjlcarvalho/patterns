#ifndef VISITORPDF_H
#define VISITORPDF_H

#include "visitor.h"

class PDFFile;
class SourceCode;

class VisitorPDF : public Visitor
{
public:
    VisitorPDF();
    void visitPDFFile(PDFFile *pdf) override;
    void visitSourceCode(SourceCode *sc) override;
    double avgAuthorCaio() const;
    void restart();

private:
    double m_countPDF;
    double m_authorCaio;
};

#endif // VISITORPDF_H

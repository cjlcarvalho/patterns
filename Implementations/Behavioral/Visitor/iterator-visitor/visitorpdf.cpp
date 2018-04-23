#include "visitorpdf.h"
#include "pdffile.h"
#include "sourcecode.h"

VisitorPDF::VisitorPDF() :
    m_countPDF(0.0),
    m_authorCaio(0.0)
{

}

void VisitorPDF::visitSourceCode(SourceCode *sc)
{
}

void VisitorPDF::visitPDFFile(PDFFile *pdf)
{
    if (pdf->author() == "Caio")
        m_authorCaio++;
    m_countPDF++;
}

double VisitorPDF::avgAuthorCaio() const
{
    return m_authorCaio / m_countPDF;
}

void VisitorPDF::restart()
{
    m_authorCaio = m_countPDF = 0.0;
}

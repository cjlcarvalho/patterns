#include "visitorsource.h"
#include "sourcecode.h"
#include "pdffile.h"

VisitorSource::VisitorSource() :
    m_numSource(0.0),
    m_numCpp(0.0)
{

}

void VisitorSource::visitPDFFile(PDFFile *pdf)
{
}

void VisitorSource::visitSourceCode(SourceCode *sc)
{
    if (sc->language() == "cpp")
        m_numCpp++;
    m_numSource++;
}

void VisitorSource::restart()
{
    m_numSource = m_numCpp = 0;
}

double VisitorSource::avgCppFiles()
{
    return m_numCpp / m_numSource;
}

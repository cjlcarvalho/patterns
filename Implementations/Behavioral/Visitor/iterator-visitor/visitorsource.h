#ifndef VISITORSOURCE_H
#define VISITORSOURCE_H

#include "visitor.h"

class SourceCode;
class PDFFile;

class VisitorSource : public Visitor
{
public:
    VisitorSource();
    void visitPDFFile(PDFFile *pdf) override;
    void visitSourceCode(SourceCode *sc) override;
    void restart();
    double avgCppFiles();

private:
    double m_numSource;
    double m_numCpp;
};

#endif // VISITORSOURCE_H

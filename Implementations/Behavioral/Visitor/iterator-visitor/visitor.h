#ifndef VISITOR_H
#define VISITOR_H

class SourceCode;
class PDFFile;

class Visitor
{
public:
    virtual void visitSourceCode(SourceCode *sc) = 0;
    virtual void visitPDFFile(PDFFile *pdf) = 0;
};

#endif // VISITOR_H

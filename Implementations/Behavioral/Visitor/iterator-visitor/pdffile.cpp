#include "pdffile.h"
#include "visitor.h"

PDFFile::PDFFile(const string &name, const string &author) :
    m_name(name),
    m_author(author)
{

}

void PDFFile::accept(Visitor *visitor)
{
    visitor->visitPDFFile(this);
}

string PDFFile::author() const
{
    return m_author;
}

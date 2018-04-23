#ifndef PDFFILE_H
#define PDFFILE_H

#include "element.h"

#include <string>

using namespace std;

class Visitor;

class PDFFile : public Element
{
public:
    PDFFile(const string &name, const string &author);
    void accept(Visitor *visitor) override;
    string author() const;

private:
    string m_name;
    string m_author;
};

#endif // PDFFILE_H

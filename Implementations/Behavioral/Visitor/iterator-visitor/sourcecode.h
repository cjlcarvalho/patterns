#ifndef SOURCECODE_H
#define SOURCECODE_H

#include "element.h"

#include <string>

using namespace std;

class Visitor;

class SourceCode : public Element
{
public:
    SourceCode(const string &language, int numLines);
    void accept(Visitor *visitor) override;
    string language() const;
    int numLines() const;

private:
    string m_language;
    int m_numLines;
};

#endif // SOURCECODE_H

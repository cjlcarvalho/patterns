#include "sourcecode.h"
#include "visitor.h"

SourceCode::SourceCode(const string &language, int numLines) :
    m_language(language),
    m_numLines(numLines)
{

}

string SourceCode::language() const
{
    return m_language;
}

int SourceCode::numLines() const
{
    return m_numLines;
}

void SourceCode::accept(Visitor *visitor)
{
    visitor->visitSourceCode(this);
}

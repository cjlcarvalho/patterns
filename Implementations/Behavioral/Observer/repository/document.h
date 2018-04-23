#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "observer.h"

#include <string>

using namespace std;

class Compressor;
class Subject;

class Document : public Observer
{
public:
    Document(Compressor *c = nullptr, string state = string());
    void update(Subject *s) override;
    void setCompressor(Compressor *c);
    string state() const;

private:
    Compressor *m_compressor;
    string m_state;
};

#endif // DOCUMENT_H

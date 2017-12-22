#ifndef CONCRETEDOCUMENT_H
#define CONCRETEDOCUMENT_H

#include "../core/idocument.h"

class ConcreteDocument : public IDocument
{
public:
    ConcreteDocument();
    void showContents();
};

#endif // CONCRETEDOCUMENT_H

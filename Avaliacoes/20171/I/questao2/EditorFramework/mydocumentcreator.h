#ifndef MYDOCUMENTCREATOR_H
#define MYDOCUMENTCREATOR_H

#include "../core/icreator.h"

class MyDocumentCreator : public ICreator
{
public:
    MyDocumentCreator();
    IDocument *create();
};

#endif // MYDOCUMENTCREATOR_H

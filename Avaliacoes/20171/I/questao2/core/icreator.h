#ifndef ICREATOR_H
#define ICREATOR_H

#include "idocument.h"

class ICreator
{
public:
    virtual IDocument *create() = 0;
};

#endif // ICREATOR_H

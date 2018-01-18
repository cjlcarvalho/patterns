#ifndef ICREATOR_H
#define ICREATOR_H

#include "IDocument.h"

class ICreator {
    public:
        virtual IDocument* createDocument() = 0;
        void doSomethingWithDocument();
};

#endif

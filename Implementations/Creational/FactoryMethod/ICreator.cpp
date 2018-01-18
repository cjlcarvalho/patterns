#include "ICreator.h"
#include "IDocument.h"

void ICreator::doSomethingWithDocument(){
    IDocument* document = this->createDocument();
    document->talk();
}


#include "ConcreteCreator.h"
#include "IDocument.h"
#include "ConcreteDocument.h"

IDocument* ConcreteCreator::createDocument(){
    return new ConcreteDocument;
}

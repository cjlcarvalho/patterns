#include "mydocumentcreator.h"
#include "concretedocument.h"

MyDocumentCreator::MyDocumentCreator()
{

}

IDocument* MyDocumentCreator::create(){
    return new ConcreteDocument;
}

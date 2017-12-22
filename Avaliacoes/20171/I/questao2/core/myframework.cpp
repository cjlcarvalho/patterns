#include "myframework.h"

void MyFramework::setCreator(ICreator *creator){
    _creator = creator;
}

void MyFramework::fileOpen(){
    IDocument *doc = createDocument();
    if(doc)
        doc->showContents();
}

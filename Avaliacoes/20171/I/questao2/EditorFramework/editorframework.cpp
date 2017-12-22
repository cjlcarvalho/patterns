#include "editorframework.h"

EditorFramework::EditorFramework()
{
}

IDocument* EditorFramework::createDocument(){
    if(_creator)
        return _creator->create();
    return nullptr;
}

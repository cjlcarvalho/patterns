#ifndef EDITORFRAMEWORK_H
#define EDITORFRAMEWORK_H

#include "editorframework_global.h"
#include "../core/myframework.h"

class EDITORFRAMEWORKSHARED_EXPORT EditorFramework : public MyFramework
{
public:
    EditorFramework();
protected:
    IDocument *createDocument();
};

#endif // EDITORFRAMEWORK_H

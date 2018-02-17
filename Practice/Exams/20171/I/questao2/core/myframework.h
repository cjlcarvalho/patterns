#ifndef MYFRAMEWORK_H
#define MYFRAMEWORK_H

#include "icreator.h"
#include "idocument.h"

class MyFramework
{
public:
    void setCreator(ICreator *creator);
    void fileOpen();
protected:
    virtual IDocument *createDocument() = 0;
    ICreator *_creator;
};

#endif // MYFRAMEWORK_H

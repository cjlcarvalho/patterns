#include <QCoreApplication>
#include "../core/myframework.h"
#include "../EditorFramework/editorframework.h"
#include "../EditorFramework/mydocumentcreator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyFramework* f = new EditorFramework;
    f->setCreator(new MyDocumentCreator);
    f->fileOpen();

    return a.exec();
}

#include "ielement.h"
#include "ivisitor.h"
#include "aluno.h"
#include "professor.h"
#include "visitoralturamedia.h"
#include "visitorscoremedio.h"

#include <QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<IElement *> agregado;
    QVector<IVisitor *> visitors;

    agregado << new Aluno(8.0, 2.0);
    agregado << new Aluno(5.0, 1.7);
    agregado << new Professor(1.8, 2);
    agregado << new Aluno(10.0, 1.4);
    agregado << new Professor(1.5, 20);

    visitors << new VisitorAlturaMedia;
    visitors << new VisitorScoreMedio;

    for (IElement *element : agregado)
        for (IVisitor *visitor : visitors)
            element->accept(visitor);

    qDebug() << "Altura media: " << static_cast<VisitorAlturaMedia *>(visitors[0])->alturaMedia();
    qDebug() << "Score medio: " << static_cast<VisitorScoreMedio *>(visitors[1])->scoreMedio();

    return a.exec();
}

#include "logdecorator.h"

#include <QDebug>

LogDecorator::LogDecorator(IComponent *decorated) :
    Decorator(decorated)
{
}

void LogDecorator::aumentarPreco(double percentual)
{
    Decorator::aumentarPreco(percentual);
    qDebug() << "Fazendo log";
}
